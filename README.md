# Trabalho Final - Computação e Representação Gráfica

### Autores:
- [Ayer Ribeiro de Souza Netto](https://github.com/ayer-ribeiro)

- [Bruno Smarsaro Bazelato](https://github.com/brunosmarsaro)

### O Jogo:
Monkey’s War, como é chamado, é um jogo estilo battle arena onde existem dois times, 
sendo um controlado por jogador humano e o outro pela máquina. 
De cada lado da arena fica instalado a respectiva base do jogador e as torres que a defendem. 
Das bases saem novos soldados a cada ciclo de tempo e os heróis que quando 
são derrotados durante a partida renascem para continuar a guerra.

O objetivo do jogo é simples: destruir a base inimiga. 
Portanto, é necessário, mesmo que seja simples, montar uma estratégia de combate. 
O jogo tem uma interface com informações em tempo real durante o jogo. 
No canto superior esquerdo aparecem as informações do atual alvo do herói - seu poder de ataque e defesa, 
level no caso de ser o herói inimigo, e a barra de vida do personagem atacado. 
No canto inferior esquerdo aparece uma foto do herói controlado pelo jogador com seu respectivo level e 
uma barra vertical de experiência que indica o quão perto esta de alcançar o próximo level. 
No meio tem a barra de vida do herói, bem como seu poder de ataque e defesa. 
E, por último, no canto inferior direito aparece um mapa 2D do cenário inteiro onde os pontos azuis e vermelhos diferem os times, 
sendo respectivamente o time controlado pelo jogador humano e pela máquina. 
Os pontos brancos com bordas da cor do time representam os soldados e os pontos da cor do time e com borda preta representam os heróis. 

### Bibliotecas e Ferramentas Utilizadas

Para a implementação do jogo, foi utilizada a biblioteca OpenGL (Open Graphics Library) que é uma API (Application Program Interface) 
para renderização gráfica 2D e 3D. Disponível para diversos sistemas operacionais de forma gratuita. 
Assim, tal biblioteca é necessária para que o jogo funcione.

A modelagem dos personagens e do cenário foi feita no Blender, um software open source de modelagem 3D.

### Como Jogar?

Os controles do jogo são feitos tanto por mouse quanto por teclado. Enquanto o primeiro é responsável pelo movimento do herói e da tela, o outro é utilizado para navegar dentre os menus do jogo e selecionar opções. 

Deste modo, clicando com o botão direito do mouse em algum lugar dentro da rota de batalha, o herói irá até o ponto determinado. Além do mais, seu alvo é definido da mesma maneira. Pressionando a tecla Y durante o jogo faz com que a câmera do jogo pare de seguir o herói e fique a disposição do jogador, podendo ser controlada então pelo movimento do mouse. Enquanto a tecla H faz o herói parar de andar e permanecer em sua atual posição.

A tecla ESC faz o jogo pausar e aparece um menu para que o jogador decida se deseja voltar à partida ou encerrar o jogo. E finalmente, a tecla P troca a perspectiva do jogo, alternando entre duas perspectivas padrões. 

### Etapas do desenvolvimento

###### Barra de vida:

https://github.com/ayer-ribeiro/monkeys-war-opengl-game/assets/24896635/715e671e-9c2a-41ea-b325-0d4c5bcbe514

###### Personagens:

https://github.com/ayer-ribeiro/monkeys-war-opengl-game/assets/24896635/b2dc0d15-90f3-491b-a6b1-f1bd37132d92

###### Movimentação dos personagens:

https://github.com/ayer-ribeiro/monkeys-war-opengl-game/assets/24896635/58f09468-1db9-4bcf-a727-5eca3d9fa863

###### Colisões

https://github.com/ayer-ribeiro/monkeys-war-opengl-game/assets/24896635/967db5b9-0dd0-42f0-952d-56d8c3cb18d8

###### Controle de movimentação de personagem

https://github.com/ayer-ribeiro/monkeys-war-opengl-game/assets/24896635/1dc62e63-e01d-47e1-aa7b-eb5ffb3ec1fa

###### Interação entre personagens

https://github.com/ayer-ribeiro/monkeys-war-opengl-game/assets/24896635/494e3441-f87a-4ddc-ab3b-1f138fb82c8b
