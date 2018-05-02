<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>        

Roteiro 1: Usando o GCC
=======================

- Ao final da aula, submeter pelo GitHub:
    - criar uma nova pasta, ex., `lab-01/`
    - para cada item:
        - submeter o código fonte, ex., `lab-01/ex-01.c`
        - submeter uma imagem com a execução, ex., `lab-01/ex-01.png`

## 1.

1. Entrar no Linux
    - Logar como "Convidado"
3. Abrir o Firefox em <https://github.com/fsantanna-uerj/LP1/tree/master/Labs/lab-01>
    - Baixar o arquivo [`hello.c`](hello.c) para a pasta `/tmp/`
4. Abrir o Terminal
    - Compilar e Executar o programa:

```
$ cd /tmp
$ gcc hello.c -o hello.exe
$ ./hello.exe
```

<img align="right" width="200" src="linux-04.jpeg"/>
<img align="right" width="200" src="linux-03.jpeg"/>
<img align="right" width="200" src="linux-02.jpeg"/>
<img align="right" width="200" src="linux-01.jpeg"/>

Para os demais exercícios, basear-se nos programas da última aula:

<https://github.com/fsantanna-uerj/LP1/tree/master/Code/02>

## 2.

Faça um programa que leia dois valores e exiba o maior valor lido.

- Dicas:
    - `printf`
    - `scanf`
    - `if`

## 3.

Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo.
Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais.
Faça um programa que leia o preço de um celular em dólares e, caso seja um bom
negócio, escreva `BOM NEGÓCIO`.

## 4.

Agora o aluno alugou um carro.
Ele está preocupado com o limite de velocidade, mas não entende muito bem
o sistema de milhas por hora (mph).
Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora
(kph).
Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros.
Crie um programa que leia a velocidade atual do carro em mph e escreva na tela
`ACELERE`, `DESACELERE` ou `MANTENHA`.

## 5.

Faça um programa que leia números continuamente até que seja digitado `0`.
Ao final, o programa deve exibir a soma de todos os números lidos.

- Dicas:
    - `while`

## 6.

Faça um programa que leia um número `N` e calcule o somatório a seguir:

![](sum.png)

## 7.

O Campeonato Brasileiro está na reta final com 20 times na disputa.

Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos.
Escreva um programa que, para cada time, leia o nome, número de vitórias,
número de empates e número de derrotas.

Ao final, o programa deve escrever o nome dos times com mais e menos pontos até
o momento.
