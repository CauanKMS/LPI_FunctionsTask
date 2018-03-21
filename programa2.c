#include <stdio.h>
#include <math.h>
#include <ctype.h>

void showEmployeeSalary(double salary){
    double realSal, taxes;
    realSal = salary - taxes;


}

void calculateNewSalary(){

}

void classifySalary(){

}


int main() {
    char op;

    do
    {
        printf("\nMENU"
               "\nA)IMPOSTO\nB)NOVO SALÁRIO\nC)CLASSIFICAÇÃO\nD)SAIR\n");
        op=getchar();

        //It must accept only capital letters
        op=toupper(op);

        switch(op)
        {
            case 'A':


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

