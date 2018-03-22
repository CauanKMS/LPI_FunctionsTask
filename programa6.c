#include <stdio.h>
#include <ctype.h>

char tipoCombustivel;
float valorLitro, quantidadeCombustivel;

void abastecerPorValor(float valor){
    float gasPut = valor * (valorLitro /100);
    quantidadeCombustivel += gasPut;

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

int main()
{
    char op, gasType;
    float valorUser, litroUser, bombGasLeft;

    do
    {
        printf("\nO que fazer?"
                       "\na)ENVELHECER"
                       "\nb)ENGORDAR"
                       "\nc)EMAGRECER"
                       "\nd)CRESCER"
                       "\ne)IMC"
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

                break;

            case 'e':

                break;

        }

    }while(op!='f');

    return 0;
}
