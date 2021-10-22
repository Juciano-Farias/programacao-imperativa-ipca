#include<stdio.h>

int main() {

    float a, b, c, d, e, f, g, h, i, j;

    printf("Digite o valor do teste 1 ");
    scanf("%f", &a);

    printf("Digite o valor do teste 2 ");
    scanf("%f", &b);

    printf("Digite o valor do trabalho 1 ");
    scanf("%f", &c);

    printf("Digite o valor do trabalho 2 ");
    scanf("%f", &d);

    printf("Digite o valor do trabalho 3 ");
    scanf("%f", &e);

    printf("Digite o valor do trabalho 4 ");
    scanf("%f", &f);

    h = (a + b)/(float)2;

    i = (c + d + e + f)/(float)4;

    j = h*0.7 + i*0.3;

    printf("A nota final do aluno e; %f", j);

    return 0;
}