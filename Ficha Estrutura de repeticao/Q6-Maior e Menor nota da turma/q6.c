#include<stdio.h>

int main() {
    float numeroDeAlunos = 3, nota1, nota2, nota3, somaDasNotas = 0, maiorNota = 0, menorNota = 100;
    float somaDasMedias = 0, indexMenorNotaAluno, indexMaiorNotaAluno;

    //Pode ser feito com "for"
    while(numeroDeAlunos > 0) {

        //Solicita uma nota
        printf("digite a nota1 ");
        scanf("%f", &nota1);

         //Solicita uma nota
        printf("digite a nota2 ");
        scanf("%f", &nota2);

         //Solicita uma nota
        printf("digite a nota3 ");
        scanf("%f", &nota3);

        if(nota1 > maiorNota)

        numeroDeAlunos--;
    }

    return 0;
}