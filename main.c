#include <stdint.h>
#include "bsp/bsp.h"

/**
 * @brief Se encarga de prender un led y apagarlo luego de un tiempo
 *
 * @param led    Numero de led a pulsar
 * @param tiempo Numero de ciclos del delay entre prendido y apagado
 */
void ledPulso(uint8_t led, uint32_t tiempo);

/**
 * @brief Aplicacion principal
 */
int main(void) {
	bsp_init();
	int brillo = 0;
	int flag = 0;
    int minimo=511;
    int TESTING=0;//es una variable para re asignr y poder ver que parte funciona y cual no.

	while (1) {
		/*bsp_delayMs(100);

		led_setBright(0,brillo);
		led_setBright(1,brillo);
		led_setBright(2,brillo);
		led_setBright(3,brillo);

		if(brillo >= 100)
			flag = 0;
		if(brillo <=0)
			flag = 1;

		if(flag)
			brillo++;
		else
			brillo--; */
		//TESTING=bsp_conversor_ADC();
//aca hago una negrada para prender los leds
		//if (bsp_conversor_ADC() <= minimo)
			led_on(5);

		/*else
			led_off(1);*/

	}
}

/**
 * @brief Se preciono el pulsador
 *
 */
void APP_ISR_sw(void){

}

/**
 * @brief Interrupcion cada 1ms
 *
 */
void APP_ISR_1ms(void){
	static uint16_t count_1s = 1000;
	count_1s--;
	if (!count_1s) {
		led_toggle(0);
		count_1s = 1000;
	}
}


void ledPulso(uint8_t led, uint32_t tiempo){
	led_on(led);
	Delay(tiempo);
	led_off(led);
}






