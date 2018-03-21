#include <stdio.h>
#include <math.h>
#include <ctype.h>

void showEmployeeSalary(float salary){
    //THIS GOTTA CHANGE!!!!
    float realSal, taxes;
    taxes = (salary / 100) * 20;
    realSal = salary - taxes;

    printf("\n%2.f\n", realSal);

}

void calculateNewSalary(){

}

void classifySalary(){

}


int main() {
    char op;
    float emSal;

    do
    {
        printf("\nMENU"
                       "\nA)IMPOSTO"
                       "\nB)NOVO SALÁRIO"
                       "\nC)CLASSIFICAÇÃO"
                       "\nD)SAIR\n");
        op=getchar();

        //It must accept only capital letters
        op=toupper(op);

        switch(op)
        {
            case 'A':
                printf("Qual o teu sal.?");
                scanf("%f", &emSal);

                showEmployeeSalary(emSal);

                break;

            case 'B':

                break;

            case 'C':

                break;

            default:
                if(op != 'D'){
                    printf("\nAchou que escolheu a opção certa?\nAchou errado otário.\n");
                }

                break;
        }
    }while(op!='D');

    return 0;
}

