#include <avr/io.h>
#include<util/delay.h>
#include "Step_1.h"
#include "Step_2.h"
#include "Step_3.h"


int main(void)
{
    initialise();
     InitADC();

    while(1)
    {
        if(occupied)
        {
            PORTB|=(1<<PB0);
            _delay_ms(200);

            config_timer();
            pwm_output();
            _delay_ms(200);

        }

        else
        {
           PORTB&=~(1<<PB0);
          _delay_ms(200);
          OCR1A = 0; //PWM wave 0
        }
    }
    return 0;
}
