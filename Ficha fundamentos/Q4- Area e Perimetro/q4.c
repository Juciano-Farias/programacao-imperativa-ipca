#include<stdio.h>

int main() {

    int a, b, c, d;

    printf("Digite o valor de a ");
    scanf("%d", &a);

    printf("Digite o valor de b ");
    scanf("%d", &b);

    c = 2*a + 2*b;
    d = a*b;

    printf("o perimetro e: %d\n", c);
    printf("a area e: %d", d);

    return 0;
}