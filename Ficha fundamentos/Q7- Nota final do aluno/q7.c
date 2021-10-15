#include<stdio.h>

int main() {

    int a, b, c, d, e, f, g;
    float h, i, j;

    printf("Digite o valor do teste 1 ");
    scanf("%d", &a);

    printf("Digite o valor do teste 2 ");
    scanf("%d", &b);

    printf("Digite o valor do trabalho 1 ");
    scanf("%d", &c);

    printf("Digite o valor do trabalho 2 ");
    scanf("%d", &d);

    printf("Digite o valor do trabalho 3 ");
    scanf("%d", &e);

    printf("Digite o valor do trabalho 4 ");
    scanf("%d", &f);

    h = (a + b)/2;

    i = (c + d + e + f)/4;

    j = h*0.7 + i*0.3;

    printf("A nota final do aluno e; %f", j);

    return 0;
}