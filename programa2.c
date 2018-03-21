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

float increaseSalary(float salary){
    float increase;

    if(salary > 15000){
        increase = 10;

    }else if(salary >= 7500 && salary <= 15000){
        increase = 20;

    }else if(salary >= 1000 && salary < 7500){
        increase = 30;

    }else{
        increase = 40;

    }

    return increase;
}

void calculateNewSalary(float salary){
    float newSalary, increase;

    increase = increaseSalary(salary);

    newSalary = ((salary / 100) * increase) + salary;

    printf("\n%2.f\n", newSalary);

    /*if(salary > 15000){
        newSalary = ((salary / 100) * 10) + salary;
    }*/

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
                printf("Qual o teu sal.?");
                scanf("%f", &emSal);

                calculateNewSalary(emSal);

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

