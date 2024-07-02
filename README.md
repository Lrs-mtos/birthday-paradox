# Birthday Problem Simulation

Este programa simula o problema dos aniversários, gerando aniversários aleatórios para um determinado número de pessoas e verificando quantas vezes ocorrem aniversários iguais em múltiplas simulações.

## Descrição

O programa é configurado para realizar uma série de simulações (definidas pela constante `SIMULATIONS`). Em cada simulação, ele gera aniversários aleatórios para um grupo de pessoas (definido pela constante `N`) e conta quantas vezes ocorrem aniversários iguais.

### Funcionalidades

- Inicializa um calendário de aniversários.
- Gera aniversários aleatórios para `N` pessoas.
- Conta quantos aniversários são iguais em cada simulação.
- Calcula e imprime a média de aniversários iguais em todas as simulações.
- Calcula e imprime a probabilidade de haver pelo menos um aniversário igual em uma simulação.

## Como usar

1. Clone o repositório:
   ```sh
   git clone https://github.com/lrs-mtos/birthday-paradox.git
2. Navegue até o diretório do projeto:
   ```sh
   cd birthday-paradox
3. Compile o código:
   ```sh
   gcc -o birthday_simulation birthdays.c
4. Execute o programa:
   ```sh
   ./birthday_simulation


