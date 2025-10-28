<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>        

Slide 8 - Navegação
===================

## 1.

- Considere um arquivo com o seguinte formato:

```
Maria    020       RJ
Joao     101       SP
Jose     006       MG
```

Os nomes, idades e estados aparecem sempre, respectivamente, nas posições `0`,
`10` e `20` de cada linha.
As idades possuem exatamente 3 caracteres.
Os estados possuem exatamente 2 caracteres.

Escreva um programa que leia o número de uma linha e mostre, separadamente, a
idade e estado correspondentes.
Por exemplo, para o arquivo acima, a leitura `2` deve exibir a idade `101` e o
estado `SP`.
Caso a linha não exista, o programa deve exibir `registro nao encontrado`.

Teste o programa com linhas inválidas (e.g., `-1`, `0`, `1000`, etc).

## 2.

Escreva uma função `tamanho` que receba o nome de um arquivo e retorne o seu
tamanho.
Como uma restrição didática, a função não pode usar `ftell`.

## 3.

Sem usar um loop (`while`, `for`, etc), escreva um programa que adicione o
caractere `|meio|` exatamente no meio de um arquivo dado (mas desconhecido).

Dica: Use o modo `r+` para ler e escrever no arquivo.
