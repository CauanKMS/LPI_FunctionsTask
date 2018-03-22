#include <stdio.h>
#include <ctype.h>

int main()
{
    char op;

    do
    {
        printf("\nO que fazer?"
                       "\na)LEIA A STRING"
                       "\nb)IMPRIMIR TAMANHO DA STRING"
                       "\nc)COMPARAR STRINGS"
                       "\nd)CONCATENAR STRINGS"
                       "\ne)IMPRIMIR STRING REVERSA"
                       "\nf)CONTAR VEZES QUE UM CHAR EH EXIBIDO"
                       "\ng)SUBSTITUIR CARACTERES NO STRING"
                       "\nh)SAIR\n");

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
