#include <stdio.h>
#include <math.h>
#include <ctype.h>

float calculateTaxes(float salary){
    float taxes = 0, taxValor[] = {0, 7.5, 15, 22.5, 27.5}, salaryCalc = salary;
    float salaryClassify[] = {1903.98, 2826.65, 3751.05, 4664.68};


    int i;
    for(i = 0; i < 4; i++){
        //if(salaryCalc < salaryClassify[0]){break;}
        if(salaryCalc < 0){break;}

        if(salaryCalc > salaryClassify[i]){
            //salaryCalc -= salaryClassify[i];
            taxes += (salaryCalc / 100) * taxValor[i];


            //salaryCalc -= salaryClassify[i];
            //salaryCalc = salaryCalc - salaryClassify[i];
        }

        //salaryCalc = salaryCalc - salaryClassify[i];

    }

    /*

    if(salary <= 1903.98){
        taxes = 0;

    }else if(salary >= 1903.99 && salary <= 2826.65){
        taxes = 7.5;

    }else if(salary >= 2826.66 && salary <= 3751.05){
        taxes = 15;

    }else if(salary >= 3751.06 && salary <= 4664.68){
        taxes = 22.5;

    }else{
        taxes = 27.5;

    }*/

    return taxes;
}

void showEmployeeSalary(float salary){
    float realSal, taxes;

    //taxes = (salary / 100) * 20;
    taxes = calculateTaxes(salary);

    //realSal = salary - taxes;

    printf("\n%f\n", taxes);

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

void classifySalary(float salary){
    if(salary <= 7000){
        printf("\nMal remunerado.\n");

    }else{
        printf("\nBem remunerado.\n");

    }

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
                printf("Qual o teu sal.?");
                scanf("%f", &emSal);

                classifySalary(emSal);

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

