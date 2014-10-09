#ifndef _BSP_H
#define _BSP_H

/**
 * @brief Prende un led
 *
 * @param led Led a prender
 */

void bsp_led_init();

void led_on(uint8_t led);

/**
 * @brief Apaga un led
 *
 * @param led Led a apagar
 */
void led_off(uint8_t led);

/**
 * @brief Conmuta un led
 *
 * @param led Led a apagar
 */
void led_toggle(uint8_t led);

/**
 * @brief Delay por software
 */
uint8_t sw_getState();

void led_setBright(uint8_t led, uint8_t value);

/**
 * @brief Inicializacion de los servicios de BSP
 */
void bsp_init();

/**
 * @brief Delay de x ms
 */
void bsp_delayMs(uint16_t x);

uint16_t bsp_conversor_ADC (void) ;

#endif
