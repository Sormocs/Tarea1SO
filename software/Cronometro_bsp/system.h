/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu_0' in SOPC Builder design 'procesador'
 * SOPC Builder design path: D:/TEC/Semestre_II_2023/Operativos/Tarea_1/Tarea/Tarea1SO/procesador.sopcinfo
 *
 * Generated: Sun Aug 20 00:10:41 CST 2023
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00000020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x16
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 0
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xd
#define ALT_CPU_NAME "cpu_0"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00000020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x16
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 0
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xd
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/null"
#define ALT_STDERR_BASE 0x0
#define ALT_STDERR_DEV null
#define ALT_STDERR_TYPE ""
#define ALT_STDIN "/dev/null"
#define ALT_STDIN_BASE 0x0
#define ALT_STDIN_DEV null
#define ALT_STDIN_TYPE ""
#define ALT_STDOUT "/dev/null"
#define ALT_STDOUT_BASE 0x0
#define ALT_STDOUT_DEV null
#define ALT_STDOUT_TYPE ""
#define ALT_SYSTEM_NAME "procesador"
#define ALT_SYS_CLK_TICKS_PER_SEC NONE_TICKS_PER_SEC
#define ALT_TIMESTAMP_CLK_TIMER_DEVICE_TYPE NONE_TIMER_DEVICE_TYPE


/*
 * disp_0 configuration
 *
 */

#define ALT_MODULE_CLASS_disp_0 altera_avalon_pio
#define DISP_0_BASE 0x40000
#define DISP_0_BIT_CLEARING_EDGE_REGISTER 0
#define DISP_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DISP_0_CAPTURE 0
#define DISP_0_DATA_WIDTH 7
#define DISP_0_DO_TEST_BENCH_WIRING 0
#define DISP_0_DRIVEN_SIM_VALUE 0
#define DISP_0_EDGE_TYPE "NONE"
#define DISP_0_FREQ 50000000
#define DISP_0_HAS_IN 0
#define DISP_0_HAS_OUT 1
#define DISP_0_HAS_TRI 0
#define DISP_0_IRQ -1
#define DISP_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DISP_0_IRQ_TYPE "NONE"
#define DISP_0_NAME "/dev/disp_0"
#define DISP_0_RESET_VALUE 0
#define DISP_0_SPAN 16
#define DISP_0_TYPE "altera_avalon_pio"


/*
 * disp_1 configuration
 *
 */

#define ALT_MODULE_CLASS_disp_1 altera_avalon_pio
#define DISP_1_BASE 0x50000
#define DISP_1_BIT_CLEARING_EDGE_REGISTER 0
#define DISP_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DISP_1_CAPTURE 0
#define DISP_1_DATA_WIDTH 7
#define DISP_1_DO_TEST_BENCH_WIRING 0
#define DISP_1_DRIVEN_SIM_VALUE 0
#define DISP_1_EDGE_TYPE "NONE"
#define DISP_1_FREQ 50000000
#define DISP_1_HAS_IN 0
#define DISP_1_HAS_OUT 1
#define DISP_1_HAS_TRI 0
#define DISP_1_IRQ -1
#define DISP_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DISP_1_IRQ_TYPE "NONE"
#define DISP_1_NAME "/dev/disp_1"
#define DISP_1_RESET_VALUE 0
#define DISP_1_SPAN 16
#define DISP_1_TYPE "altera_avalon_pio"


/*
 * disp_2 configuration
 *
 */

#define ALT_MODULE_CLASS_disp_2 altera_avalon_pio
#define DISP_2_BASE 0x110000
#define DISP_2_BIT_CLEARING_EDGE_REGISTER 0
#define DISP_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DISP_2_CAPTURE 0
#define DISP_2_DATA_WIDTH 7
#define DISP_2_DO_TEST_BENCH_WIRING 0
#define DISP_2_DRIVEN_SIM_VALUE 0
#define DISP_2_EDGE_TYPE "NONE"
#define DISP_2_FREQ 50000000
#define DISP_2_HAS_IN 0
#define DISP_2_HAS_OUT 1
#define DISP_2_HAS_TRI 0
#define DISP_2_IRQ -1
#define DISP_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DISP_2_IRQ_TYPE "NONE"
#define DISP_2_NAME "/dev/disp_2"
#define DISP_2_RESET_VALUE 0
#define DISP_2_SPAN 16
#define DISP_2_TYPE "altera_avalon_pio"


