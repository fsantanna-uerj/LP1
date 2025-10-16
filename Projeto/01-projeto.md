# Sistema de Gerenciamento de Informações

Grupos de 2 ou 3 alunos.

## Objetivo

Desenvolver um sistema de gerenciamento de informações que permita aos usuários
criar, editar e excluir registros, bem como armazenar e recuperar informações
em um arquivo com a base de dados.

O domínio da aplicação, ou seja, o tipo dos dados gerenciados é escolha dos
alunos.

Exemplos de Domínios:

- Registro de eventos
- Cadastro de membros
- Inventário de coleção
- Controle de estoque
- Calendário esportivo
- Cronograma de projeto

## Instruções

As instruções irão aparecer como perguntas no Google Classroom dentro do tema
"Projeto".

## Requisitos

- O sistema de permitir que os usuários...
    - criem novos registros;
    - editem registros existentes;
    - busquem registros por ID único ou palavras chave.
- O sistema deve armazenar as informações dos registros em um arquivo.
- O sistema deve recuperar as informações do arquivo e exibi-las para o
  usuário.
- O sistema deve ter uma interface de usuário através do terminal.

### Requisitos específicos

- O código deve usar uniões discriminadas:

A aplicação deve gerenciar diferentes tipos de registros, cada um com
características específicas.

Por exemplo, em uma base de veículos, os registros podem ser carros, motos e
caminhões, cada um com suas características exclusivas, além das em comum.

- O código deve usar arrays ou vetores de 2 dimensões:

Pelo menos um tipo de registro deve conter um array.

Por exemplo, em uma base de alunos, a grade de horários pode ser um array com
dia da semana (seg, ter, ...) e horários (M1, M2, ...), guardando o código da
disciplina.

- O código deve usar `fseek` para recuperar informações:

Cada registro deve estar associado a um ID único crescente (`1`, `2`, ...) que
também representa a sua posição dentro do arquivo.
O ID de um registro não deve ser alterado após a sua criação.

O código deve calcular os tamanhos dos registros de modo a caminhar dentro da
base de forma eficiente.

DICA:
A remoção de um registro deve apenas marcá-lo como removido, sendo então
ignorado em operações futuras.

## Extra

- Retirar efetivamente os registros removidos da base de dados.
- Manter um índice, no início do arquivo, que associa cada ID único a sua
  posição dentro do arquivo.
