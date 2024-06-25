/*
 generated hardware definitions from hwdef.dat - DO NOT EDIT
*/

#pragma once

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#define MHZ (1000U*1000U)
#define KHZ (1000U)


#define AP_SIGNED_FIRMWARE 0

#define HAL_ENABLE_DFU_BOOT FALSE
#define CHIBIOS_BOARD_NAME "EchoUAS-BM"
// MCU type (ChibiOS define)
#define STM32L431_MCUCONF
#define STM32L431_MCUCONF

#define STM32L431xx

// crystal frequency
#define STM32_HSECLK 8000000U

// UART used for stdout (printf)
#define HAL_USE_SDC FALSE
#ifndef STM32L4
#define STM32L4 1
#endif
#define HAL_USE_HW_RNG FALSE
#define HAL_PROCESS_STACK_SIZE 0x800
#define BOOTLOADER_BAUDRATE 57600
#define HAL_BOOTLOADER_TIMEOUT 1000
#define HAL_USE_SERIAL FALSE
#define HAL_NO_GPIO_IRQ
#define SERIAL_BUFFERS_SIZE 32
#define HAL_USE_EMPTY_IO TRUE
#define PORT_INT_REQUIRED_STACK 64
#define DMA_RESERVE_SIZE 0
#define HAL_CAN_IFACE1_ENABLE
#define HAL_CAN_INTERFACE_LIST 0
#define HAL_CAN_INTERFACE_REV_LIST 0,-1,-1
#define HAL_CAN_BASE_LIST reinterpret_cast<bxcan::CanType*>(uintptr_t(CAN1_BASE))
#define HAL_NUM_CAN_IFACES 1
#define HAL_CANFD_SUPPORTED 0
#define BOARD_FLASH_SIZE 256

// location of loaded firmware
#define FLASH_LOAD_ADDRESS 0x08000000
#define EXT_FLASH_SIZE_MB 0
#define EXT_FLASH_RESERVE_START_KB 0
#define EXT_FLASH_RESERVE_END_KB 0
#define CRT0_AREAS_NUMBER 1
#define __EXTFLASHFUNC__
#ifndef AP_CRASHDUMP_ENABLED
#define AP_CRASHDUMP_ENABLED 0
#endif
#define FLASH_BOOTLOADER_LOAD_KB 36
#define FLASH_RESERVE_END_KB 0
#define APP_START_OFFSET_KB 4

#define HAL_RAM0_START 0x20000000
#define HAL_RAM_RESERVE_START 0x00000100
// memory regions
#define HAL_MEMORY_REGIONS {(void*)0x20000100, 0x0000ff00, 0x01 }
#define HAL_CC_MEMORY_REGIONS {0x20000000, 0x20010000, CRASH_CATCHER_BYTE }
#define HAL_MEMORY_TOTAL_KB 63

// CPU serial number (12 bytes)
#define UDID_START UID_BASE


// APJ board ID (for bootloaders)
#define APJ_BOARD_ID 1062

#ifndef HAL_ENABLE_THREAD_STATISTICS
#define HAL_ENABLE_THREAD_STATISTICS FALSE
#endif
    
#ifndef HAL_HAVE_HARDWARE_DOUBLE
#define HAL_HAVE_HARDWARE_DOUBLE 0
#endif
#define HAL_EXPECTED_SYSCLOCK 80000000

