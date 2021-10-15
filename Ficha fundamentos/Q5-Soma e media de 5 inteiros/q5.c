#include<stdio.h>

int main() {

    int a, b, c, d, e, f;
    float g;

    printf("Digite o valor de a ");
    scanf("%d", &a);

    printf("Digite o valor de b ");
    scanf("%d", &b);

    printf("Digite o valor de c ");
    scanf("%d", &c);

    printf("Digite o valor de d ");
    scanf("%d", &d);

    printf("Digite o valor de e ");
    scanf("%d", &e);

    f = a + b + c + d + e;

    g = (a + b + c + d + e)/5;

    printf("A soma dos valores e: %d", f);
    printf("A media dos valores e: %f", g);

    return 0;
}