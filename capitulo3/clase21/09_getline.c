#include <stdio.h>

#define MAXLINE 1000 /* tamaño máximo de la línea de entrada*/

int getline(char line[], int maxline); /*Función que captura una línea del usuario y la almacena en el array*/

main(){

    /*Definiciones*/
    int len;
    char line[MAXLINE];

    len=getline(line, MAXLINE);
    printf("--%s-- numCarac=%d",line,len);

}

/*getline: lee una linea, la almacena en line y devuelve su longitud*/
int getline(char line[], int lim){
    int c,i;

    /*Bloque que almacena los caracteres del usuario */
    for(i=0;i<lim-1&&(c=getchar())!=EOF && c!='\n';++i)
        line[i]=c;

    if(c=='\n'){
        line[i]=c;
        ++i;
    }

    line[i]='\0';
    return i;

}