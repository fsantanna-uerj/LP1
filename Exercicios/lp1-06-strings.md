<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>        

Slide 6 - Strings
=================

# 1.

- Implemente a função `tamanho`:
    - Recebe uma string
    - Retorna a quantidades de caracteres da string

```
int tamanho (char* str);
```

Obviamente, não use a função `strlen`.

# 2.

- Implemente a função `concatena`:
    - Recebe uma string de destino
    - Recebe duas strings de origem
    - Junta em destino as duas strings de origem (sobrescrevendo o conteúdo de
      destino, se houver)

```
void concatena (char* d, char* o1, char* o2);
```

A implementação deve usar a função `tamanho` da questão `3`.

Obviamente, não use a função `strcat`.
