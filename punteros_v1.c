#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num=15, a;
    int *x;

    x = &num; //a x se asigna la direccion de num
    a = *x; // a se le asigna el valor de x
    printf("%p %d\n",x,a);

    char letra= 'a', c;
    char *ptr;
    ptr = &letra;
    c = *ptr;
    printf("%p %c", ptr, c);

    float decimal= 3.14, dec;
    float *ptrF;
    ptrF = &decimal;
    dec = *ptrF;
    printf("%p %2.2f" , ptrF, dec);

    return 0;
}