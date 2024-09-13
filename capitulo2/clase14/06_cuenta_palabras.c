#include <stdio.h>

#define IN 1
#define OUT 0

main(){

    int c,nc,nl,nw,state; //Caracter, Número de lineas y estado

    nl=nc=nw=0;
    //nw=0;
    state=OUT;

    while((c=getchar())!=EOF){
        ++nc;
        if(c=='\n') ++nl; //incrementamos el número de líneas
        if(c==' '||c=='\n'||c=='\t') 
            state=OUT; //Salimos de una palabra
        else if(state==OUT){
            state=IN;
            ++nw;
        }
    }

    printf("%d %d %d\n",nl, nw, nc); //Imprime por pantalla

}