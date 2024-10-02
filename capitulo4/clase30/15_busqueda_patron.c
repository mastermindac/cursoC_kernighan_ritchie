/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    busqueda de patron por comando

    uso de arreglo de punteros recogidos desde linea de comandos
    herramientas: punteros, arreglos, funciones, main
*/

#include <stdio.h>
#include <string.h>
#include "utils_consola.h"

#define MAXLINE 1000

/*find: imprime las lineas que coincidan con el patron del 1er argumento*/
int main(){
    char line[MAXLINE];
    int found=0, len;
    char patron[]="Paco";

    /*Pedimos linea*/
    printf("Escribe una linea\n");
    len=getline(line,MAXLINE);

    if(strstr(line,patron)!=NULL) found++;
    /*Hemos encotrado el patrón?*/
    printf("Hemos encontrado el patron %d veces\n",found);
    return found;

}