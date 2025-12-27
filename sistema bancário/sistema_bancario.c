#include <stdio.h>

int main () {
    int opcao;
    float saldo = 1000;
    float deposito;
    float saque;
    do {

        printf("\nMENU PRINCIPAL\n");
        printf("Selecione a Opção desejada:\n");
        printf("1. Ver Saldo\n");
        printf("2. Fazer depósito\n");
        printf("3. Realizar Saque\n");
        printf("4. Sair\n");
        printf("Digite o número da opção desejada: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Erro: Digite apenas numeros!\n");
            while(getchar() != '\n');
            continue; 
        }

        switch (opcao) {
            case 1:
                printf("Seu saldo é de: R$%.2f\n", saldo);
                break;
            case 2:
                printf("Quanto gostaria de depositar: R$");
                if (scanf("%f", &deposito) != 1) {

                    printf("Entrada inválida: digite apenas números reais.");
                    while(getchar () != '\n');
    
                } else if(deposito <= 0) {

                    printf("Você não pode depositar valores iguais ou inferiores a 0.");
                } else {
                    saldo += deposito;
                    printf("Seu saldo é de: R$%.2f\n", saldo);
                }
                break;
            case 3:
                printf("Digite quanto gostaria de sacar: R$");

                if (scanf("%f", &saque) != 1) {
                    printf("Entrada inválida: Digite apenas números reais.\n");
                    while(getchar () != '\n');
                } else if (saldo < saque) {
                    printf("Erro: saldo insuficiente.\n");
                } else if (saque < 0) {
                    printf("Erro: faça saques superiores a R$1\n");
                } else {
                    saldo -= saque;
                    printf("Saque de R$%.2f realizado com sucesso. Seu saldo atual é de: R$%.2f\n", saque, saldo);
                }
                break;
            case 4:
                printf("Saindo...");
                break;
            default: 
                printf("Opcao invalida.\n");
            break;
        }
        
    } while (opcao != 4);
    

return 0;
    
}