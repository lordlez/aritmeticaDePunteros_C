#include <stdio.h>

int main(){
    int a, i;
    a = 1;
    printf("La direccion de la variable a es: %p\n\n", &a);
    int *p;
    p = &a;

    /*for(i=-3; i<=3; i++){
        printf("El valor de p+%d es: %p, que contiene: %d\n", i, p+i, *(p+i));
    }*/

    for(i=0; i<=5; i++){
        printf("(%d) El valor de p es: %p, que contiene: %d\n", i, p++, *(p));
    }
    return 0;
}
