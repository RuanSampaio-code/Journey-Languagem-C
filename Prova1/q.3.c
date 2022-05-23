#include <stdio.h>

int main()
{
int valores[9]; 
int elemento;
for ( elemento = 0; elemento < 9;elemento++){
    if (elemento =0)
    { valores[elemento] = 'o'; }
    else

    if (elemento==2)
    { valores[elemento] = '2'; }
    else
        
    if (elemento==4)
    { valores[elemento] = 'o'; }
    else

    if (elemento==8)
    { valores[elemento] = 'x'; }
    else{ valores[elemento] = ' ' ; }
       
}
    

printf("\n[%c][%c][%c]",valores[0], valores[1], valores[2]);
printf("\n[%c][%c][%c]",valores[3], valores[4], valores[5]);
printf("\n[%c][%c][%c]",valores[6], valores[7], valores[8]);
    
    



    return 0;
}


/*
    printf("\n[o] [ ] [X]");
    printf("\n[ ] [o] [ ]");
    printf("\n[ ] [ ] [X]");
*/ 



/* 
int valoresmat[3][3]; 
int ilinha;
int jcoluna;

for ( ilinha = 0; ilinha < 3; ilinha++)
    for  (jcoluna = 0; jcoluna < 3; jcoluna++)
    {


        
        if (ilinha ==0 && jcoluna==0)
        { valoresmat[ilinha][jcoluna] = 'o'; }
        else

        if (ilinha==0 && jcoluna==2)
        { valoresmat[ilinha][jcoluna] = 'x' ;}
        else 
        
        if (ilinha ==1 && jcoluna==1)
        { valoresmat[ilinha][jcoluna] ='o' ;}
        else 

        if (ilinha==2 && jcoluna ==2)
        {valoresmat[ilinha][jcoluna] = 'x' ;}
       
        else{
            valoresmat[ilinha][jcoluna] = ' ';}
    }

    printf("\n|%c||%c||%c|", valoresmat[0][0], valoresmat[0][1], valoresmat[0][2]);
    printf("\n|%c||%c||%c|", valoresmat[1][0], valoresmat[1][1], valoresmat[2][2]);
    printf("\n|%c||%c||%c|", valoresmat[2][0], valoresmat[2][1], valoresmat[3][3]);
   */