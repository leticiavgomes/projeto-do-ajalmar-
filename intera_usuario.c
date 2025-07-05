#include <stdio.h>

int main(){
    printf("\n");
    printf("==================================\n");
    printf("  bem vindo as eleçoes IFCE 2025  \n");
    printf("==================================\n");
    printf("\n");
    printf("\n");

    int option;
    printf("oque deseja realizar em seu banco de dados?.\n");
    printf("1 - inserir candidato. 2 - exluir candidato.\n");
    printf("3 - listar candidatos. 4 - a sla man depois eu penso. \n  ");
    
    scanf("%d", &option);

    
    switch (option) 
    {
    case 1:
        printf("deu bom!");
        break;

    case 2:
        printf("deu bom!");  
        break;

    case 3:
        printf("deu bom!");  
        break;
    
    case 4:
        printf("deu bom!");  
        break;
    
    default:
        printf("opção invalida, tente novamente.");
        printf("\n");
        break;
    }

    return 0;
}
