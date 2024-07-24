#include <stdio.h>
/* imprime la tabla de 
F-C para fahr=0,20, ...,300 */

main(){
    int fahr,celsius;
    int lower,upper,step;

    lower=0; //limite inferior de la tabla de temperaturas
    upper=300; //limite superior
    step=20; //tamaño del incremento

    fahr=lower;
    
    printf("Temperatura F(lower): %d\n",lower);
    printf("Temperatura F(upper): %d\n",upper);
}