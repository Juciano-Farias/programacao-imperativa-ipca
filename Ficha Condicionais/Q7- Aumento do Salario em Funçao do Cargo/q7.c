#include<stdio.h>

int main() {
    int salarioAntigo, codigoCargo;
    float salarioNovo;

    printf("Digite o seu salario: ");
    scanf("%d", &salarioAntigo);

    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigoCargo);

    switch (codigoCargo)
    {
    case 1:
        salarioNovo = salarioAntigo*1.1;
        break;
    
    case 2:
        salarioNovo = salarioAntigo*1.2;
        break;
    
    case 3:
        salarioNovo = salarioAntigo*1.3;
        break;
    
    default:
        salarioNovo = salarioAntigo*1.4;
        break;
    }

    printf("O salario antigo e': %d e o salario novo e': %.2f", salarioAntigo, salarioNovo);

    return 0;
}