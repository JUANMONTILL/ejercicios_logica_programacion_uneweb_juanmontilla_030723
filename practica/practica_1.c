/*
  1. Hacer una funcion que diga si un numero es primo
*/

#include <stdio.h>

int main() {
  /*
    "este codigo hace lo mismo que lo que aqui abajo"
    int numero;
    int count = 0;
  */

  int numero, count = 0;

  printf("Digite un numero");
  scanf("%i", &numero);

  for(int i = 1; i <= numero; i++){
    if(numero % i ==0)
      /*
         "este codigo hace lo mismo que lo que aqui abajo"
         count = count + 1;
      */
      count++;
    }

    if (count > 2) {
      printf("el numero %i es no primo", numero);
    } else {
      printf("el numero %i es primo", numero);
    }
    
    return 0;
  }
