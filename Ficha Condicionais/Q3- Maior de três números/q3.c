#include<stdio.h>

int main() {
    int a, b, c;
    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite um numero: ");
    scanf("%d", &b);

    printf("Digite um numero: ");
    scanf("%d", &c);

    if(a > b && a > c) {
        printf("%d e' maior que %d e %d", a, b, c);
    } else if(b > a && b > c) {
        printf("%d e' maior que %d e %d", b, a, c);
    } else if (c > a && c > b){
        printf("%d e' maior que %d e %d", c, a, b);
    } else if(a == b && a == c) {
        printf("os numeros %d %d e %d sao iguais", a, b, c);
    }

    return 0;
}