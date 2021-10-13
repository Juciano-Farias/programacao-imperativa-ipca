#include<stdio.h>

int main() {
    int numeroDeAlunos = 10;
    float notaAtual = 0, somaDasNotas = 0, notaFinal;

    while(numeroDeAlunos > 0){
        printf("Digite a nota do aluno: ");
        scanf("%f", &notaAtual);

        //Equivalente a somaDasNotas = somaDasNotas + notaAtual
        somaDasNotas += notaAtual;

        numeroDeAlunos--;
    }

    notaFinal = somaDasNotas/10;

    printf("a nota final do aluno foi: %f\n" , notaFinal);

    return 0;
}