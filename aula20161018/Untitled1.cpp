#include <stdio.h>
void inverte(char *frase, int n);
int main() {
  char frase[] = "Socorram-me, subi no onibus em Marrocos";
  inverte(frase, 0);
  printf("\n");
  return 0;
}
void inverte(char *frase, int n) {
  if(frase[n] != '\0') {
    inverte(frase, n+1);
    printf("%c", frase[n]);
  }
}
