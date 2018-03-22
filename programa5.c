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
    anos += 10;

    idade = anos;
    //return anos;

}

void engordar(float kg){
    kg += 5;

    peso = kg;

}

void emagrecer(float kg){
    kg -= 1;

    peso = kg;

}

void crescer(int idadeVar, float alturaVar){
    if(idadeVar < 21){
        alturaVar += 0.5;
    }else{ alturaVar += 0.1; }

    altura = alturaVar;

}

float calculaImc(float peso, float altura){
    float imc = peso / (altura * altura);

    return imc;
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
                engordar(peso);

                printf("%2.f", peso);

                break;

            case 'c':
                emagrecer(peso);

                printf("%2.f", peso);

                break;

            case 'd':
                crescer(idade, altura);

                printf("%2.f", altura);

                break;

            case 'e':
                printf("%2.f", calculaImc(peso, altura));

                break;

        }

    }while(op!='f');

    return 0;
}