#define HAL_BOOTLOADER_BUILD TRUE
#define HAL_USE_ADC FALSE
#define HAL_USE_EXT FALSE
#define HAL_NO_UARTDRIVER
#define HAL_NO_PRINTF
#define HAL_NO_CCM
#define HAL_USE_I2C FALSE
#define HAL_USE_PWM FALSE
#define CH_DBG_ENABLE_STACK_CHECK FALSE
// avoid timer and RCIN threads to save memory
#define HAL_NO_TIMER_THREAD
#define HAL_NO_RCOUT_THREAD
#ifndef HAL_RCIN_THREAD_ENABLED
#define HAL_RCIN_THREAD_ENABLED 0
#endif
#ifndef AP_HAL_SHARED_DMA_ENABLED
#define AP_HAL_SHARED_DMA_ENABLED 0
#endif
#define HAL_NO_ROMFS_SUPPORT TRUE
#define CH_CFG_USE_TM FALSE
#ifndef CH_CFG_USE_REGISTRY
#define CH_CFG_USE_REGISTRY FALSE
#endif
#ifndef CH_CFG_USE_WAITEXIT
#define CH_CFG_USE_WAITEXIT FALSE
#endif
#ifndef CH_CFG_USE_MEMPOOLS
#define CH_CFG_USE_MEMPOOLS FALSE
#endif
#define CH_DBG_FILL_THREADS FALSE
#ifndef CH_CFG_USE_MUTEXES
#define CH_CFG_USE_MUTEXES FALSE
#endif
#ifndef CH_CFG_USE_EVENTS
#define CH_CFG_USE_EVENTS FALSE
#endif
#define CH_CFG_USE_EVENTS_TIMEOUT FALSE
#define CH_CFG_OPTIMIZE_SPEED FALSE
#define HAL_USE_EMPTY_STORAGE 1
#ifndef HAL_STORAGE_SIZE
#define HAL_STORAGE_SIZE 16384
#endif
#define HAL_USE_RTC FALSE
#define DISABLE_SERIAL_ESC_COMM TRUE
#ifndef CH_CFG_USE_DYNAMIC
#define CH_CFG_USE_DYNAMIC FALSE
#endif
#define STM32_FLASH_DISABLE_ISR 0

#ifndef CH_CFG_USE_MEMCORE
#define CH_CFG_USE_MEMCORE FALSE
#endif
#ifndef CH_CFG_USE_SEMAPHORES
#define CH_CFG_USE_SEMAPHORES FALSE
#endif
#ifndef CH_CFG_USE_HEAP
#define CH_CFG_USE_HEAP FALSE
#endif

#undef HAL_FLASH_PROTECTION
#define HAL_FLASH_PROTECTION 0
#define HAL_USE_SPI FALSE
// ADC config
#define HAL_ANALOG_PINS \


// GPIO config
// full pin define list
#define HAL_GPIO_PIN_CAN1_RX              PAL_LINE(GPIOB,8U)
#define HAL_GPIO_PIN_CAN1_TX              PAL_LINE(GPIOB,9U)
#define HAL_GPIO_PIN_JTCK_SWCLK           PAL_LINE(GPIOA,14U)
#define HAL_GPIO_PIN_JTMS_SWDIO           PAL_LINE(GPIOA,13U)
#define HAL_GPIO_PIN_SPARE_CS             PAL_LINE(GPIOA,4U)


#ifndef AP_CHECK_FIRMWARE_ENABLED
#define AP_CHECK_FIRMWARE_ENABLED 1
#endif
// peripherals enabled
#define AP_PARAM_DEFAULTS_FILE_PARSING_ENABLED 0


// auto-generated DMA mapping from dma_resolver.py

// Mask of DMA streams which are shared
#define SHARED_DMA_MASK 0


// generated UART DMA configuration lines


// generated SPI DMA configuration lines

/*
* I/O ports initial setup, this configuration is established soon after reset
* in the initialization code.
* Please refer to the STM32 Reference Manual for details.
*/
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/* PORTA:
 PA4 SPARE_CS CS
 PA13 JTMS-SWDIO SWD AF0
 PA14 JTCK-SWCLK SWD AF0
*/

