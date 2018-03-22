#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char op;
    float fuel;
    float gasLvl;

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
                gasLvl = andar(gasLvl);

                break;

            case 'b':
                printf("\n%2.f\n", gasLvl);

                break;

            case 'c':
                printf("\nQuantos litros?\n");
                scanf("%f", &fuel);

                gasLvl += fuel;

                printf("%f", gasLvl);

                break;

                /*default:
                    if(op != 'd') {
                        printf("OPÇÃO INCORRETA.\n");
                    }*/

        }
    }while(op!='d');

    return 0;
}
