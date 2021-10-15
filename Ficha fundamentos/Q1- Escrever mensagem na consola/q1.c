#include<stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    printf(" *Este e o meu primeiro programa!!\n *E esta a Segunda frase\n *Terceira frase!");

    return 0;
}