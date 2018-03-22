#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void biggestNumber(int n1,
                  int n2,
                  int n3,
                  int n4,
                  int n5){
    if(n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5){
        printf("\nO maior número é %d\n", n1);

    }else if (n2 >= n1 && n2 >= n3 && n2 >= n4 && n2 >= n5){
        printf("\nO maior número é %d\n", n2);

    }else if (n3 >= n2 && n3 >= n1 && n3 >= n4 && n3 >= n5){
        printf("\nO maior número é %d\n", n3);

    }else if (n4 >= n2 && n4 >= n3 && n4 >= n1 && n4 >= n5){
        printf("\nO maior número é %d\n", n4);

    }else{
        printf("\nO maior número é %d\n", n5);

    }

}

void smallestNumber(int n1,
                    int n2,
                    int n3,
                    int n4,
                    int n5){
    if(n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5){
        printf("\nO menor número é %d\n", n1);

    }else if (n2 <= n1 && n2 <= n3 && n2 <= n4 && n2 <= n5){
        printf("\nO menor número é %d\n", n2);

    }else if (n3 <= n2 && n3 <= n1 && n3 <= n4 && n3 <= n5){
        printf("\nO menor número é %d\n", n3);

    }else if (n4 <= n2 && n4 <= n3 && n4 <= n1 && n4 <= n5){
        printf("\nO menor número é %d\n", n4);

    }else{
        printf("\nO menor número é %d\n", n5);

    }

}

void arithmeticMean(int n1,
                    int n2,
                    int n3,
                    int n4,
                    int n5){
    int arit = (n1 + n2 + n3 + n4 + n5)/5;

    printf("\nA média aritmética é %d\n",arit);
}

/*void median(int n1,
            int n2,
            int n3,
            int n4,
            int n5){
    int median[] = {n1, n2, n3, n4, n5};



}*/

int main()
{
    char op;
    int n1, n2, n3, n4, n5;

    do
    {
        printf("\nMENU"
                       "\na)MAIOR NÚMERO"
                       "\nb)MENOR NÚMERO"
                       "\nc)MÉDIA ARITMÉTICA"
                       "\nd)MEDIANA"
                       "\ne)MODA"
                       "\nf)SAIR\n");

        op = getchar();
        op = tolower(op);

        switch(op)
        {
            case 'a':
                printf("Digite os 5 números:\n");
                scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

                biggestNumber(n1, n2, n3, n4, n5);

                break;

            case 'b':
                printf("Digite os 5 números:\n");
                scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

                smallestNumber(n1, n2, n3, n4, n5);

                break;

            case 'c':
                printf("Digite os 5 números:\n");
                scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

                arithmeticMean(n1, n2, n3, n4, n5);

                break;

            case 'd':
                printf("Digite os 5 números:\n");
                scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

                break;

            case 'e':
                printf("Digite os 5 números:\n");
                scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

                break;

            default:
                if(op != 'f') {
                    printf("op errada\n");
                }

        }
    }while(op!='f');

    return 0;
}
