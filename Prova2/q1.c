#include <stdio.h>

char string[25];

void imprimestring () {
    printf("voce digitou: %s", string);
}

int main()
{
    printf("Digite uma String: ");
    fgets(&string, 20, stdin);
    
    imprimestring (string);
    return 0;
}
