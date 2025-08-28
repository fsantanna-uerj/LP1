<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>        

Slide 5 - Ponteiros
===================

## 1.

- Leia dois inteiros a e b.
- Exiba os valores de a e b.
- Crie um ponteiro p para a variável com o maior valor.
- Através de p subtraia 50 da variável com o maior valor.
- Exiba os valores de a e b novamente.

## 2.

Uma conta é representada por um inteiro que guarda o saldo total:

```
int minha_conta;
```

Uma compra na internet é efetuada por uma chamada `compra(conta,valor)`.
A função recebe um ponteiro para uma conta e um valor a ser debitado:

```
void compra (int* conta, int valor) {
    <...>
}
```

Um casal tem duas contas e quer usar a conta com maior saldo para fazer uma
compra de 500 reais.
Faça um programa que leia o saldo das duas contas e efetue a compra
corretamente.
Ao final, o programa deve exibir os saldos das duas contas.

## 3.

Agora, o casal tem uma lista de compras a efetuar:

```
int compras[] = { 100, 50, 80, 30, 20 };
```

Faça um programa que leia o saldo das duas contas e efetue as compras
corretamente, sempre usando a conta com o maior saldo.
A cada compra, o programa deve exibir os saldos das duas contas.

## 4.

Crie uma função troca que receba dois ponteiros para inteiros p1 e p2 e troque
os conteúdos por eles apontados:

```
int x=10, y=20;
troca(&x, &y);              // definir essa funcao
printf("%d %d\n", x, y);    // 20 10
```
