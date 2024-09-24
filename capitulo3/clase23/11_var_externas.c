#include <stdio.h>

#define MAXLINE 1000 /* tamaño máximo de la línea de entrada*/

/*Variables externas*/
int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(int maxline); /*Función que captura una línea del usuario y la almacena en el array*/
void copy(void);

int main(){

    /*Definiciones*/
    int len;
    extern int max;
    extern char longest[];

    max=0;
    while((len=getline(MAXLINE))>0)
        if(len>max){
            max=len;
            copy();
        }
    
    if(max>0)
        printf("%s",longest);

}

/*getline: lee una linea, la almacena en line y devuelve su longitud*/
int getline(int lim){
    int c,i;
    extern char line[];
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
void copy(void){
    int i;
    extern char line[];
    extern char longest[];

    i=0;
    while((longest[i]=line[i])!='\0') 
        ++i;
}
