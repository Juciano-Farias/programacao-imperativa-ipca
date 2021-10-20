#include<stdio.h>

int main() {
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);

    if(a%3 == 0) {
        printf("O numero e' divisivel por 3!");
    } else {
        printf("o numero nao e' divisivel por 3...");
    }

    return 0;
}