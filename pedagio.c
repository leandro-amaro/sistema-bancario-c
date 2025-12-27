#include <stdio.h>
#include <stdbool.h>

void ExibirMenu () {


    printf("----CALCULADORA SIMPLES----\n");
    printf("\n");
    printf("Operadores Disponíveis:\n");
    printf("+\n");
    printf("-\n");
    printf("x\n");
    printf("/\n");
    printf("Para Sair: Digite N Quando Perguntado.\n");
    printf("\n");

}

void Escolha() {
    double a;
    double b;
    char operador;
    double resultado;
    bool QuerSair = false;
    char s;

    do{

        
        printf("Deseja Continuar? (S para Sim e N para Não): ");
            scanf(" %c", &s);

        if(s == 'n' || s == 'N') {
            printf("Ok, Obrigado por utilizar nossos serviços!\n");
            QuerSair = true;
            continue;
        } else if (s == 's' || s == 'S') {
            printf("Ok, O Programa Continua.\n");
        
        }
        printf("Digite o Número 1: ");
        if(scanf("%lf", &a) != 1) {
            printf("Erro: Entrada inválida! Digite números inteiros ou decimais.\n");
            while(getchar() != '\n');
            continue;
        } 
        printf("Digite o Número 2: ");
            if(scanf("%lf", &b) != 1) {
                printf("Erro: Entrada inválida | Digite Apenas números decimais ou inteiros\n");
                while(getchar() != '\n');
                continue;
            }
            printf("Digite o Operador: ");
            if(scanf(" %c", &operador) != 1) {
                printf("Por Favor, Digite um Operador Válido.\n");
                while (getchar () != '\n');
                continue;
            } else if (operador != '+' && operador != '-' && operador != 'x' && operador != '/') {
                printf("Por Favor, Digite um Operador Válido.\n");
                while (getchar () != '\n');
                continue;
            } 
                
                switch (operador) {
                    case '+':
                        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
                        break;
                    case '-':
                        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
                        break;
                    case 'x':
                        printf("%.2f x %.2f = %.2f\n", a, b, a * b);
                        break;
                    case '/':
                        if(b == 0) {
                            printf("Erro: Divisão por zero!\n");
                            while(getchar () != '\n');
                            continue;
                        } else {
                            printf("%.2f/%.2f = %.2f\n", a, b, a/b);
                        }
                        break;

                    default:
                        printf("Erro: Digite um operador válido.\n");
                        break;
                }
                
            }     
        
}               
    


int main () {
    

    ExibirMenu();
    Escolha();
}