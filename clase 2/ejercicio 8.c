#include <stdio.h>

//referenciacion: es la obtencion de la direccion de una variable
int *ptr_int, var;

void init_ptr(){
    int local = 57;
    ptr_int =&local;
    var=*ptr_int;
    *ptr_int=23;
}

int main() {
    
    init_ptr();
    var=*ptr_init;
    *ptr_int=20;
    
    return 0;
}
  