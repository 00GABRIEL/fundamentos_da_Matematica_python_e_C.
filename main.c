#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fun_seg_grau(int a, int b, int c, int x)   //modelo de função do segundo grau
{ int y;
  y = pow(x,2)*a+(b*x) + c;
    return y;
}

int main()
{

 int i,j,k,w,r,z,p;
 int dt, rz;
 float x1, x2;
                                                                            //entrada de dados
    printf("Modelo de funcao do segundo grau  f(x) = ax^2 + bx + c \n");
    printf("Difite o valor do coeficiente angular 'a' :\n");
    scanf("%d", &i);
    printf("Digite o valor do coeficiente linear 'b': \n");
    scanf("%d", &j);
    printf("Digite o vaor do termo independente 'c': \n");
    scanf("%d", &k);
    printf("Digite o valor do dominio 'x' : \n");
    scanf("%d", &w);
    r = fun_seg_grau(i,j,k,w);                                              //aplicação dos dados na função determinada
    printf("o valor para a imagem e f(%d) = %d \n", w,r);
    printf("Deseja ver o valor do determinante? tecle (1)\n");
    scanf("%d", &p);
        if (p == 1){                                                        //leitura da rsposta do ususario e calculos relativos.
            dt = j*j -4*i*k;
            rz = sqrt(dt);
            x1 = (-j + (rz))/(2*i);
            x2 = (-j - (rz))/(2*i);
        }
         if(dt > 0){                                                           //para determinante positivo.
            printf("O valor do delta e: %d \n", dt);
            printf("A raiz do dealta e: %d\n", rz);
            printf("Os valores das raizes sao x1 = %.2f , x2 = %.2f \n",x1,x2);
            }
        if (dt == 0){                                                           //para determinante igual a zerro.
            printf("Existe duas raiz iguais!\n");
            printf("Os valores das raizes sao x1 = %.2f , x2 = %.2f \n",x1,x2);
            }
        if(dt < 0 ){                                                            //para determinante negativo.
            printf("nao exite raizes nos reais!\n");
        }

    system("pause");
    return 0;
}
