/*
  3. Hacer una funcion que diga si en una cadena hay solo digitos.
*/
#include <stdio.h>
int main(void) {
  int p, num;

  printf("Ingrese un numero:\n");
  p = scanf("%d", &num);

  while (!p) {
    printf("ERROR: No es un numero.\n Por favor, ingrese un nuevo numero:,");
    p = scanf("%d", &num);
  }
  if(p){
    printf("Es un numero");
    break;
  } else {

  }
  return 0;
}