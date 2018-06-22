// Include Necessary Libraries
#include <asf.h>

/*
---------------------------------
DIGITAL WRITES:
gpio_set_pin_low(pin)
gpio_toggle_pin(pin)

---------------------------------
DIGITAL READS:
ioport_get_pin_level(pin)

---------------------------------
PIN DEFINITIONS
#define GPIO_PUSH_BUTTON_0              IOPORT_CREATE_PIN(PORTB, 7)
#define TWID_SDA                        IOPORT_CREATE_PIN(PORTC, 4)
#define TWID_SCL                        IOPORT_CREATE_PIN(PORTC, 5)
#define USART_RX                        IOPORT_CREATE_PIN(PORTD, 0)
#define USART_TX                        IOPORT_CREATE_PIN(PORTD, 1)
#define SPI_SS_A                        IOPORT_CREATE_PIN(PORTB, 2)
#define SPI_MOSI                        IOPORT_CREATE_PIN(PORTB, 3)
#define SPI_MISO                        IOPORT_CREATE_PIN(PORTB, 4)
#define SPI_SCK                         IOPORT_CREATE_PIN(PORTB, 5)

---------------------------------
ANALOG READS
#define ADC_INPUT      ADC_MUX_ADC0
#define ADC_VREF           ADC_VREF_AVCC
// set prescaler and enable ADC
adc_init(ADC_PRESCALER_DIV128);
adc_read_8bit(ADC_INPUT, ADC_VREF)

---------------------------------
PWM WRITES

---------------------------------
TWI MASTER
See example

---------------------------------
TWI SLAVE
See example

---------------------------------
SPI MASTER
See example


*/


int main (void)
{
	/* Insert system clock initialization code here (sysclk_init()). */

	board_init();

	/* Insert application code here, after the board has been initialized. */
	
}
