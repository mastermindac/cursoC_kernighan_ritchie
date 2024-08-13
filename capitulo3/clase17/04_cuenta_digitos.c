#include <stdio.h>

/*cuenta dígitos , espacios en blanco y otros*/

main(){

    int c,nwhite,nother; //Caracter, Número de blancos, otros
    int ndigit; //Numero digitos

    nwhite=nother=ndigit=0;

    while((c=getchar())!= EOF){
        if(c==' '||c=='\n'||c=='\t' )
            ++nwhite;
        else if(c>='0' && c<='9') //else if(c =='0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' )
            ++ndigit;
        else
            ++nother;
    }

    printf("espacios blancos = %d, otros = %d\n",nwhite,nother);
    printf("digitos = %d",ndigit);

}