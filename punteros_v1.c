// Programa de ejemplo de punteros en C
#include <stdio.h>

// Uso de punteros con enteros
int main(int argc, char const *argv[])
{
    int num=15, a;
    int *x;

    x = &num; //a x se asigna la direccion de num
    a = *x; // a se le asigna el valor de x
    printf("%p %d\n",x,a);
    
    // Uso de punteros con caracteres
    char letra= 'a', c;
    char *ptr;
    ptr = &letra;
    c = *ptr;
    printf("%p %c", ptr, c);

    // Uso de punteros con flotantes
    float decimal= 3.14, dec;
    float *ptrF;
    ptrF = &decimal;
    dec = *ptrF;
    printf("%p %2.2f" , ptrF, dec);

    return 0;
}
//Fin del programa 