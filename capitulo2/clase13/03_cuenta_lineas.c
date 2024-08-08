#include <stdio.h>

main(){

int c,nl; //Número de caracteres

nl=0;
c=getchar();

while(c!=EOF){
    if(c=='\n') ++nl; //incrementamos el número de líneas
    //++nl; //incrementamos el número de líneas
    c=getchar();
}
printf("%d\n",nl); //Imprime por pantalla el número de líneas

}