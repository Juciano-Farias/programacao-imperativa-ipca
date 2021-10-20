#include<stdio.h>

int main() {
    int numeroAluno, nota1, nota2, nota3, notaEx, media;
    char final;

    printf("Escreva o numero do aluno; ");
    scanf("%d", &numeroAluno);

    printf("Escreva a nota1: ");
    scanf("%d", &nota1);

    printf("Escreva a nota2: ");
    scanf("%d", &nota2);

    printf("Escreva a nota3: ");
    scanf("%d", &nota3);

    printf("Escreva a notaEx: ");
    scanf("%d", &notaEx);

    media = (nota1 + nota2*2 + nota3*3 + notaEx)/7;
    
    if(media >= 17) {
        final = 'A';
    }
    
    if(media >= 14 && media < 17) {
        final = 'B';
    }
    
    if(media >= 10 && media < 14) {
        final = 'C';
    }
    
    if(media >= 8 && media < 10) {
        final = 'D';
    }
    
    if(media < 8) {
        final = 'E';
    }

    printf("O aluno de numero: %d teve media de exercicios de %d e media de aproveitamento: %c", numeroAluno, notaEx, final);

    return 0;
}