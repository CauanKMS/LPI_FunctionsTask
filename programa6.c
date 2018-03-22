#include <stdio.h>
#include <ctype.h>

char nome[20];
int idade;
float peso, altura;

int main()
{
    char op;

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

                break;

            case 'b':

                break;

            case 'c':

                break;

            case 'd':

                break;

            case 'e':

                break;

        }

    }while(op!='f');

    return 0;
}
