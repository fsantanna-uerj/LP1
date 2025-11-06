<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>        

Slide 9 - Listas
================

**Não utilize `malloc` nos exercícios a seguir.**

Considere a `struct` a seguir:

```
struct Caixa {
    int valor;
    struct Caixa* prox;
};
```

## 1.

Considere a lista encadeada a seguir:

```
1 -> 3 -> 9 -> 7 -> 5
```

- Crie um programa que represente a lista acima encadeando valores do tipo
  `struct Caixa`.
    - Cada valor acima deve estar em uma caixa própria (ex., `c1`, `c2`, etc.).

## 2.

- Crie uma função que receba um ponteiro para uma caixa e percorra todas as
  caixas encadeadas, exibindo seus valores:

```
void exibe (struct Caixa* caixa);
```

- Teste o exemplo com a lista da questão `1`.

## 3.

Faça as seguintes alterações na questão `1` (mantenha o código atual, fazendo
alterações somente ao final do arquivo):

- Mantenha um novo ponteiro `cabeca` que sempre aponta para a caixa inicial:
    - `struct Caixa* cabeca = ...`
- Remova a caixa no índice `2` (valor `9`).
- Exiba o valor das caixas (usando `exibe`).
    - Certifique-se de que o valor `9` não aparece mais.
- Insire a caixa removida, no início da lista.
- Exiba o valor das caixas (usando `exibe`).

## 4.

Crie uma função que receba uma lista e um valor inteiro e retorne se o valor
está contido na lista:

```
int contem (struct Caixa* lista, int valor);
```

## 5.

Crie uma função que receba uma lista e um valor inteiro a ser removido da
lista (caso esteja contido na lista).
A função deve retornar a lista modificada, ou seja, um ponteiro para o seu
primeiro elemento:

```
struct Caixa* remove (struct Caixa* lista, int valor);
```

## 6.

Crie uma função que receba uma lista ordenada e um valor inteiro a ser inserido
na lista.
A função deve retornar a lista modificada que deve se manter ordenada:

```
struct Caixa* insere (struct Caixa* lista, int valor);
```

## 7.

Crie uma função que receba duas listas e retorne a concatenação das duas
listas:

```
struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2);
```

## 8.

Crie uma função que receba duas listas e retorne a concatenação das duas
listas excluindo repetições:

```
struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2);
```

Assuma que não há repetições dentro das listas recebidas.
