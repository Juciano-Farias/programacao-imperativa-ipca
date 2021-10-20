#include<stdio.h>

int main() {
    int a, b;
    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite um numero: ");
    scanf("%d", &b);

    if(a > b) {
        printf("%d e' maior que %d", a, b);
    } else if(b > a) {
        printf("%d e' maior que %d", b, a);
    } else{
        printf("Os numeros %d e %d sao iguais", a, b);
    }

    return 0;
}