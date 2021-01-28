#include <stdio.h>

//referenciacion: es la obtencion de la direccion de una variable


int main() {
    
  int a=10, b=15;
  int *const ptr=&a;
  *ptr=3;
  ptr=&b;
    return 0;
}
  