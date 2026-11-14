# MazeRush

## 1. Descrição do jogo

O Maze Rush é um jogo 2D desenvolvido em linguagem C utilizando a biblioteca Raylib. O objetivo é controlar um personagem dentro de um labirinto e coletar o maior número possível de itens durante 45 segundos.

O jogador deverá explorar os caminhos disponíveis, evitando as paredes e procurando os itens espalhados pelo mapa.

## 2. Objetivo

Coletar o máximo de itens possível antes que o tempo da rodada termine, buscando melhorar a própria pontuação a cada nova tentativa.

## 3. Objetos do jogo

- **Jogador:** personagem controlado pelo usuário.
- **Labirinto:** mapa fixo composto por paredes e corredores.
- **Itens coletáveis:** moedas ou objetos que aparecem em posições aleatórias e podem ser coletados pelo jogador.
- **Temporizador:** controla os 45 segundos de cada rodada.
- **Contador:** registra a quantidade de itens coletados.

## 4. Regras

1. Cada rodada terá duração de 45 segundos.
2. O jogador poderá se movimentar utilizando as teclas WASD ou as setas do teclado.
3. As paredes impedirão a passagem do personagem.
4. O labirinto permanecerá igual em todas as rodadas.
5. Os itens aparecerão em posições aleatórias válidas a cada nova rodada.
6. Ao coletar um item, outro aparecerá em uma posição diferente do mapa.
7. Cada item coletado aumentará a pontuação em uma unidade.
8. Quando o temporizador chegar a zero, a rodada será encerrada e o resultado será apresentado.
9. O jogador poderá iniciar novas rodadas ilimitadamente.

## 5. Aplicação dos paradigmas

O paradigma imperativo será utilizado na estrutura principal do jogo, incluindo o game loop, controle do personagem, leitura de entradas e renderização dos elementos.

O paradigma funcional será aplicado na manipulação das coleções de objetos, utilizando os padrões map, filter e fold, além da separação das regras em funções puras sempre que possível.

## 6. Condição de encerramento

A rodada será encerrada quando o temporizador atingir zero. O jogo apresentará a quantidade total de itens coletados e permitirá que o jogador inicie uma nova partida.

## Equipe
- Gabriel Araujo
- Heitor Torres
- Isabelly Ribeiro
- Rafael de Andrade
- Rubens Sousa