/*
 * disp_3 configuration
 *
 */

#define ALT_MODULE_CLASS_disp_3 altera_avalon_pio
#define DISP_3_BASE 0x60000
#define DISP_3_BIT_CLEARING_EDGE_REGISTER 0
#define DISP_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DISP_3_CAPTURE 0
#define DISP_3_DATA_WIDTH 7
#define DISP_3_DO_TEST_BENCH_WIRING 0
#define DISP_3_DRIVEN_SIM_VALUE 0
#define DISP_3_EDGE_TYPE "NONE"
#define DISP_3_FREQ 50000000
#define DISP_3_HAS_IN 0
#define DISP_3_HAS_OUT 1
#define DISP_3_HAS_TRI 0
#define DISP_3_IRQ -1
#define DISP_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DISP_3_IRQ_TYPE "NONE"
#define DISP_3_NAME "/dev/disp_3"
#define DISP_3_RESET_VALUE 0
#define DISP_3_SPAN 16
#define DISP_3_TYPE "altera_avalon_pio"


/*
 * disp_4 configuration
 *
 */

#define ALT_MODULE_CLASS_disp_4 altera_avalon_pio
#define DISP_4_BASE 0x70000
#define DISP_4_BIT_CLEARING_EDGE_REGISTER 0
#define DISP_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DISP_4_CAPTURE 0
#define DISP_4_DATA_WIDTH 7
#define DISP_4_DO_TEST_BENCH_WIRING 0
#define DISP_4_DRIVEN_SIM_VALUE 0
#define DISP_4_EDGE_TYPE "NONE"
#define DISP_4_FREQ 50000000
#define DISP_4_HAS_IN 0
#define DISP_4_HAS_OUT 1
#define DISP_4_HAS_TRI 0
#define DISP_4_IRQ -1
#define DISP_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DISP_4_IRQ_TYPE "NONE"
#define DISP_4_NAME "/dev/disp_4"
#define DISP_4_RESET_VALUE 0
#define DISP_4_SPAN 16
#define DISP_4_TYPE "altera_avalon_pio"


/*
 * disp_5 configuration
 *
 */

#define ALT_MODULE_CLASS_disp_5 altera_avalon_pio
#define DISP_5_BASE 0x80000
#define DISP_5_BIT_CLEARING_EDGE_REGISTER 0
#define DISP_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DISP_5_CAPTURE 0
#define DISP_5_DATA_WIDTH 7
#define DISP_5_DO_TEST_BENCH_WIRING 0
#define DISP_5_DRIVEN_SIM_VALUE 0
#define DISP_5_EDGE_TYPE "NONE"
#define DISP_5_FREQ 50000000
#define DISP_5_HAS_IN 0
#define DISP_5_HAS_OUT 1
#define DISP_5_HAS_TRI 0
#define DISP_5_IRQ -1
#define DISP_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DISP_5_IRQ_TYPE "NONE"
#define DISP_5_NAME "/dev/disp_5"
#define DISP_5_RESET_VALUE 0
#define DISP_5_SPAN 16
#define DISP_5_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * pio_leds_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_leds_0 altera_avalon_pio
#define PIO_LEDS_0_BASE 0x130000
#define PIO_LEDS_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_LEDS_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_LEDS_0_CAPTURE 0
#define PIO_LEDS_0_DATA_WIDTH 10
#define PIO_LEDS_0_DO_TEST_BENCH_WIRING 0
#define PIO_LEDS_0_DRIVEN_SIM_VALUE 0
#define PIO_LEDS_0_EDGE_TYPE "NONE"
#define PIO_LEDS_0_FREQ 50000000
#define PIO_LEDS_0_HAS_IN 0
#define PIO_LEDS_0_HAS_OUT 1
#define PIO_LEDS_0_HAS_TRI 0
#define PIO_LEDS_0_IRQ -1
#define PIO_LEDS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_LEDS_0_IRQ_TYPE "NONE"
#define PIO_LEDS_0_NAME "/dev/pio_leds_0"
#define PIO_LEDS_0_RESET_VALUE 0
#define PIO_LEDS_0_SPAN 16
#define PIO_LEDS_0_TYPE "altera_avalon_pio"


