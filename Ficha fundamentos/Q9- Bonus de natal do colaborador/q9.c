#include<stdio.h>

int main() {

    int a, b, c;
    
    printf("Digite o numero de filhos ");
    scanf("%d", &a);

    printf("Digite os anos de trabalho ");
    scanf("%d", &b);

    c = a*20 + b*10;

    printf("O bonus do colaborador e': %d", c);

    return 0;
}