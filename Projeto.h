#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

// retorno não precisa ser inteiro
void boasVindas(){
    // antes tava tudo em vários prints...
    char letreiro[] = {'=', '=', '=', '=', '=', 
                        'B', 'e', 'm', '-', 'V', 'i', 'n', 'd', 'o', ' ', 
                        'a', 'o', ' ', 
                        's', 'i', 's', 't', 'e', 'm', 'a', ' ', 
                        'd', 'a', ' ', 
                        'B', 'u', 'r', 'g', 'e', 'r', '.', 'd', 'e', 'v', '!', 
                        '=' ,'=', '=', '=', '='};

    for(int i = 0; i < sizeof(letreiro); i++){
        printf("%c", letreiro[i]);
    }
}
int carregamento(){
    printf("\nImprimindo sua notinha...\n");
                Sleep(1000);
                for(int i = 0; i <= 5; i++){
                    printf("o----");
                    Sleep(50);
                    system("cls");

                    printf("-o---");
                    Sleep(50);
                    system("cls");

                    printf("--o--");
                    Sleep(50);
                    system("cls");

                    printf("---o-");
                    Sleep(50);
                    system("cls");

                    printf("----o");
                    Sleep(50);
                    system("cls");
            }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int menu, lanche, qtd;
    float subtotal, subtotalFrete;
    char nome[50], mostrarPedidos[50], data[20], endereco[50];

    boasVindas();

    printf("\n\nDigite seu nome: ");
    scanf("%s", &nome);
    printf("Digite a data de hoje: ");
    scanf("%s", &data);
    system("cls");

    while(menu != 4){

    printf("\nDigite a sua escolha: \n");
    printf("\n 1 - Gerar seu pedido\n 2 - Mostrar os pedidos\n 3 - Pedir comida em casa\n 4 - Sair\n\n");
    printf("Sua escolha: ");
    scanf("%d", &menu);
    system("cls");

    switch(menu){
        case 1:
        printf("Qual lanche você deseja? \n\n");
        printf(" 1 - Hamburger (R$10,99)\n 2 - Batata-frita (R$8,99)\n 3 - Combo hambúrger e batata + bebida de sua escolha (R$19,99)\n");
        printf("\nSua escolha: ");
        scanf("%d", &lanche);
        printf("\n\nQuantos lanches você quer?\n");
        printf("\nSua escolha: ");
        scanf("%d", &qtd);
        system("cls");

        if(lanche == 1){

            carregamento();
            subtotal = qtd*10.99;
            printf("\n\n------------ BURGER.DEV ------------\n\n");
            printf("Nome do cliente: %s", nome);
            printf("\nData do pedido: %s\n\n", data);
            printf("------------------------------------\n\n");
            printf("Item\t\tQntd\t\tSubtotal\n\n");
            printf("Hambúrguer\t%d\t\t%.2f", qtd, subtotal);
            printf("\n\n------------------------------------\n\n");
            printf("Obrigado por pedir na Burger.dev!\n\n");

        }else if(lanche == 2){

            carregamento();
            subtotal = qtd*8.99;
            printf("\n\n------------ BURGER.DEV ------------\n\n");
            printf("Nome do cliente: %s", nome);
            printf("\nData do pedido: %s\n\n", data);
            printf("------------------------------------\n\n");
            printf("Item\t\tQntd\t\tSubtotal\n\n");
            printf("Batata-frita\t%d\t\t%.2f", qtd, subtotal);
            printf("\n\n------------------------------------\n\n");
            printf("Obrigado por pedir na Burger.dev!\n\n");

        }else if(lanche == 3){

            carregamento();
            subtotal = qtd*19.99;
            printf("\n\n------------ BURGER.DEV ------------\n\n");
            printf("Nome do cliente: %s", nome);
            printf("\nData do pedido: %s\n\n", data);
            printf("------------------------------------\n\n");
            printf("Item\t\tQntd\t\tSubtotal\n\n");
            printf("Combo\t\t%d\t\t%.2f", qtd, subtotal);
            printf("\nBebida");
            printf("\n\n------------------------------------\n\n");
            printf("Obrigado por pedir na Burger.dev!\n\n");
        }

        Sleep(5000);
        system("cls");
        break;

        case 2:
        printf("Digite qual o nome da pessoa que fez o pedido: \n\nSua escolha: ");
        scanf("%s", &mostrarPedidos);

        if(strcmp(mostrarPedidos, nome) == 0){

            printf("\nO cliente %s pediu um número %d no dia %s", nome, lanche, data);
            Sleep(5000);
            system("cls");

        }else{

            printf("\nEste cliente não existe!");
            Sleep(5000);
            system("cls");
        }
        break;

        case 3:
        printf("\nDigite seu endereço para a entrega: ");
        scanf("%s", &endereco);
        printf("\n\nDigite o número do lanche que você deseja: ");
        scanf("%d", &lanche);
        printf("\n\nDigite a quantidade do lanche que você deseja: ");
        scanf("%d", &qtd);
        system("cls");

        if(lanche == 1){

            carregamento();
            subtotal = qtd*10.99;
            subtotalFrete = subtotal+5.99;
            printf("\n\n------------ BURGER.DEV ------------\n\n");
            printf("Endereço do cliente: %s", endereco);
            printf("\nData do pedido: %s\n\n", data);
            printf("----------------------------------------------------------\n\n");
            printf("Item\t\tQntd\t\tSubtotal\t\tFrete\n\n");
            printf("Hambúrguer\t%d\t\t%.2f\t\t\t5.99", qtd, subtotal);
            printf("\n\n----------------------------------------------------------\n\n");
            printf("Total:\t\t\t\t\t\t\t%.2f", subtotalFrete);
            printf("\n\n------------------------------------\n");
            printf("\nO seu hambúrger está à caminho!\n\n");
            Sleep(5000);
            system("cls");
        }else if(lanche == 2){

            carregamento();
            subtotal = qtd*8.99;
            subtotalFrete = subtotal+5.99;
            printf("\n\n------------ BURGER.DEV ------------\n\n");
            printf("Endereço do cliente: %s", endereco);
            printf("\nData do pedido: %s\n\n", data);
            printf("----------------------------------------------------------\n\n");
            printf("Item\t\tQntd\t\tSubtotal\t\tFrete\n\n");
            printf("Batata-frita\t%d\t\t%.2f\t\t\t5.99", qtd, subtotal);
            printf("\n\n----------------------------------------------------------\n\n");
            printf("Total:\t\t\t\t\t\t\t%.2f", subtotalFrete);
            printf("\n\n------------------------------------\n");
            printf("\nAs suas fritas estão chegando!\n\n");
            Sleep(5000);
            system("cls");
        }else if(lanche == 3){

            carregamento();
            subtotal = qtd*19.99;
            subtotalFrete = subtotal+5.99;
            printf("\n\n------------ BURGER.DEV ------------\n\n");
            printf("Endereço do cliente: %s", endereco);
            printf("\nData do pedido: %s\n\n", data);
            printf("----------------------------------------------------------\n\n");
            printf("Item\t\tQntd\t\tSubtotal\t\tFrete\n\n");
            printf("Combo\t\t%d\t\t%.2f\t\t\t5.99", qtd, subtotal);
            printf("\nBebida");
            printf("\n\n----------------------------------------------------------\n\n");
            printf("Total:\t\t\t\t\t\t\t%.2f", subtotalFrete);
            printf("\n\n------------------------------------\n");
            printf("\nSeu super combo está saindo!\n\n");
            Sleep(5000);
            system("cls");
        }
        break;

        case 4:
            printf("Muito obrigado por utilizar o nosso sistema!\n");
            Sleep(1500);
            printf("Volte sempre!\n\n");
            Sleep(1500);
            printf("Email para contato: burgerdev@support.com\n");
            Sleep(1500);
            printf("\n\nFeito com <3\n");
            break;

        case 666:
            system("curl parrot.live");
            break;
    }
    }
}