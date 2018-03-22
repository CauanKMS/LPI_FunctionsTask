#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

float adicionarGasolina(float litros){

    return litros;
}

void andar(){

}

int main()
{
    char op;
    float gasLvl = 0, loseGas = 5, fuel;

    do
    {
        printf("\nO que fazer?"
                       "\na)ANDAR"
                       "\nb)QUANTOS LITROS RESTAM?"
                       "\nc)ABASTECER"
                       "\nd)SAIR\n");

        op = getchar();
        op = tolower(op);

        switch(op)
        {
            case 'a':
                //printf("Digite os 5 números:\n");
                //scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

                //andar


                break;

            case 'b':
                //printf("Digite os 5 números:\n");
                //scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

                //quantos litros restam?

                break;

            case 'c':
                printf("\nQuantos litros?\n");
                scanf("%2.f", fuel);

                gasLvl = adicionarGasolina(fuel);

                break;

            default:
                if(op != 'd') {
                    printf("OPÇÃO INCORRETA.\n");
                }

        }
    }while(op!='d');

    return 0;
}
