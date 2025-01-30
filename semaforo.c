#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// Definição dos pinos dos LEDs
#define LED_VERMELHO 11
#define LED_AMARELO 12
#define LED_VERDE 13

// Temporização do semáforo (3 segundos)
#define INTERVALO_TEMPO 3000 

// Variável para rastrear o estado atual do semáforo
volatile int estado_atual = 0;

int main() {
    stdio_init_all();

    // Configuração dos pinos dos LEDs como saída
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(LED_AMARELO);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);
// Loop principal (imprime mensagem a cada 1 segundo)
    while (true) {
        printf("Sistema rodando...\n");
        sleep_ms(1000);
    }
    return 0;
}