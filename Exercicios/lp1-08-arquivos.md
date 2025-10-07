<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>        

Slide 8 - Arquivos
==================

## 1.

- Leia uma string com `scanf` (máximo de 25 caracteres).
- Escreva a string para um arquivo, caractere a caractere, usando um `for`.
    - A função `strlen` retorna o tamanho de uma string.
    - É necessário incluir a biblioteca `string.h`.

## 2.

- Leia o arquivo do exercício `1`, caractere a caractere, para uma string
  (máximo de 25 caracteres).
- Exiba na tela a string lida.

## 3.

- Considerando o terminador `\0`, que cuidados são necessários ao lidar com
  strings e arquivos em C...
    - ... ao escrever uma string para um arquivo?
    - ... ao ler uma string de um arquivo?

## 4.

- Leia 10 strings com `scanf` (máximo de 25 caracteres) para um vetor de
  strings.
- Escreva cada string para um arquivo, caractere a caractere, usando um `for`
  dentro de outro `for`.

## 5.

- Altere os exercícios `1` e `4` para usar a função a seguir a ser definida:
    - `void escreva_string (FILE* f, char* str) { ... }`
    - A função recebe um arquivo e uma string e escreve a string no arquivo,
      caractere a caractere.

## 6.

- Altere todos os exercícios anteriores para usar o modo binário do `fopen`,
  ex.:
    - `fopen("x.txt", "wb")`
- Houve alguma mudança de comportamento? Explique.

-------------------------------------------------------------------------------

## 7.

Considere a `struct` a seguir:

```
struct Pessoa {
    int  idade;
    char nome[64];
    int  peso;
};
```

- Crie um programa com um vetor de `Pessoa` de tamanho `10`.
- Crie uma função para preencher uma `Pessoa`.
- Crie um loop para preencher o vetor.
- Use a escrita e leitura de arquivos no modo binário para gravar e recuperar
  o vetor.
    - Crie funções específicas para ler e escrever **uma** `Pessoa` do arquivo.

## 8.

Considere o exercício `7`.

- Qual é a relação entre o tamanho do nome de uma `Pessoa` e o tamanho final do
  arquivo gravado?
- Altere as funções de leitura e escrita para economizar espaço no disco.
