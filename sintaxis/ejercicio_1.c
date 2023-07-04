#include <stdio.h>
/*
  #include <stdio.h> es una biblioteca de archivos de encabezado que nos permite trabajar con funciones de entrada y salida, como printf()" (que se utiliza mas adelante). Los archivos de encabezado agregan funcionalidad a los programas C.

  NOTA: No se preocupe si no entiende como #include <stdio.h> funciona. Piense en ello como algo que (casi) siempre aparece en los programas de lenguaje C.

  Una linea en blanco. C ignora los en blanco pero lo usamos para hacer que el codigo sea mas legible.
 */
int main() {
  /*
    Otra cosa que siempre aparece en un programa en C es main()". Esto se llama una funcion. {} Se ejecutara cualquier codigo dentro de sus corchetes.  
  */
  printf("Hola Mundo");
  /*
    "printf()" es una funcion utilizada para generar/imprimir texto en la pantalla. En nuestro ejemplo, genera "Hola mundo".

    Nota: Tenga en cuenta que: cada declaracion se termina con punto y coma ";"

    El cuerpo de "int main()" tambien podria escribirse como;
    "int main(){printf("Hola mundo"); return 0;}"

    Recuerde: el compilador ignora los espacios en blanco, sin emebargo varias lineas hace que el codigo sea mas legible.
  */
  return 0;
  /*
    "Return 0" finaliza la funcion "main()" 
  */
}
/*
  no olvide agregar el corchete de cierre "}" para finalizar la funcion principal.
*/