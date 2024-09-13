#include <stdio.h>

#define MAXLINE 1000 /* tamaño máximo de la línea de entrada*/

int getline(char line[], int maxline); /*Función que captura una línea del usuario y la almacena en el array*/
void copy(char to[],char from[]);

main(){

    /*Definiciones*/
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max=0;
    while((len=getline(line, MAXLINE))>0)
        if(len>max){
            max=len;
            copy(longest,line);
        }
    
    if(max>0)
        printf("%s",longest);

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


/*copy: copia from en to, supone que array 'to' es suficientemente grande */
void copy(char to[],char from[]){
    int i;

    i=0;
    while((to[i]=from[i])!='\0') 
        ++i;
}
