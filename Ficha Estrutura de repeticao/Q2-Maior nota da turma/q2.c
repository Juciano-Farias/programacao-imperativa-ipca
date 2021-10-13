#include<stdio.h>

int main() {
    int numeroDeAlunos = 10, notaAtual = 0, maiorNota = 0;

    while(numeroDeAlunos > 0) {
        printf("digite a nota atual");
        scanf("%d", &notaAtual);

        if(notaAtual > maiorNota) 
        {
            maiorNota = notaAtual;
        }

        numeroDeAlunos--;
    }

    printf("%d", maiorNota);
    return 0;
}