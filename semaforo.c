#include <stdio.h>
#include "pico/stdlib.h"   // Inclui a biblioteca padrão para funcionalidades básicas como GPIO, temporização e comunicação serial.
#include "hardware/timer.h" // Inclui a biblioteca para gerenciamento de temporizadores de hardware.

// Definição dos pinos dos LEDs
#define LED_VERMELHO 13
#define LED_AMARELO 12
#define LED_VERDE 11

// Temporização do semáforo (3 segundos)
#define INTERVALO_TEMPO 3000 

// Variável para rastrear o estado atual do semáforo
volatile int estado_atual = 0;

// Função de callback do temporizador
bool repeating_timer_callback(struct repeating_timer *t) {
    // Desliga todos os LEDs antes de mudar de estado
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);

    // Alterna entre os estados do semáforo
    switch (estado_atual) {
        case 0:
            gpio_put(LED_VERMELHO, 1); // Liga o vermelho
            printf("Sinal: VERMELHO\n");
            break;
        case 1:
            gpio_put(LED_AMARELO, 1);  // Liga o amarelo
            printf("Sinal: AMARELO\n");
            break;
        case 2:
            gpio_put(LED_VERDE, 1);    // Liga o verde
            printf("Sinal: VERDE\n");
            break;
    }

    // Alterna para o próximo estado
    estado_atual = (estado_atual + 1) % 3;

    return true; // Mantém o temporizador ativo
}

int main() {
    stdio_init_all();

    // Configuração dos pinos dos LEDs como saída
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(LED_AMARELO);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    // Inicia o semáforo no estado vermelho imediatamente
    estado_atual = 0;
    repeating_timer_callback(NULL);

    // Configuração do temporizador periódico
    struct repeating_timer timer;
    add_repeating_timer_ms(INTERVALO_TEMPO, repeating_timer_callback, NULL, &timer);

// Loop principal (imprime mensagem a cada 1 segundo)
    while (true) {
        printf("Sistema rodando...\n");
        sleep_ms(1000);
    }
    return 0;
}