#define VAL_GPIOA_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOA_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOA_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOA_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_PULLUP(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_PULLUP(13U) | \
                           PIN_PUPDR_PULLDOWN(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOA_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOA_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOA_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTB:
 PB8 CAN1_RX CAN1 AF9
 PB9 CAN1_TX CAN1 AF9
*/

#define VAL_GPIOB_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOB_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOB_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOB_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOB_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOB_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOB_AFRH    (PIN_AFIO_AF(8U, 9U) | \
                           PIN_AFIO_AF(9U, 9U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTC:
*/

#define VAL_GPIOC_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOC_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOC_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOC_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOC_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOC_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOC_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTD:
*/

#define VAL_GPIOD_MODER               0x0
#define VAL_GPIOD_OTYPER              0x0
#define VAL_GPIOD_OSPEEDR             0x0
#define VAL_GPIOD_PUPDR               0x0
#define VAL_GPIOD_ODR                 0x0
#define VAL_GPIOD_AFRL                0x0
#define VAL_GPIOD_AFRH                0x0



/* PORTE:
*/

#define VAL_GPIOE_MODER               0x0
#define VAL_GPIOE_OTYPER              0x0
#define VAL_GPIOE_OSPEEDR             0x0
#define VAL_GPIOE_PUPDR               0x0
#define VAL_GPIOE_ODR                 0x0
#define VAL_GPIOE_AFRL                0x0
#define VAL_GPIOE_AFRH                0x0



/* PORTF:
*/

#define VAL_GPIOF_MODER               0x0
#define VAL_GPIOF_OTYPER              0x0
#define VAL_GPIOF_OSPEEDR             0x0
#define VAL_GPIOF_PUPDR               0x0
#define VAL_GPIOF_ODR                 0x0
#define VAL_GPIOF_AFRL                0x0
#define VAL_GPIOF_AFRH                0x0



/* PORTG:
*/

#define VAL_GPIOG_MODER               0x0
#define VAL_GPIOG_OTYPER              0x0
#define VAL_GPIOG_OSPEEDR             0x0
#define VAL_GPIOG_PUPDR               0x0
#define VAL_GPIOG_ODR                 0x0
#define VAL_GPIOG_AFRL                0x0
#define VAL_GPIOG_AFRH                0x0



/* PORTH:
*/

#define VAL_GPIOH_MODER               0x0
#define VAL_GPIOH_OTYPER              0x0
#define VAL_GPIOH_OSPEEDR             0x0
#define VAL_GPIOH_PUPDR               0x0
#define VAL_GPIOH_ODR                 0x0
#define VAL_GPIOH_AFRL                0x0
#define VAL_GPIOH_AFRH                0x0



/* PORTI:
*/

#define VAL_GPIOI_MODER               0x0
#define VAL_GPIOI_OTYPER              0x0
#define VAL_GPIOI_OSPEEDR             0x0
#define VAL_GPIOI_PUPDR               0x0
#define VAL_GPIOI_ODR                 0x0
#define VAL_GPIOI_AFRL                0x0
#define VAL_GPIOI_AFRH                0x0



/* PORTJ:
*/

#define VAL_GPIOJ_MODER               0x0
#define VAL_GPIOJ_OTYPER              0x0
#define VAL_GPIOJ_OSPEEDR             0x0
#define VAL_GPIOJ_PUPDR               0x0
#define VAL_GPIOJ_ODR                 0x0
#define VAL_GPIOJ_AFRL                0x0
#define VAL_GPIOJ_AFRH                0x0



/* PORTK:
*/

#define VAL_GPIOK_MODER               0x0
#define VAL_GPIOK_OTYPER              0x0
#define VAL_GPIOK_OSPEEDR             0x0
#define VAL_GPIOK_PUPDR               0x0
#define VAL_GPIOK_ODR                 0x0
#define VAL_GPIOK_AFRL                0x0
#define VAL_GPIOK_AFRH                0x0




// AP_Periph defaults

// this file is inserted (by chibios_hwdef.py) into hwdef.h when
// configuring for AP_Periph builds

#ifndef AP_SCHEDULER_ENABLED
#define AP_SCHEDULER_ENABLED 0
#endif

#ifndef HAL_LOGGING_ENABLED
#define HAL_LOGGING_ENABLED 0
#endif

#ifndef HAL_GCS_ENABLED
#define HAL_GCS_ENABLED 0
#endif

/*
  AP_Periph doesn't include the SERIAL parameter tree, instead each
  supported serial device type has it's own parameter within AP_Periph
  for which port is used.
 */
#define DEFAULT_SERIAL0_PROTOCOL SerialProtocol_None
#define DEFAULT_SERIAL1_PROTOCOL SerialProtocol_None
#define DEFAULT_SERIAL2_PROTOCOL SerialProtocol_None
#define DEFAULT_SERIAL3_PROTOCOL SerialProtocol_None
#define DEFAULT_SERIAL4_PROTOCOL SerialProtocol_None
#define DEFAULT_SERIAL5_PROTOCOL SerialProtocol_None
#define DEFAULT_SERIAL6_PROTOCOL SerialProtocol_None
#define DEFAULT_SERIAL7_PROTOCOL SerialProtocol_None
#define DEFAULT_SERIAL8_PROTOCOL SerialProtocol_None
#define DEFAULT_SERIAL9_PROTOCOL SerialProtocol_None

#ifndef HAL_LOGGING_MAVLINK_ENABLED
#define HAL_LOGGING_MAVLINK_ENABLED 0
#endif

#ifndef AP_MISSION_ENABLED
#define AP_MISSION_ENABLED 0
#endif

#ifndef HAL_RALLY_ENABLED
#define HAL_RALLY_ENABLED 0
#endif

#ifndef HAL_NMEA_OUTPUT_ENABLED
#define HAL_NMEA_OUTPUT_ENABLED 0
#endif

#ifndef HAL_CAN_DEFAULT_NODE_ID
#define HAL_CAN_DEFAULT_NODE_ID 0
#endif

#define PERIPH_FW TRUE
#define HAL_BUILD_AP_PERIPH

#ifndef HAL_WATCHDOG_ENABLED_DEFAULT
#define HAL_WATCHDOG_ENABLED_DEFAULT true
#endif

#ifndef AP_FETTEC_ONEWIRE_ENABLED
#define AP_FETTEC_ONEWIRE_ENABLED 0
#endif

#ifndef HAL_TORQEEDO_ENABLED
#define HAL_TORQEEDO_ENABLED 0
#endif

#ifndef AP_KDECAN_ENABLED
#define AP_KDECAN_ENABLED 0
#endif

#ifndef HAL_GENERATOR_ENABLED
#define HAL_GENERATOR_ENABLED 0
#endif

#ifndef HAL_BARO_WIND_COMP_ENABLED
#define HAL_BARO_WIND_COMP_ENABLED 0
#endif

#ifndef HAL_UART_STATS_ENABLED
#define HAL_UART_STATS_ENABLED (HAL_GCS_ENABLED || HAL_LOGGING_ENABLED)
#endif

#ifndef HAL_SUPPORT_RCOUT_SERIAL
#define HAL_SUPPORT_RCOUT_SERIAL 0
#endif

#ifndef AP_AIRSPEED_AUTOCAL_ENABLE
#define AP_AIRSPEED_AUTOCAL_ENABLE 0
#endif

#ifndef AP_STATS_ENABLED
#define AP_STATS_ENABLED 0
#endif

#ifndef AP_VOLZ_ENABLED
#define AP_VOLZ_ENABLED 0
#endif

#ifndef AP_ROBOTISSERVO_ENABLED
#define AP_ROBOTISSERVO_ENABLED 0
#endif

#ifndef AP_SBUSOUTPUT_ENABLED
#define AP_SBUSOUTPUT_ENABLED 0
#endif

// by default an AP_Periph defines as many servo output channels as
// there are PWM outputs:
#ifndef NUM_SERVO_CHANNELS
#ifdef HAL_PWM_COUNT
#define NUM_SERVO_CHANNELS HAL_PWM_COUNT
#else
#define NUM_SERVO_CHANNELS 0
#endif
#endif

#ifndef AP_STATS_ENABLED
#define AP_STATS_ENABLED 0
#endif

#ifndef AP_BATTERY_ESC_ENABLED
#define AP_BATTERY_ESC_ENABLED 0
#endif

#ifndef AP_BATTERY_WATT_MAX_ENABLED
#define AP_BATTERY_WATT_MAX_ENABLED 0
#endif

// disable compass calibrations on periphs; cal is done on the autopilot
#ifndef COMPASS_CAL_ENABLED
#define COMPASS_CAL_ENABLED 0
#endif
#ifndef AP_COMPASS_CALIBRATION_FIXED_YAW_ENABLED
#define AP_COMPASS_CALIBRATION_FIXED_YAW_ENABLED 0
#endif
#ifndef COMPASS_MOT_ENABLED
#define COMPASS_MOT_ENABLED 0
#endif
#ifndef COMPASS_LEARN_ENABLED
#define COMPASS_LEARN_ENABLED 0
#endif

#ifndef HAL_EXTERNAL_AHRS_ENABLED
#define HAL_EXTERNAL_AHRS_ENABLED 0
#endif

// disable RC_Channels library:
#ifndef AP_RC_CHANNEL_ENABLED
#define AP_RC_CHANNEL_ENABLED 0
#endif

#define HAL_CRSF_TELEM_ENABLED 0
#define AP_GHST_TELEM_ENABLED 0

#ifndef AP_SERVORELAYEVENTS_ENABLED
#define AP_SERVORELAYEVENTS_ENABLED 0
#endif

#ifndef AP_RELAY_ENABLED
#define AP_RELAY_ENABLED 0
#endif

/*
 * GPS Backends - we selectively turn backends on.
 *   Note also that f103-GPS explicitly disables some of these backends.
 */
#define AP_GPS_BACKEND_DEFAULT_ENABLED 0
#ifndef AP_GPS_UBLOX_ENABLED
#define AP_GPS_UBLOX_ENABLED defined(HAL_PERIPH_ENABLE_GPS)
#endif
#ifndef HAL_MSP_GPS_ENABLED
#define HAL_MSP_GPS_ENABLED defined(HAL_PERIPH_ENABLE_GPS) && HAL_MSP_SENSORS_ENABLED
#endif

#ifndef AP_GPS_ERB_ENABLED
#define AP_GPS_ERB_ENABLED 0
#endif

#ifndef AP_GPS_GSOF_ENABLED
#define AP_GPS_GSOF_ENABLED defined(HAL_PERIPH_ENABLE_GPS)
#endif

#ifndef AP_GPS_NMEA_ENABLED
#define AP_GPS_NMEA_ENABLED 0
#endif

#ifndef AP_GPS_SBF_ENABLED
#define AP_GPS_SBF_ENABLED defined(HAL_PERIPH_ENABLE_GPS)
#endif

#ifndef AP_GPS_SBP_ENABLED
#define AP_GPS_SBP_ENABLED 0
#endif

#ifndef AP_GPS_SBP2_ENABLED
#define AP_GPS_SBP2_ENABLED 0
#endif

#ifndef AP_GPS_SIRF_ENABLED
#define AP_GPS_SIRF_ENABLED 0
#endif

#ifndef AP_GPS_MAV_ENABLED
#define AP_GPS_MAV_ENABLED 0
#endif

#ifndef AP_GPS_NOVA_ENABLED
#define AP_GPS_NOVA_ENABLED defined(HAL_PERIPH_ENABLE_GPS)
#endif

#ifndef HAL_SIM_GPS_ENABLED
#define HAL_SIM_GPS_ENABLED (AP_SIM_ENABLED && defined(HAL_PERIPH_ENABLE_GPS))
#endif

/*
 * Airspeed Backends - we selectively turn backends *off*
 */
#ifndef AP_AIRSPEED_ANALOG_ENABLED
#define AP_AIRSPEED_ANALOG_ENABLED 0
#endif

// disable various rangefinder backends
#define AP_RANGEFINDER_ANALOG_ENABLED 0
#define AP_RANGEFINDER_HC_SR04_ENABLED 0
#define AP_RANGEFINDER_PWM_ENABLED 0

// AP_Periph expects ROTATION_NONE
#ifndef AP_RANGEFINDER_DEFAULT_ORIENTATION
#define AP_RANGEFINDER_DEFAULT_ORIENTATION ROTATION_NONE
#endif

// no CAN manager in AP_Periph:
#define HAL_CANMANAGER_ENABLED 0

// SLCAN is off by default:
#ifndef AP_CAN_SLCAN_ENABLED
#define AP_CAN_SLCAN_ENABLED 0
#endif

// Periphs don't use the FFT library:
#ifndef HAL_GYROFFT_ENABLED
#define HAL_GYROFFT_ENABLED 0
#endif

// MSP parsing is off by default in AP_Periph:
#ifndef HAL_MSP_ENABLED
#define HAL_MSP_ENABLED 0
#endif

// periph does not make use of compass scaling or diagonals
#ifndef AP_COMPASS_DIAGONALS_ENABLED
#define AP_COMPASS_DIAGONALS_ENABLED 0
#endif

// disable various battery monitor backends:
#ifndef AP_BATTERY_SYNTHETIC_CURRENT_ENABLED
#define AP_BATTERY_SYNTHETIC_CURRENT_ENABLED 0
#endif

#ifndef AP_BATT_MONITOR_MAX_INSTANCES
#define AP_BATT_MONITOR_MAX_INSTANCES 1
#endif

// Capacity tracking off
#ifndef AP_BATT_MONITOR_BATTERY_CAPACITY
#define AP_BATT_MONITOR_BATTERY_CAPACITY 0
#endif

#ifndef RANGEFINDER_MAX_INSTANCES
#define RANGEFINDER_MAX_INSTANCES 1
#endif

// by default AP_Periphs don't use INS:
#ifndef AP_INERTIALSENSOR_ENABLED
#define AP_INERTIALSENSOR_ENABLED 0
#endif

// no fence by default in AP_Periph:
#ifndef AP_FENCE_ENABLED
#define AP_FENCE_ENABLED 0
#endif

// periph does not save temperature cals etc:
#ifndef HAL_ENABLE_SAVE_PERSISTENT_PARAMS
#define HAL_ENABLE_SAVE_PERSISTENT_PARAMS 0
#endif

#ifndef AP_WINCH_ENABLED
#define AP_WINCH_ENABLED 0
#endif

#ifndef AP_VIDEOTX_ENABLED
#define AP_VIDEOTX_ENABLED 0
#endif

#ifndef AP_FRSKY_TELEM_ENABLED
#define AP_FRSKY_TELEM_ENABLED 0
#endif

#ifndef HAL_SPEKTRUM_TELEM_ENABLED
#define HAL_SPEKTRUM_TELEM_ENABLED 0
#endif

#ifndef AP_FILESYSTEM_ROMFS_ENABLED
#define AP_FILESYSTEM_ROMFS_ENABLED 0
#endif

#ifndef NOTIFY_LED_OVERRIDE_DEFAULT
#define NOTIFY_LED_OVERRIDE_DEFAULT 1       // rgb_source_t::mavlink
#endif

#ifndef HAL_PROXIMITY_ENABLED
#define HAL_PROXIMITY_ENABLED 0
#endif

#ifndef AP_SCRIPTING_ENABLED
#define AP_SCRIPTING_ENABLED 0
#endif

#ifndef HAL_SERIAL_ESC_COMM_ENABLED
#define HAL_SERIAL_ESC_COMM_ENABLED 0
#endif

#ifndef HAL_RCIN_THREAD_ENABLED
#define HAL_RCIN_THREAD_ENABLED 0
#endif

#ifndef HAL_SCHEDULER_LOOP_DELAY_ENABLED
#define HAL_SCHEDULER_LOOP_DELAY_ENABLED 0
#endif

#ifndef HAL_WITH_ESC_TELEM
#define HAL_WITH_ESC_TELEM 0
#endif

#ifndef AP_BATTERY_ESC_TELEM_OUTBOUND_ENABLED
#define AP_BATTERY_ESC_TELEM_OUTBOUND_ENABLED 0
#endif

#define AP_BATTERY_ENABLED defined(HAL_PERIPH_ENABLE_BATTERY)
#define AP_AHRS_ENABLED defined(HAL_PERIPH_ENABLE_AHRS)
#define AP_COMPASS_ENABLED defined(HAL_PERIPH_ENABLE_MAG)
#define AP_BARO_ENABLED defined(HAL_PERIPH_ENABLE_BARO)
#define AP_GPS_ENABLED defined(HAL_PERIPH_ENABLE_GPS)
#define AP_RPM_ENABLED defined(HAL_PERIPH_ENABLE_RPM)
#define AP_RCPROTOCOL_ENABLED defined(HAL_PERIPH_ENABLE_RCIN)
#define AP_RTC_ENABLED defined(HAL_PERIPH_ENABLE_RTC)
#define HAL_VISUALODOM_ENABLED defined(HAL_PERIPH_ENABLE_VISUALODOM)

#ifndef AP_BOOTLOADER_ALWAYS_ERASE
#define AP_BOOTLOADER_ALWAYS_ERASE 1
#endif

#ifndef GPS_MOVING_BASELINE
#define GPS_MOVING_BASELINE 0
#endif

#ifndef AP_UART_MONITOR_ENABLED
#define AP_UART_MONITOR_ENABLED defined(HAL_PERIPH_ENABLE_SERIAL_OPTIONS) || (defined(HAL_PERIPH_ENABLE_GPS) && (GPS_MOVING_BASELINE || BOARD_FLASH_SIZE>=256))
#endif

#ifndef HAL_BOARD_LOG_DIRECTORY
#define HAL_BOARD_LOG_DIRECTORY "/APM/LOGS"
#endif

#ifndef HAL_BOARD_TERRAIN_DIRECTORY
#define HAL_BOARD_TERRAIN_DIRECTORY "/APM/TERRAIN"
#endif

#ifndef HAL_MAVLINK_BINDINGS_ENABLED
#define HAL_MAVLINK_BINDINGS_ENABLED defined(HAL_PERIPH_ENABLE_ADSB) || HAL_GCS_ENABLED
#endif

// for boards other than AP_Periph we are always expecting delays when
// not initialised.  We can't afford that on AP_Periph as you may end
// up with a bricked node if you write a bad firmware to it.
#ifndef AP_HAL_CHIBIOS_IN_EXPECTED_DELAY_WHEN_NOT_INITIALISED
#define AP_HAL_CHIBIOS_IN_EXPECTED_DELAY_WHEN_NOT_INITIALISED 0
#endif

#ifndef AP_SERIALLED_ENABLED
#define AP_SERIALLED_ENABLED 0
#endif

#ifndef AP_OPTICALFLOW_ENABLED
#define AP_OPTICALFLOW_ENABLED 0
#endif

#ifndef HAL_BUTTON_ENABLED
#define HAL_BUTTON_ENABLED 0
#endif

#ifndef AP_NOTIFY_SCRIPTING_LED_ENABLED
#define AP_NOTIFY_SCRIPTING_LED_ENABLED 0
#endif

#ifndef AP_PARAM_DYNAMIC_ENABLED
#define AP_PARAM_DYNAMIC_ENABLED 0
#endif

#ifndef HAL_MOUNT_ENABLED
#define HAL_MOUNT_ENABLED 0
#endif

#ifndef AP_CAMERA_ENABLED
#define AP_CAMERA_ENABLED 0
#endif

#ifndef AP_TERRAIN_AVAILABLE
#define AP_TERRAIN_AVAILABLE 0
#endif

#ifndef AP_ICENGINE_ENABLED
#define AP_ICENGINE_ENABLED 0
#endif

#ifndef AP_FILTER_ENABLED
#define AP_FILTER_ENABLED 0
#endif

#ifndef AP_ADVANCEDFAILSAFE_ENABLED
#define AP_ADVANCEDFAILSAFE_ENABLED 0
#endif

#ifndef AP_ARMING_ENABLED
#define AP_ARMING_ENABLED 0
#endif

#ifndef AP_LTM_TELEM_ENABLED
#define AP_LTM_TELEM_ENABLED 0
#endif

#ifndef AP_GRIPPER_ENABLED
#define AP_GRIPPER_ENABLED 0
#endif

#ifndef HAL_SPRAYER_ENABLED
#define HAL_SPRAYER_ENABLED 0
#endif

#ifndef AP_VEHICLE_ENABLED
#define AP_VEHICLE_ENABLED 0
#endif

#ifndef OSD_ENABLED
#define OSD_ENABLED 0
#endif

#ifndef OSD_PARAM_ENABLED
#define OSD_PARAM_ENABLED 0
#endif

#ifndef AP_SCHEDULER_ENABLED
#define AP_SCHEDULER_ENABLED 0
#endif

#ifndef AP_RC_CHANNEL_ENABLED
#define AP_RC_CHANNEL_ENABLED 0
#endif

#ifndef AP_CUSTOMROTATIONS_ENABLED
#define AP_CUSTOMROTATIONS_ENABLED 0
#endif


// end AP_Periph defaults

// bootloader defaults

// this file is inserted (by chibios_hwdef.py) into hwdef.h when
// configuring for bootloader builds

#define HAL_DSHOT_ALARM_ENABLED 0
#define HAL_LOGGING_ENABLED 0
#define HAL_SCHEDULER_ENABLED 0

// bootloaders *definitely* don't use the FFT library:
#ifndef HAL_GYROFFT_ENABLED
#define HAL_GYROFFT_ENABLED 0
#endif

// bootloaders don't talk to the GCS:
#ifndef HAL_GCS_ENABLED
#define HAL_GCS_ENABLED 0
#endif

// by default bootloaders don't use INS:
#ifndef AP_INERTIALSENSOR_ENABLED
#define AP_INERTIALSENSOR_ENABLED 0
#endif

#define HAL_MAX_CAN_PROTOCOL_DRIVERS 0

// bootloader does not save temperature cals etc:
#ifndef HAL_ENABLE_SAVE_PERSISTENT_PARAMS
#define HAL_ENABLE_SAVE_PERSISTENT_PARAMS 0
#endif

// make diagnosing Faults (e.g. HardFault) harder, but save bytes:
#ifndef AP_FAULTHANDLER_DEBUG_VARIABLES_ENABLED
#define AP_FAULTHANDLER_DEBUG_VARIABLES_ENABLED 0
#endif

#ifndef AP_WATCHDOG_SAVE_FAULT_ENABLED
#define AP_WATCHDOG_SAVE_FAULT_ENABLED 0
#endif

// less LWIP functionality in the bootloader
#define LWIP_DHCP 0
#define LWIP_UDP 0
#define LWIP_PPP 0
#define LWIP_IGMP 0
#define LWIP_ALTCP 0
#define IP_FORWARD 0
#define LWIP_SINGLE_NETIF 1
#define SO_REUSE 0
#define LWIP_SOCKET_POLL 0
#define LINK_STATS 0
#define ICMP_STATS 0
#define IPFRAG_STATS 0
#define TCP_STATS 0
#define ARP_PROXYARP_SUPPORT 0
#define LWIP_HAVE_LOOPIF 0
#define LWIP_NETIF_LOOPBACK 0

/*
  we need DMA on H7 to allow for ECC error checking
  Note that ChibiOS uses #ifdef for STM32_DMA_REQUIRED not #if
 */
#if !defined(STM32_DMA_REQUIRED) && defined(STM32H7)
#define STM32_DMA_REQUIRED 1
#endif



// end bootloader defaults
