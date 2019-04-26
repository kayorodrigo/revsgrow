/*PROGRAMA DIRECIONADO A ESCOLHA DE NOMES PARA FILHOS(AS)*/
#include <stdio.h>
int main () {
    int n, i, n1, n2;
    char s;

/*QUANTIDADE DE FILHOS*/
    printf("\nQuantos filhos voce deseja ter? \nEntre com os valores 0, 1 ou 2 \nQuantidade: ");
    scanf("%d", &n);
    printf("\n-------------------------------------------------------------------------------\n");
/*LAÇO PARA ESCOLHER O SEXO E NOME DOS FILHOS*/
    if(n == 0) {
        printf("\nParabens.\nA quantidade de filhos que voce optou foi igual a 0. \nVoce nao sentira dores de parto. Continue assim!\n");
        printf("\n-------------------------------------------------------------------------------\n");
    }
    if (n == 1 || n == 2) {
        for(i=0;i<=n;i++) {
            printf("\nEscolha o sexo do filho '%d' \nM para Masculino \nF para Feminino \nQual a sua escolha?: \n",&n);
            scanf("%c", &s);
            printf("\n-------------------------------------------------------------------------------\n");
                if (s == 'M' || s == 'm') {
                    printf("\nNomes para escolha: \n1 - Vandergleisson \n2 - Crismarcleiton \nEscolha entre o numero 1 e 2: ");
                    scanf("%d", &n1);
                    printf("\n-------------------------------------------------------------------------------\n");
                }
                else if (s == 'F' || s == 'f') {
                    printf("\nNomes para escolha \n1 - Carlieuda \n2 - Robervênia \nEscolha entre o numero 1 e 2: ");
                    scanf("%d", &n2);
                    printf("\n-------------------------------------------------------------------------------\n");
                }
                else {
                    printf("\nSexo indefinido. Nao aceitamos outros, somos crentes. Amem!\n");
                    printf("\n-------------------------------------------------------------------------------\n");
                }
            }
        }
        else {
            printf("\nValores nao cadastrados no sistema. \nVolte a rodar o programa e tente novamente. \nObrigado!\n\n");
        }
return 0;
}

