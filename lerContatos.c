#include <stdio.h>
#include <stdlib.h>

struct email {
  char *end[20];
  char *provedor[20];
};

int main() {

  FILE *f = fopen("todosOsContatos.txt", "r");
  char *nome;
  char *tel;
  char *email;

  nome = (char *)malloc(20 * sizeof(char));
  tel = (char *)malloc(20 * sizeof(char));
  email = (char *)malloc(20 * sizeof(char));

  for (int i = 0; i < 10000; i++) {

    fscanf(f, "Nome: %[A-Z. a-z]\n", nome);
    fscanf(f, "Telefone: %[(0-9) -0-9]\n", tel);
    fscanf(f, "Email: %s\n", email);
    fscanf(f, "\n");

    printf("%d\n", i);
    printf("%s\n", nome);
    printf("%s\n", tel);
    printf("%s\n", email);

  }
}