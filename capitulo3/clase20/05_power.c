#include <stdio.h>
//Include
int power(int base, int n);
int powerV2(int base, int n);

/*Uso de funciones */
main(){
    int resultado;
    int n;
    resultado=0;

    resultado=power(2,4);
    printf("El valor de resultado es: %d\n",resultado);

    n=4;
    printf("Valor de n antes %d\n",n);
    resultado=powerV2(2,n);
    printf("Valor de n despues %d\n",n);
    printf("El valor de resultado usando powerV2 es: %d\n",resultado);

    resultado=power(3,2);
    printf("El valor de resultado es: %d\n",resultado);

    resultado=powerV2(3,2);
    printf("El valor de resultado usando powerV2 es: %d\n",resultado);

}

/*Definicion*/
int power(int base, int n){
    int i,p;
    p=1;

    /*printf("El valor de la base es: %d\n",base);*/
    /*printf("El valor de n es: %d\n",n);*/

    for (i=1;i<=n;i++)
        p=p*base;

    return p;
}

/*power: eleva a la base a la n-esima potencia; n≥0 version 2*/
int powerV2(int base, int n){

    int p;

    for(p=1;n>0;--n) p=p*base;
    
    return p;
}









