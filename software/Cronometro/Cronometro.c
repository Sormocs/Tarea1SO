/* 
 * "Small Hello World" example. 
 * 
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example 
 * designs. It requires a STDOUT  device in your system's hardware. 
 *
 * The purpose of this example is to demonstrate the smallest possible Hello 
 * World application, using the Nios II HAL library.  The memory footprint
 * of this hosted application is ~332 bytes by default using the standard 
 * reference design.  For a more fully featured Hello World application
 * example, see the example titled "Hello World".
 *
 * The memory footprint of this example has been reduced by making the
 * following changes to the normal "Hello World" example.
 * Check in the Nios II Software Developers Manual for a more complete 
 * description.
 * 
 * In the SW Application project (small_hello_world):
 *
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 * In System Library project (small_hello_world_syslib):
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 *    - Define the preprocessor option ALT_NO_INSTRUCTION_EMULATION 
 *      This removes software exception handling, which means that you cannot 
 *      run code compiled for Nios II cpu with a hardware multiplier on a core 
 *      without a the multiply unit. Check the Nios II Software Developers 
 *      Manual for more details.
 *
 *  - In the System Library page:
 *    - Set Periodic system timer and Timestamp timer to none
 *      This prevents the automatic inclusion of the timer driver.
 *
 *    - Set Max file descriptors to 4
 *      This reduces the size of the file handle pool.
 *
 *    - Check Main function does not exit
 *    - Uncheck Clean exit (flush buffers)
 *      This removes the unneeded call to exit when main returns, since it
 *      won't.
 *
 *    - Check Don't use C++
 *      This builds without the C++ support code.
 *
 *    - Check Small C library
 *      This uses a reduced functionality C library, which lacks  
 *      support for buffering, file IO, floating point and getch(), etc. 
 *      Check the Nios II Software Developers Manual for a complete list.
 *
 *    - Check Reduced device drivers
 *      This uses reduced functionality drivers if they're available. For the
 *      standard design this means you get polled UART and JTAG UART drivers,
 *      no support for the LCD driver and you lose the ability to program 
 *      CFI compliant flash devices.
 *
 *    - Check Access device drivers directly
 *      This bypasses the device file system to access device drivers directly.
 *      This eliminates the space required for the device file system services.
 *      It also provides a HAL version of libc services that access the drivers
 *      directly, further reducing space. Only a limited number of libc
 *      functions are available in this configuration.
 *
 *    - Use ALT versions of stdio routines:
 *
 *           Function                  Description
 *        ===============  =====================================
 *        alt_printf       Only supports %s, %x, and %c ( < 1 Kbyte)
 *        alt_putstr       Smaller overhead than puts with direct drivers
 *                         Note this function doesn't add a newline.
 *        alt_putchar      Smaller overhead than putchar with direct drivers
 *        alt_getchar      Smaller overhead than getchar with direct drivers
 *
 */

#include <stdio.h>

#include "sys/alt_stdio.h"

#include "sys/alt_irq.h"
#include "altera_avalon_timer_regs.h"
#include "altera_avalon_pio_regs.h"

#include <system.h>

#define DISP_0 0b1000000 // 0b0000001
#define DISP_1 0b1111001 // 0b1001111
#define DISP_2 0b0100100 // 0b0010010
#define DISP_3 0b0110000 // 0b0000110
#define DISP_4 0b0011001 // 0b1001100
#define DISP_5 0b0010010 // 0b0100100
#define DISP_6 0b0000010 // 0b0100000
#define DISP_7 0b1111000 // 0b0001111
#define DISP_8 0b0000000 // 0b0000000
#define DISP_9 0b0010000 // 0b0001100

static int ms = 0;
static int sec = 0;
static int min = 0;
static int mode = 0;

static unsigned display_nums(unsigned curr_num){

	switch (curr_num)
	      {
	         case DISP_0:
	         return DISP_1;
	         break;

	         case DISP_1:
	         return DISP_2;
	         break;

	         case DISP_2:
	         return DISP_3;
	         break;

	         case DISP_3:
	         return DISP_4;
	         break;

	         case DISP_4:
	         return DISP_5;
	         break;

	         case DISP_5:
	         return DISP_6;
	         break;

	         case DISP_6:
	         return DISP_7;
	         break;

	         case DISP_7:
	         return DISP_8;
	         break;

	         case DISP_8:
	         return DISP_9;
	         break;

	         default:
	         return DISP_0;
	      }
}

