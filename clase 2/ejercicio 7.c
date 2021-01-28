#include <stdio.h>

//referenciacion: es la obtencion de la direccion de una variable

int main() {

    float *ptr_float;
    printf("El valor aputnado por ptr_float es %f", *ptr_float);
    *ptr_float = 10.5;
    return 0;
}
  