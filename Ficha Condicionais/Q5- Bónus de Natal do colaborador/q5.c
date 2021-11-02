#include<stdio.h>

int main() {
    int idade, antiguidade, numeroFilhos, bonusIdade, bonusAntiguidade, bonusNumeroFilhos, bonus = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua antiguidade: ");
    scanf("%d", &antiguidade);

    printf("Digite sua numeroFilhos: ");
    scanf("%d", &numeroFilhos);

    if(idade > 45) {
        bonusIdade = (idade - 45);
        bonus += bonusIdade*5; 
    } 

    if(antiguidade <= 10 ) {
        bonusAntiguidade = antiguidade*10;
        bonus += bonusAntiguidade;
    } else if(antiguidade > 10) {
        bonusAntiguidade = 100 + (antiguidade - 10)*20;
        bonus += bonusAntiguidade;
    }

    if(numeroFilhos <= 3) {
        bonusNumeroFilhos = 25;
        bonus += bonusNumeroFilhos;
    } else if(numeroFilhos > 3) {
        bonusNumeroFilhos = 75;
        bonus += bonusNumeroFilhos;
    }

    printf("Seu bonus total foi: %d", bonus);

    return 0;
}