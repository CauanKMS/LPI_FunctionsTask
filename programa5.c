#include <stdio.h>
#include <ctype.h>

void envelhecer(int anos){
    anos += 1;

}

void engordar(float kg){

}

void emagrecer(float kg){

}

void crescer(int idade, float altura){
    if(idade < 21){
        altura += 0.5;
    }

}

float imc(float peso, float altura){

}

int main()
{
    char op;

    char nome[20];
    int idade;
    float peso, altura;

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
                envelhecer(idade);
                printf("", idade);

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
