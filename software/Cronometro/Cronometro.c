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

#define DISP_0 0x7E     // Represents 01111110 in binary
#define DISP_1 0x30     // Represents 00110000 in binary
#define DISP_2 0x6D     // Represents 01101101 in binary
#define DISP_3 0x79     // Represents 01111001 in binary
#define DISP_4 0x33     // Represents 00110011 in binary
#define DISP_5 0x5B     // Represents 01011011 in binary
#define DISP_6 0x5F     // Represents 01011111 in binary
#define DISP_7 0x70     // Represents 01110000 in binary
#define DISP_8 0x7F     // Represents 01111111 in binary
#define DISP_9 0x73     // Represents 01110011 in binary
 // si los displays no sirven es porque hay 8 bits

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

static int ms = 0;
static int sec = 0;
static int min = 0;

static void timer_isr(void *context)
{
	(void)context;

	ms++;
	if (ms%100 == 0){ // disp 0 de los milisegundos
		unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_0_BASE);
		unsigned next = display_nums(current);
		IOWR_ALTERA_AVALON_PIO_DATA(DISP_0_BASE,next);
	}

	if (ms%1000 == 0){ // disp 0 de los milisegundos
			unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_1_BASE);
			unsigned next = display_nums(current);
			IOWR_ALTERA_AVALON_PIO_DATA(DISP_1_BASE,next);
		}

	if (ms == 9999){
		ms = 0;
		sec++;
	}

	if (sec != 0){
		unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_2_BASE);
		unsigned next = display_nums(current);
		IOWR_ALTERA_AVALON_PIO_DATA(DISP_2_BASE,next);
	}

	if (sec != 0 && sec%10 == 0  ){
		unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_3_BASE);
		unsigned next = display_seconds(current);
		IOWR_ALTERA_AVALON_PIO_DATA(DISP_3_BASE,next);
		}

	if (sec == 59){
		sec = 0;
		min++;
	}

	if (min != 0){
		unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_4_BASE);
		unsigned next = display_seconds(current);
		IOWR_ALTERA_AVALON_PIO_DATA(DISP_4_BASE,next);
		}

	if (min != 0 && min%10 == 0 ){
		unsigned current = IORD_ALTERA_AVALON_PIO_DATA(DISP_5_BASE);
		unsigned next = display_seconds(current);
		IOWR_ALTERA_AVALON_PIO_DATA(DISP_5_BASE,next);
		}

	IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE,0);
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

	while (1);
	return(0);
}
