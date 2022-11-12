#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void header(){
    printf("*--------------------------------*");
}

int main() {

    int accessMenu;
    float x, k;
    float result;

    do {
        header();
        printf("\n\tCALCULADORA DE DERIVADA\n");
        printf("Escolha a funcao a qual deseja obter a derivada em um valor x:\n\n");
        printf("MENU:\n");
        printf("\t1. f(x) = x^k \n");
        printf("\t2. f(x) = log_k(x) \n");
        printf("\t3. f(x) = k^x \n");
        printf("\t4. f(x) = tg(x)\n");
        printf("\t5. SAIR \n");
        scanf("%d", &accessMenu);

        switch (accessMenu) {
            case 1:
                system("cls || clear");
                printf("f(x) = x^k\n");
                printf("Digite o valor de X: \n");
                scanf("%f", &x);

                if (x == 0) {
                    printf("Operacao invalida quando x = 0 \n");
                }
                else {
                    printf("Digite o valor de k para a construcao da funcao desejada: \n");
                    scanf("%f", &k);
                    result = k * pow(x, (k - 1));
                    printf("O valor da derivada para a funcao selecionada: %.4f", result);
                    printf("\n\n");
                    sleep(1);

                }
                break;

            case 2:
                system("cls || clear");
                printf("f(x) = log_k(x)\n");
                printf("Digite o valor de X: \n");
                scanf("%f", &x);

                if(x==0){
                    printf("Operacao invalida quando x = 0 \n");
                }
                else{
                    printf("Digite o valor de k para a construcao da funcao desejada: \n");
                    scanf("%f", &k);
                    result = 1 / (x * log(k));
                    printf("O valor da derivada para a funcao selecionada: %.4f", result);
                    printf("\n\n");
                    sleep(1);
                }
                break;

            case 3:
                system("cls || clear");
                printf("f(x) = k^x\n");
                printf("Digite o valor de X: \n");
                scanf("%f", &x);
                if(x==0){
                    printf("Operacao invalida quando x = 0 \n");

                }
                else{
                    printf("Digite o valor de k para a construcao da funcao desejada: \n");
                    scanf("%f", &k);
                    result = pow(k,x) * log(k);
                    printf("O valor da derivada para a funcao selecionada: %.4f", result);
                    printf("\n\n");
                    sleep(1);
                }
                break;

            case 4:
                system("cls || clear");
                printf("f(x) = tg(x)\n");
                printf("Digite o valor de X: \n");
                scanf("%f", &x);
                if (cos (x) >= (-1e-15) && cos (x) <= (1e-15)){
                    printf("Operacao invalida com cosseno de 90 ou PI/2 \n");
                }
                else{
                    printf("Digite o valor de k para a construcao da funcao desejada: \n");
                    scanf("%f", &k);
                    float calculateSecant = 1 / cos(x);
                    result = pow(calculateSecant, 2);
                    printf("O valor da derivada para a funcao selecionada: %.4f", result);
                    printf("\n\n");
                    sleep(1);
                }
                break;

            case 5:
                system("cls || clear");
                printf("Saindo da calculadora de derivadas...");
                sleep(2);
                return 0;
                break;

            default:
                printf("Opcao invalida");
        }
    }while (accessMenu < 1 || accessMenu < 5);
}