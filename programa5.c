#include <stdio.h>
#include <ctype.h>

char nome[20];
int idade;
float peso, altura;

/*
int envelhecer(int anos){
    anos += 1;
    return anos;

}
*/

void envelhecer(int anos){
    anos += 1;

    idade = anos;
    //return anos;

}

float engordar(float kg){

}

float emagrecer(float kg){

}

float crescer(int idade, float altura){
    if(idade < 21){
        altura += 0.5;
    }

}

float imc(float peso, float altura){

}

int main()
{
    char op;

    //char nome[20];
    //int idade;
    //float peso, altura;

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

                //idade = envelhecer(idade);
                printf("%d", idade);

                break;

            case 'b':
                //peso =

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
