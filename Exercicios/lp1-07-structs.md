<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>        

Slide 7 - Compostos - Structs
=============================

## 1.

Considere a `struct` a seguir:

```
struct Personagem {
    int forca;
    int energia;
    int experiencia;
};
```

- Crie um    personagem com `forca=10`, `energia=50` e `experiencia=30`.
- Crie outro personagem com `forca=18`, `energia=20` e `experiencia=25`.
- Use as duas formas de inicializar `structs`:
    - acessando cada campo individualmente pelo nome
    - usando as chaves onde cada campo é separado por vírgula

## 2.

Baseado no exercício `1`, crie uma função `preencheA` que leia as propriedades
de um personagem e retorne um novo personagem:

```
struct Personagem preencheA (void) {
    ...  // complete aqui
}

void main (void) {
    struct Personagem p1 = preencheA();
    struct Personagem p2 = preencheA();
    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);
}
```

## 3.

Baseado no exercício `1`, crie uma função `preencheB` que leia as propriedades
de um personagem para o valor apontado pelo ponteiro recebido:

```
void preencheB (struct Personagem* p) {
    ...  // complete aqui
}

void main (void) {
    struct Personagem p1;
    preencheB(&p1);

    struct Personagem p2;
    preencheB(&p2);

    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);
}
```

## 4.

- Explique com suas próprias palavras as diferentes abordagens dos exercícios
  `2` e `3`.
- Qual abordagem você prefere usar e porquê?
- Na sua opinião quais são as diferenças de uso de memória e velocidade nas
  duas abordagens?

## 5.

Um ponto no espaço é representado por uma coordenada `x`, uma coordenada `y` e
uma coordenada `z`.

- Crie uma `struct` para representar um ponto.
- Declare três variáveis para `v1`, `v2` e `v3` do tipo criado para representar
  os pontos `(1,0,5)`, `(3,3,3)` e `(0,10,0)`.
- Exiba a coordenada `y` dos três pontos.
- Some 10 unidades na coordenada `z` dos três pontos.
- Exiba as três coordenadas de `v2`.

## 6.

- Declare uma `struct` para representar as características/propriedades de um
  atleta do seu esporte favorito.
- Crie uma função que exiba as propriedades de maneira bem organizada e
  formatada.
- Crie três exemplos de atletas variando as propriedades e teste a função de
  exibição.

## 7.

- Crie uma `struct` qualquer.
    - Seja criativo!
- Crie uma função `preenche` que receba um ponteiro para uma variável da
  `struct` criada e leia os campos para a variável passada.
  Exemplo:

```
struct T t;
preenche(&t);
printf("A=%d, B=%d\n", t.a, t.b);
```

## 8.

- Crie uma `struct` para guardar um ponto no espaço bi-dimensional com dois
  inteiros `x` e `y`.
- Crie uma função para preencher 1 ponto.
- Na `main`, crie um vetor com dez pontos.
- Crie uma função para preencher um vetor de pontos.
- Crie uma função que receba um vetor de pontos e retorne o ponto mais distante
  de `(0,0)`.

## 9.

- Um jogo possui 10 personagens, cada um com as seguintes características:
    - Um número que representa a sua "identidade".
    - Um posição `(x,y)` no espaço bi-dimensional.
    - Uma quantidade de pontuação (inicialmente 0).
- Crie uma struct para representar um personagem.
    - A posição também deve ser uma `struct`.
- Crie um vetor com 10 personagens.

## 10.

- Crie uma função que leia um personagem (use a `struct` do exercício
  anterior).
- A função deve usar uma função que lê a posição.
- Crie um loop para ler todos os 10 personagens
- Desenhe um mapa do jogo.
    - Use funções auxiliares!
    - Exemplo:

```
   0 1 2 3 4 5 6 7 8 9

0          8
1    0
2 
3              3
4 
5                  7
6      2
7 
8          9
9                  5
```
