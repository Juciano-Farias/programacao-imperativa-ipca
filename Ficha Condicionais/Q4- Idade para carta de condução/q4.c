#include<stdio.h>

int main() {
    int a, quantoFalta;
    printf("Digite sua idade: ");
    scanf("%d", &a);

    if(a >= 18) {
        printf("maior de idade!!", a);
    } else {
        quantoFalta = (18 - a);
        printf("Mais %d anos", quantoFalta);
    }

    return 0;
}