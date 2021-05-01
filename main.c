#include <stdio.h>
#include <stdlib.h>

int fnf(int a, int b, int x)
{
    int y;
    y = a*x+b;
    return y;
}
int main()
{
    int m,r,s,t,i;
    int c;
    printf("-------- UMA FUNCAO AFIM TEM O FROMATO f(x) = ax + b -------\n");
    printf("digite o valor do coeficiente angular 'a'\n");
    scanf("%d", &r);
    printf("digite o valor do coeficiente linear 'b'\n");
    scanf("%d", &s);
    printf("digite o valor do dominio 'x'\n");
    scanf("%d", &t);
        m = fnf(r,s,t);
          printf("O valor de f(%d) = %d\n", t, m);
    printf("Deseja ver o valores atribuidos a fubcao? digite sin(1)\n");
            scanf("%d" , &c);
            if( c == 1){
            printf("Digite um limite ate onde a funcao deva ir:\n");
              scanf("%d", &i);
                for(t=0; t<=i; ++t){
                    m = fnf(r,s,t);
                printf(" f(%d) = %d\n", t,m);
                }

             }
    return 0;
}
