#include<stdio.h>

int main() {
    int numeroDeAlunos = 20, notaAtual = 0, maiorNota = 1000000;

    while(numeroDeAlunos > 0) {
        printf("digite a nota atual");
        scanf("%d", &notaAtual);

        if(notaAtual < maiorNota) 
        {
            maiorNota = notaAtual;
        }

        numeroDeAlunos--;
    }

    printf("%d", maiorNota);
    return 0;
}