/*
 * ram_0 configuration
 *
 */

#define ALT_MODULE_CLASS_ram_0 altera_avalon_onchip_memory2
#define RAM_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_0_BASE 0x20000
#define RAM_0_CONTENTS_INFO ""
#define RAM_0_DUAL_PORT 0
#define RAM_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_0_INIT_CONTENTS_FILE "procesador_ram_0"
#define RAM_0_INIT_MEM_CONTENT 1
#define RAM_0_INSTANCE_ID "NONE"
#define RAM_0_IRQ -1
#define RAM_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_0_NAME "/dev/ram_0"
#define RAM_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_0_RAM_BLOCK_TYPE "AUTO"
#define RAM_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_0_SINGLE_CLOCK_OP 0
#define RAM_0_SIZE_MULTIPLE 1
#define RAM_0_SIZE_VALUE 8192
#define RAM_0_SPAN 8192
#define RAM_0_TYPE "altera_avalon_onchip_memory2"
#define RAM_0_WRITABLE 1


/*
 * rom_0 configuration
 *
 */

#define ALT_MODULE_CLASS_rom_0 altera_avalon_onchip_memory2
#define ROM_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ROM_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ROM_0_BASE 0x0
#define ROM_0_CONTENTS_INFO ""
#define ROM_0_DUAL_PORT 0
#define ROM_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ROM_0_INIT_CONTENTS_FILE "procesador_rom_0"
#define ROM_0_INIT_MEM_CONTENT 1
#define ROM_0_INSTANCE_ID "NONE"
#define ROM_0_IRQ -1
#define ROM_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ROM_0_NAME "/dev/rom_0"
#define ROM_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ROM_0_RAM_BLOCK_TYPE "AUTO"
#define ROM_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ROM_0_SINGLE_CLOCK_OP 0
#define ROM_0_SIZE_MULTIPLE 1
#define ROM_0_SIZE_VALUE 8192
#define ROM_0_SPAN 8192
#define ROM_0_TYPE "altera_avalon_onchip_memory2"
#define ROM_0_WRITABLE 0


/*
 * start_button_0 configuration
 *
 */

#define ALT_MODULE_CLASS_start_button_0 altera_avalon_pio
#define START_BUTTON_0_BASE 0x120000
#define START_BUTTON_0_BIT_CLEARING_EDGE_REGISTER 0
#define START_BUTTON_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define START_BUTTON_0_CAPTURE 1
#define START_BUTTON_0_DATA_WIDTH 1
#define START_BUTTON_0_DO_TEST_BENCH_WIRING 0
#define START_BUTTON_0_DRIVEN_SIM_VALUE 0
#define START_BUTTON_0_EDGE_TYPE "FALLING"
#define START_BUTTON_0_FREQ 50000000
#define START_BUTTON_0_HAS_IN 1
#define START_BUTTON_0_HAS_OUT 0
#define START_BUTTON_0_HAS_TRI 0
#define START_BUTTON_0_IRQ 1
#define START_BUTTON_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define START_BUTTON_0_IRQ_TYPE "EDGE"
#define START_BUTTON_0_NAME "/dev/start_button_0"
#define START_BUTTON_0_RESET_VALUE 0
#define START_BUTTON_0_SPAN 16
#define START_BUTTON_0_TYPE "altera_avalon_pio"


/*
 * switch_mode_0 configuration
 *
 */

