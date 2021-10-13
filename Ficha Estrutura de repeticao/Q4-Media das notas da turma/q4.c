#include<stdio.h>

int main() {
    int numeroDeAlunos = 20;
    float nota1, nota2, nota3, mediaDoAluno, somaDasMedias = 0, mediaFinal;

    while(numeroDeAlunos > 0) {
        printf("Digite a nota 1");
        scanf("%f", &nota1);

        printf("Digite a nota 2");
        scanf("%f", &nota2);

        printf("Digite a nota 3");
        scanf("%f", &nota3);

        mediaDoAluno = (nota1 + nota2 + nota3)/3;

        printf("A media do aluno foi %f", mediaDoAluno);

        somaDasMedias += mediaDoAluno;
        numeroDeAlunos--;
    }

    mediaFinal = somaDasMedias/20;

    printf("A media dos alunos foi %f", mediaFinal);
    return 0;
}