#include <stdio.h>
#include <ctype.h>

char tipoCombustivel;
float valorLitro, quantidadeCombustivel, bombGasLeft;

void abastecerPorValor(float valor){
    float gasPut = valor * (valorLitro /100);
    quantidadeCombustivel += gasPut;
    bombGasLeft -= gasPut;

    printf("Quantidade de gasolina colocada no veiculo: %2.f", gasPut);

}

void abastecerPorLitro(float litros){
    float valorLitros = (litros/valorLitro) * 100;

    printf("Custa: %2.f", valorLitros);

}

void alterarValor(float valor){
    valorLitro = valor;

    printf("Novo valor: %2.f", valorLitro);
}

void alterarCombustivel(char c){
    tipoCombustivel = c;

    printf("Novo tipo de combustivel: %c", c);

}

void alterarQuantidadeCombustivel(float qtdComb){
    bombGasLeft += qtdComb;

    printf("Quantidade colocada: %2.f", qtdComb);

}

int main()
{
    char op, gasType;
    float valorUser, litroUser;

    do
    {
        printf("\nO que fazer?"
                       "\na)ABASTECER POR VALOR"
                       "\nb)VERIFICAR VALOR POR LITRO"
                       "\nc)ALTERAR VALOR DO LITRO DE GASOLINA"
                       "\nd)ALTERAR TIPO DE COMBUSTIVEL"
                       "\ne)ALTERAR QUANTIDADE DE COMBUSTIVEL NA BOMBA"
                       "\nf)SAIR\n");

        op = getchar();
        op = tolower(op);

        switch(op)
        {
            case 'a':
                printf("Qual o valor que deseja colocar?\n");
                scanf("%f", &valorUser);

                abastecerPorValor(valorUser);

                break;

            case 'b':
                printf("Quanto deseja colocar?\n");
                scanf("%f", &litroUser);

                abastecerPorLitro(litroUser);

                break;

            case 'c':
                printf("Quanto deseja colocar?\n");
                scanf("%f", &valorUser);

                alterarValor(valorUser);

                break;

            case 'd':
                printf("Qual o tipo de combustivel?\n");
                gasType = getchar();

                alterarCombustivel(gasType);

                break;

            case 'e':
                printf("Quanto deseja colocar?\n");
                scanf("%f", &litroUser);

                alterarQuantidadeCombustivel(litroUser);

                break;

        }

    }while(op!='f');

    return 0;
}
