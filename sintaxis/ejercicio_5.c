#include <stdio.h>

int main() {
  // Ejemplos de otras secuencias de escape validas.

  /*
    Consejo: dos caracteres de escape uno despues del otrocrearan una linea en blanco.
  */
  printf("\tHola Mundo\n\n");
  /*
    La secuencia de escape "\t"Crea una tabulacion. 
  */
  printf("Estoy aprendiendo \\lenguaje C.");
  /*
    La secuencia de escape "\\" Crea una barra invertida (\)
  */
  printf("Y es \"asombroso\"."); //esto imprime comillas dobles
  /*
    La secuencia de escape "\"" inserta un caracter de comillas dobles.
  */
/*
  Tambien puedo comantar partes del codigo.
  printf("Cometi un error") 
*/

  return 0;
}
// Este comentario es de una linea

/*
  Y este es un comentario multilinea
*/

