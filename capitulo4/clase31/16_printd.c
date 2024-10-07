/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Recursividad

*/

#include <stdio.h>

//Funcion que imprime por consola un numero entero
void printd(int n);

int main(){

    int n=-2489;

    /*Imprimimos el número usando la funcion de recursividad*/
    printd(n);
    return 0;

}

void printd(int n)

{
    //Comprobamos signo
    if(n<0){
        putchar('-');
        n=-n;
    }
    //Comprobamos si la parte entera es mayor de 0
    if(n/10){
        printd(n/10);
    }
    //Imprimimos el resto
    putchar(n%10+'0');
}