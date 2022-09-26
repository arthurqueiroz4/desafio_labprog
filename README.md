# desafio_labprog
Sistema de armários


Imagine que você foi contratado para desenvolver um sistema para gerenciar os arm ́arios de alunos de
uma universidade. Inicialmente, você ter a que fazer uma prova de conceito para 8 arm ́arios. Devido
`as limita ̧c ̃oes de mem ́oria no dispositivo onde seu c ́odigo ser ́a embarcado, vocˆe optou por utilizar um
mapa de bits. Dessa forma, para cada arm ́ario vocˆe ir ́a associar um bit, sendo 0 para dispon ́ıvel e
1 para ocupado. Vocˆe dever ́a usar uma UNICA vari ́avel do tipo  ́ char sem sinal para controle. N ̃ao
utilize vetores.
O sistema funcionar ́a da seguinte forma: Inicialmente, vocˆe deve exibir um menu para o usu ́ario com
as seguintes op ̧c ̃oes:

1. Ocupar arm ́ario.
2. Liberar arm ́ario.
3. Sair.

Sempre que o usu ́ario digitar a op ̧c ̃ao 1, vocˆe deve escolher um arm ́ario aleatoriamente dentre os
dispon ́ıveis e ocupar, ou seja, colocar o bit correspondente na vari ́avel de controle em 1. O programa
deve iniciar com todos os arm ́arios desocupados. Quando o usu ́ario digitar a op ̧c ̃ao 2, o programa deve
pedir a posi ̧c ̃ao do arm ́ario para ser desocupado e colocar o bit correspondente em zero na vari ́avel de
controle. O programa deve sair quando a op ̧c ̃ao 3 for a escolhida pelo usu ́ario.

• Utilize operadores bit-a-bit para ligar e desligar os bits na vari ́avel de controle e controlar quais
arm ́arios est ̃ao livres e quais est ̃ao ocupados. N ̃ao use vetores.
• Para gera ̧c ̃ao de n ́umeros aleat ́orios, pesquise sobre a fun ̧c ̃ao rand().
• Em cada rodada do programa, apresente os arm ́arios que est ̃ao ocupados e os que est ̃ao livres.
