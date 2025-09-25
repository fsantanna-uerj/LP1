<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>        

Slide 6 - Vetores
=================

## 1.

- Crie um vetor de tamanho máximo fixo na função main, ex:

```
int vec[100];
```

- Crie uma função preenche que receba um vetor `xs` de inteiros, uma quantidade
 `n` e preencha o vetor `xs` com `n` números lidos do teclado:

```
void preenche (int* xs, int n);
```

- Crie uma função `media` que receba um vetor `xs`, a quantidade de elementos
  `n` no vetor `xs` e retorne a média entre todos os valores do vetor.

Dentro das funções, use a notação de ponteiros em vez da de índices (`*` vs
`[]`)

- Crie um programa que leia um número e preencha o vetor `vec` com essa
  quantidade de elementos e em seguida calcule a média dos valores do vetor.

## 2.

- Crie um vetor `vet` de 5 posições.
- Leia 5 números e guarde-os em `vet`.
- Exiba todos os números de `vet`.
- Leia um outro número `I`.
- Remova o valor de `vet` no índice `I`.
    - Mantenha o vetor sem buracos!
    - As posições vazias devem ser preenchidas com `0`.

Exemplo:

```
| 90 | 55 | 15 | 70 | 10 |
```

Após remover `I=2`:

```
| 90 | 55 | 70 | 10 |  0 |
```
