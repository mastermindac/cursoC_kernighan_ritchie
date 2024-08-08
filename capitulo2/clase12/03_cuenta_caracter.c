#include <stdio.h>

main(){

long nc; //Número de caracteres

nc=0;

printf("%ld\n",nc);

while(getchar()!=EOF)
    ++nc; //nc=nc+1
printf("%ld\n",nc); //Imprime por pantalla el número de caracteres

}