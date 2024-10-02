#include <stdio.h>
#include "utils_consola.h"

#define MAXLINE 11/* tamaño máximo de la línea de entrada*/

int atoi(char s[]); /*atoi: convierte s en entero */

int main(){

    /*Definiciones*/
    int len,num;
    char line[MAXLINE];

    /*Pedimos linea*/
    printf("Escribe un numero por consola de maximo 10 cifras\n");
    len=getline(line,MAXLINE);

    /*Convertimos el array */
    num=atoi(line);
    printf("El numero convertido es: %d\n",num);


}

/*atoi: convierte s en entero */
int atoi(char s[])
{
    int i,n;

    n=0;
    for(i=0;s[i]>='0'&&s[i]<='9';++i)
        n=10*n+(s[i]-'0');
    return n;
}


