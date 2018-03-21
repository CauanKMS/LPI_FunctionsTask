#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char op;
    int n1, n2, n3, n4, n5;

    do
    {
        printf("\nO que deseja:\n1)PERIMETRO\n2)AREA\n3)DIAGONAL\n4)SAIR\n");
        op=getchar();
        //op=tolower(op);//mandando para min�sculo
        switch(op)
        {
            case '1':
                printf("\nLado?");
                scanf("%d",&la);
                printf("\nPerimetro = %d",perimetro_quadrado(la));

                perim_menor_10(la);

                break;

            case '2':
                printf("\nLado?");
                scanf("%d",&la);
                area_quadrado(la);

                num = la * la;

                //scanf("%d", num);
                area_maior_10(num);
                break;

            case '3':
                printf("\nDiagonal = %.2f",diagonal_quadrado());
                break;

            case '4':
                printf("\n Tchau");
                break;

            default:
                if(op != '1' || op != '2' || op != '3' || op != '4')
                    printf("op errada\n");

        }
    }while(op!='s');

    return 0;
}
