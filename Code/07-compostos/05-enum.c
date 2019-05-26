#include <stdio.h>
#include <string.h>

enum Dia {
  Dom = 1,
  Seg = 2,
  Ter = 3,
  Qua = 4,
  Qui = 5,
  Sex = 6,
  Sab = 7,
};

enum Tipo {
  Aluno,      // 0
  Professor,  // 1
  Funcionario // 2
};

void main (void) {
    enum Dia  dia = Qui;
    enum Tipo sub = Professor;

    printf("%d %d\n", dia, sub);
    printf("%s %s\n", dia, sub);
}
