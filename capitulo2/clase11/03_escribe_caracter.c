#include <stdio.h>

main(){

int c; //Almacenamos la letra convertida a un número

c=getchar(); //Esperamos a que el usuario introduzca la letra
//putchar(c); //Imprimimos por consola

while(c != EOF){
    putchar(c); //Imprimimos por consola
    c=getchar();
}

}