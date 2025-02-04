# 🚦 Projeto: Temporizador Periódico - Semáforo com Raspberry Pi Pico W

## 📌 Descrição
Este projeto implementa um **temporizador periódico** utilizando a Raspberry Pi Pico W para simular um **semáforo de trânsito**. O sistema controla **três LEDs** (vermelho, amarelo e verde), alternando entre eles a cada **3 segundos**.

## 🔗 Link do Vídeo Ensaio

[Demonstração de Funcionamento do Projeto](https://www.youtube.com/watch?v=75vI2wzrxds&ab_channel=LorenzoGiuseppeOliveiraBaroni)

## 🛠️ Funcionalidades
 - LED vermelho inicia ligado automaticamente assim que o código é iniciado.  
 - O temporizador periódico troca os LEDs a cada **3 segundos**.  
 - A sequência dos LEDs segue a lógica de um semáforo real:  
  - **Vermelho** ➝ **Amarelo** ➝ **Verde** ➝ **Vermelho** (e repete)
 - Implementação eficiente com interrupções baseadas em temporizador.  
 Utiliza a biblioteca `hardware/timer.h` para funções de temporização.  

## 🖥️ Componentes Utilizados
- 💻 **Raspberry Pi Pico W**
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
1. Clone o repositório:
   ```bash
   git clone https://github.com/lorenzobaroni/semaforo
   ```
2. Abra o projeto no VS Code.

3. Compile o código

4. Clique no arquivo diagram.json e teste o projeto no simulador do WOKWI Integrado no VS Code

5. Envie o binário para a placa:
   - Conecte o **Raspberry Pi Pico W** enquanto segura o **BOOTSEL**.
   - Copie o arquivo `.uf2` gerado para a unidade USB montada.

## 📌 Observações
- **Caso os LEDs não acendam**, verifique as conexões e certifique-se de que os resistores estão corretos.
- O **LED vermelho já inicia ligado** e a sequência segue normalmente.

## Licença

Este programa foi desenvolvido como um exemplo educacional e pode ser usado livremente para fins de estudo e aprendizado.

## 📌 Autor

- LORENZO GIUSEPPE OLIVEIRA BARONI

