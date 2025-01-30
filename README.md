# 🚦 Projeto: Temporizador Periódico - Semáforo com Raspberry Pi Pico

## 📌 Descrição
Este projeto implementa um **temporizador periódico** utilizando a Raspberry Pi Pico para simular um **semáforo de trânsito**. O sistema controla **três LEDs** (vermelho, amarelo e verde), alternando entre eles a cada **3 segundos**.

## 🔗 Link do Vídeo Ensaio

[Demonstração de Funcionamento do Projeto]()

## 🛠️ Funcionalidades
 - LED vermelho inicia ligado automaticamente assim que o código é iniciado.  
 - O temporizador periódico troca os LEDs a cada **3 segundos**.  
 - A sequência dos LEDs segue a lógica de um semáforo real:  
  - **Vermelho** ➝ **Amarelo** ➝ **Verde** ➝ **Vermelho** (e repete)
 - Implementação eficiente com interrupções baseadas em temporizador.  
 Utiliza a biblioteca `hardware/timer.h` para funções de temporização.  

## 🖥️ Componentes Utilizados
- 💻 **Raspberry Pi Pico**
- 🔴 **LED Vermelho** (GPIO 13)
- 🟡 **LED Amarelo** (GPIO 12)
- 🟢 **LED Verde** (GPIO 11)
- 🛠️ **Resistores de 330Ω** (para cada LED)
- 🔌 **Fios e Protoboard**

## 🔌 Conexões
| Componente   | GPIO da Pico |
|-------------|-------------|
| LED Vermelho | 13 |
| LED Amarelo  | 12 |
| LED Verde    | 11 |
| GND (Comum)  | GND |

## 📜 Como Executar o Projeto
1. **Clone o repositório**:
   ```bash
   git clone https://github.com/lorenzobaroni/semaforo
   ```
2. **Compile o código e envie para a Raspberry Pi Pico**:
   - Utilize o VS Code.
   - Certifique-se de que a **SDK da Raspberry Pi Pico** está instalada.
   - Conecte a **Pico via USB**, entre no modo de boot (pressionando **BOOTSEL** ao conectar) e copie o arquivo `.uf2` gerado.

## 📌 Observações
- **Caso os LEDs não acendam**, verifique as conexões e certifique-se de que os resistores estão corretos.
- O **LED vermelho já inicia ligado** e a sequência segue normalmente.

## Licença

Este programa foi desenvolvido como um exemplo educacional e pode ser usado livremente para fins de estudo e aprendizado.

## 📌 Autor

- LORENZO GIUSEPPE OLIVEIRA BARONI