static unsigned display_seconds(unsigned curr_num){

	switch (curr_num)
	      {
	         case DISP_0:
	         return DISP_1;
	         break;

	         case DISP_1:
	         return DISP_2;
	         break;

	         case DISP_2:
	         return DISP_3;
	         break;

	         case DISP_3:
	         return DISP_4;
	         break;

	         case DISP_4:
	         return DISP_5;
	         break;

	         case DISP_5:
	         return DISP_6;
	         break;

	         default:
	         return DISP_0;
	      }
}

static void timer_isr(void *context)
{
	(void) context;

	unsigned pause = IORD(SWITCH_PAUSE_0_BASE,0);

	if (mode != 0 && pause == 0) {
		ms++;
		if (mode == 1 || mode == 3) {
			if (ms % 10 == 0) { // disp 0 de los milisegundos
				unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_0_BASE);
				unsigned next = display_nums(current);
				IOWR_ALTERA_AVALON_PIO_DATA(DISP_0_BASE, next);
			}

			if (ms % 100 == 0) { // disp 1 de los milisegundos
				unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_1_BASE);
				unsigned next = display_nums(current);
				IOWR_ALTERA_AVALON_PIO_DATA(DISP_1_BASE, next);
			}
		}

		if (ms == 999) {
			ms = 0;
			sec++;
		}

		if (mode == 2 || mode == 3) {
			if (sec != 0) {
				unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_2_BASE);
				unsigned next = display_nums(current);
				IOWR_ALTERA_AVALON_PIO_DATA(DISP_2_BASE, next);
			}

			if (sec != 0 && sec % 10 == 0) {
				unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_3_BASE);
				unsigned next = display_seconds(current);
				IOWR_ALTERA_AVALON_PIO_DATA(DISP_3_BASE, next);
			}
		}

		if (sec == 59) {
			sec = 0;
			min++;
		}

		if (mode == 3) {
			if (min != 0) {
				unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_4_BASE);
				unsigned next = display_seconds(current);
				IOWR_ALTERA_AVALON_PIO_DATA(DISP_4_BASE, next);
			}

			if (min != 0 && min % 10 == 0) {
				unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_5_BASE);
				unsigned next = display_seconds(current);
				IOWR_ALTERA_AVALON_PIO_DATA(DISP_5_BASE, next);
			}
		}
	}
	IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE,0);
}

static void begin(){

	IOWR(DISP_0_BASE,0,DISP_0);
	IOWR(DISP_1_BASE,0,DISP_0);
	IOWR(DISP_2_BASE,0,DISP_0);
	IOWR(DISP_3_BASE,0,DISP_0);
	IOWR(DISP_4_BASE,0,DISP_0);
	IOWR(DISP_5_BASE,0,DISP_0);

	unsigned swi1 = IORD(SWITCH_MODE_0_BASE,0);
	unsigned swi2 = IORD(SWITCH_MODE_1_BASE,0);
	if (swi1 == 0 && swi2 == 0){
		mode = 1;
		IOWR_ALTERA_AVALON_PIO_DATA(PIO_LEDS_0_BASE, 0b001);
	} else if (swi1 == 0 && swi2 == 1){
		mode = 2;
		IOWR_ALTERA_AVALON_PIO_DATA(PIO_LEDS_0_BASE, 0b011);
	} else {
		IOWR_ALTERA_AVALON_PIO_DATA(PIO_LEDS_0_BASE, 0b111);
		mode = 3;
	}
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(START_BUTTON_0_BASE, 0);
	IORD_ALTERA_AVALON_PIO_EDGE_CAP(START_BUTTON_0_BASE);
}

int main()
{
	alt_ic_isr_register(
				TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID,
				TIMER_0_IRQ,
				timer_isr,
				NULL,
				NULL
		);

	IOWR_ALTERA_AVALON_TIMER_CONTROL(
					TIMER_0_BASE,
					  ALTERA_AVALON_TIMER_CONTROL_ITO_MSK
					| ALTERA_AVALON_TIMER_CONTROL_CONT_MSK);

	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(START_BUTTON_0_BASE, 0xf);
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(START_BUTTON_0_BASE, 0x0);

	alt_ic_isr_register(
			START_BUTTON_0_IRQ_INTERRUPT_CONTROLLER_ID,
			START_BUTTON_0_IRQ,
			begin,
			NULL, NULL);

	while (1);
	return(0);
}

