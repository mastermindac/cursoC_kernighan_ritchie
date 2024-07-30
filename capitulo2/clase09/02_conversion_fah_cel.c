#include <stdio.h>
/* imprime la tabla de 
F-C para fahr=0,20, ...,300 */

main(){
    float fahr,celsius;
    int lower,upper,step;

    lower=0; //limite inferior de la tabla de temperaturas
    upper=300; //limite superior
    step=20; //tamaño del incremento

    fahr=lower;
    
    while(fahr<=upper){ //Condicion inicial
        //Codigo iteracion
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.2f\n",fahr,celsius);
        fahr=fahr+step;
    }
}