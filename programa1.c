/**
*Programa que cont�m as seguintes funcionalidades:
*a) calcular per�metro de um quadrado;
*b) calcular �rea de um quadrado;
*c) calcular diagonal de um quadrado.
*O usu�rio poder� escolher uma funcionalidade,
*dentre as existentes no programa, e executar
*o programa at� optar por sair.
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <conio.h>
#include <ctype.h>

int perimetro_quadrado(int lado);//s� declara��o

void area_maior_10 (int lado){
    //int area;
    //area = lado * lado;

    if(lado > 10){
        printf("\n%d", 1);
    }else{
        printf("\n%d", 0);
    }
}

void perim_menor_10 (int lado){
            

}

void protectInt(int lado){
    //if()
}

void area_quadrado(int lado)
{
    printf("\nArea = %d",lado*lado);
}

float diagonal_quadrado()
{
    int lado;
    printf("\nDigite o lado");
    scanf("%d", &lado);
    return(lado*sqrt(2));
}

int main()
{
    char op;
    int la;
    int num;
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

int perimetro_quadrado(int lado)
{
    return(4*lado);
}