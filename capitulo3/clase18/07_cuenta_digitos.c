#include <stdio.h>

/*cuenta dígitos , espacios en blanco y otros*/

main(){

    int c,nwhite,nother; //Caracter, Número de blancos, otros
    int ndigit[10];
    int i;
    //int ndigit0,ndigit1, ndigit2, ndigit3, ndigit4, ndigit5, ndigit6, ndigit7,ndigit8, ndigit9; //Numero digitos

    //ndigit0=ndigit1=ndigit2=ndigit3=ndigit4=ndigit5=ndigit6=ndigit7=ndigit8=ndigit9=0;
    nwhite=nother=0;

    for(i=0;i<10;++i) 
        ndigit[i]=0; //Inicializacion

    while((c=getchar())!= EOF){
        if(c==' '||c=='\n'||c=='\t' )
            ++nwhite;
        else if(c>='0' && c<='9') //else if(c =='0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' )
            //if(c=='0') ++ndigit[0];
            //else if(c=='1') ++ndigit[1];
            ++ndigit[c-'0'];
        else
            ++nother;
    }

    printf("espacios blancos = %d, otros = %d\n",nwhite,nother);
    for(i=0;i<10;++i) 
        printf("caracter %i = %d\n",i,ndigit[i]);
    //printf("caracter 0 = %d\n",ndigit0);
    //printf("caracter 1 = %d\n",ndigit1);
}