#define ALT_MODULE_CLASS_switch_mode_0 altera_avalon_pio
#define SWITCH_MODE_0_BASE 0x90000
#define SWITCH_MODE_0_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_MODE_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_MODE_0_CAPTURE 0
#define SWITCH_MODE_0_DATA_WIDTH 1
#define SWITCH_MODE_0_DO_TEST_BENCH_WIRING 0
#define SWITCH_MODE_0_DRIVEN_SIM_VALUE 0
#define SWITCH_MODE_0_EDGE_TYPE "NONE"
#define SWITCH_MODE_0_FREQ 50000000
#define SWITCH_MODE_0_HAS_IN 1
#define SWITCH_MODE_0_HAS_OUT 0
#define SWITCH_MODE_0_HAS_TRI 0
#define SWITCH_MODE_0_IRQ -1
#define SWITCH_MODE_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_MODE_0_IRQ_TYPE "NONE"
#define SWITCH_MODE_0_NAME "/dev/switch_mode_0"
#define SWITCH_MODE_0_RESET_VALUE 0
#define SWITCH_MODE_0_SPAN 16
#define SWITCH_MODE_0_TYPE "altera_avalon_pio"


/*
 * switch_mode_1 configuration
 *
 */

#define ALT_MODULE_CLASS_switch_mode_1 altera_avalon_pio
#define SWITCH_MODE_1_BASE 0x100000
#define SWITCH_MODE_1_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_MODE_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_MODE_1_CAPTURE 0
#define SWITCH_MODE_1_DATA_WIDTH 1
#define SWITCH_MODE_1_DO_TEST_BENCH_WIRING 0
#define SWITCH_MODE_1_DRIVEN_SIM_VALUE 0
#define SWITCH_MODE_1_EDGE_TYPE "NONE"
#define SWITCH_MODE_1_FREQ 50000000
#define SWITCH_MODE_1_HAS_IN 1
#define SWITCH_MODE_1_HAS_OUT 0
#define SWITCH_MODE_1_HAS_TRI 0
#define SWITCH_MODE_1_IRQ -1
#define SWITCH_MODE_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_MODE_1_IRQ_TYPE "NONE"
#define SWITCH_MODE_1_NAME "/dev/switch_mode_1"
#define SWITCH_MODE_1_RESET_VALUE 0
#define SWITCH_MODE_1_SPAN 16
#define SWITCH_MODE_1_TYPE "altera_avalon_pio"


/*
 * switch_pause_0 configuration
 *
 */

#define ALT_MODULE_CLASS_switch_pause_0 altera_avalon_pio
#define SWITCH_PAUSE_0_BASE 0x300000
#define SWITCH_PAUSE_0_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_PAUSE_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_PAUSE_0_CAPTURE 0
#define SWITCH_PAUSE_0_DATA_WIDTH 1
#define SWITCH_PAUSE_0_DO_TEST_BENCH_WIRING 0
#define SWITCH_PAUSE_0_DRIVEN_SIM_VALUE 0
#define SWITCH_PAUSE_0_EDGE_TYPE "NONE"
#define SWITCH_PAUSE_0_FREQ 50000000
#define SWITCH_PAUSE_0_HAS_IN 1
#define SWITCH_PAUSE_0_HAS_OUT 0
#define SWITCH_PAUSE_0_HAS_TRI 0
#define SWITCH_PAUSE_0_IRQ -1
#define SWITCH_PAUSE_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_PAUSE_0_IRQ_TYPE "NONE"
#define SWITCH_PAUSE_0_NAME "/dev/switch_pause_0"
#define SWITCH_PAUSE_0_RESET_VALUE 0
#define SWITCH_PAUSE_0_SPAN 16
#define SWITCH_PAUSE_0_TYPE "altera_avalon_pio"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 1
#define TIMER_0_BASE 0x30000
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 1
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 0
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999
#define TIMER_0_MULT 0.001
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 0
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TIMER_DEVICE_TYPE 1
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
