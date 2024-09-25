#include <stdio.h>

#define MAXLINE 11/* tamaño máximo de la línea de entrada*/

int getline(char line[], int maxline); /*Función que captura una línea del usuario y la almacena en el array*/
int atoi(char s[]); /*atoi: convierte s en entero */

int main(){

    /*Definiciones*/
    int len,num;
    char line[MAXLINE];

    /*Pedimos linea*/
    printf("Escribe un nuemero por consola de maximo 10 cifras\n");
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

