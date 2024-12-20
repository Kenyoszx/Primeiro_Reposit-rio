#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=0,b=0,c=0;
    printf("\nEscreva o primeiro Numero (a): ");
    scanf("%d",&a);
    printf("\nEscreva o segundo Numero (b): ");
    scanf("%d",&b);
    c = a + b;
    printf("\nO Resultado da soma entre a e b vale: %d",c);
    return 0;
}
