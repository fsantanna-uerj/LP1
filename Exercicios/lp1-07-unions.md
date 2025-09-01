<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>        

Slide 7 - Compostos - Unions
============================

## 1.

Qual é a diferença entre `struct` e `union`.
Dê exemplos de uso que identifiquem a necessidade dos dois construtores de
tipos.

## 2.

Crie uma `union` para representar um cidadão que pode ser identificado por
`CPF`, `RG` ou nome completo.

## 3.

O que é união discriminada e por que ela é necessária?

## 4.

O preço dos produtos em uma loja de aeroporto pode ser exibido em reais,
dólares ou euros.

- Crie um tipo de dados `Preco` que permita as três representações e
  identifique o subtipo em uso.

- Crie uma função `exibe` que receba um dado do tipo `Preco` e exiba o valor e
  a moeda.

- Crie uma função `altera` que receba um preço e altere-o para o subtipo
  passado.
  Use a função `exibe` para verificar se a conversão está correta.

## 5.

Defina um tipo `Animal` que possa representar as diferentes classes de animais
vertebrados com as seguintes propriedades:

- Anfíbios:     número de patas, espessura da pele, se possui cauda ou não.
- Aves:         comprimento do bico, autonomia de vôo, faixa de frequência do canto.
- Mamíferos:    quantidade de dentes, volume do cérebro, velocidade terrestre.
- Répteis:      se é venenoso, autonomia debaixo d'água, espessura dos ovos.

Crie 6 exemplos (instâncias) de animais variando as classes e propriedades.

## 6.

Crie uma `struct` para representar um ponto no espaço com três coordenadas `x`,
`y` e `z`.

Uma outra maneira de representar um ponto é por um vetor de 3 posições.

Crie uma `union` que permita representar um ponto das duas formas e de modo
intercambiável, ex.:

```
union Ponto pt;
pt.vec[0] = 10;
pt.vec[1] = 20;
pt.vec[2] = 30;
printf("(%d,%d,%d)\n", pt.x, pt.y, pt.z);
```

## 7.

- Crie uma `union` qualquer.
    - Seja criativo!
    - Misture com o exercício sobre [structs](lp1-07-structs) `7`.
    - Use união discriminada.
- Crie uma função `preenche` que receba um ponteiro para uma variável do tipo
  criado e leia os campos para a variável passada.

## 8.

Altere o exemplo `5` para incluir propriedades em comum a todas as classes de
animais, tais como nome da espécie e cor predominate.

Atualize os exemplos para funcionarem com a nova representação.
