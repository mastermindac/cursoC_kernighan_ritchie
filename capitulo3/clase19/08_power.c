#include <stdio.h>
//Include
int power(int base, int n);

/*Uso de funciones */
main(){
    int resultado;
    resultado=0;

    resultado=power(2,4);
    printf("El valor de resultado es: %d\n",resultado);

    resultado=power(3,2);
    printf("El valor de resultado es: %d\n",resultado);

}

/*Definicion*/
int power(int base, int n){
    int i,p;
    p=1;

    printf("El valor de la base es: %d\n",base);
    printf("El valor de n es: %d\n",n);

    for (i=1;i<=n;i++)
        p=p*base;

    return p;
}










