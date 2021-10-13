#include<stdio.h>

int main() {
    float numeroDeAlunos = 20, nota1, nota2, nota3, somaDasNotas = 0, mediaDoAluno, maiorMedia = 0, menorMedia = 100;
    float somaDasMedias = 0, mediaFinal, indexMenorNotaAluno, indexMaiorNotaAluno;

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

        mediaDoAluno = (nota1 + nota2 + nota3)/3;

        //Analisa qual a maior media e armazena o valor
        if(mediaDoAluno > maiorMedia) {
            maiorMedia = mediaDoAluno;
            indexMaiorNotaAluno = numeroDeAlunos;
        }

        //Analisa qual a menor media e armazena o valor
        if(mediaDoAluno < menorMedia) {
            menorMedia = mediaDoAluno;
            indexMenorNotaAluno = numeroDeAlunos;
        }

        //Equivalente a somaDasMedias = + somaDasMedias + mediaDoAluno
        somaDasMedias += mediaDoAluno;

        numeroDeAlunos--;
    }

    printf("A maior media foi: %f", maiorMedia);
    printf("Do aluno: %f", indexMaiorNotaAluno);

    printf("A menor media foi: %f", menorMedia);
    printf("Do aluno: %f", indexMenorNotaAluno);

    return 0;
}