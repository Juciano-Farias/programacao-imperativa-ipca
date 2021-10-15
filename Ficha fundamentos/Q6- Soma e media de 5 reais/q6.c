#include<stdio.h>

int main() {

    float a, b, c, d, e, f, g;

    printf("Digite o valor de a ");
    scanf("%f", &a);

    printf("Digite o valor de b ");
    scanf("%f", &b);

    printf("Digite o valor de c ");
    scanf("%f", &c);

    printf("Digite o valor de d ");
    scanf("%f", &d);

    printf("Digite o valor de e ");
    scanf("%f", &e);

    f = a + b + c + d + e;

    g = (a + b + c + d + e)/5;

    printf("A soma dos valores e: %f", f);
    printf("A media dos valores e: %f", g);

    return 0;
}