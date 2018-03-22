#include <stdio.h>
#include <ctype.h>

float andar(float gasLvl){
    return gasLvl - 5;

}

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

                gasLvl += fuel;

                printf("%f", gasLvl);

                break;

        }

    }while(op!='d');

    return 0;
}
