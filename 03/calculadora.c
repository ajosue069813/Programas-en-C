/* Este programa es una pequeña calculadora implementada con funciones y punteros, se hace la operacion entre 2 numeros y después de ello se selecciona la operación ya se suma, resta, multiplicación o división
*/
#include<stdio.h>
#include<stdlib.h>

float Suma(float *x, float *y) 
{
        return (*x + *y);
}

float Resta(float *x, float *y) 
{
        return (*x - *y);
}

float Mult(float *x, float *y) 
{
        return (*x * *y);
}

float Div(float *x, float *y) 
{
        return (*x / *y);
}

void main(void)
{
        char Num1[10];
        char Num2[10];
        char Select[1];
        float X, Y;
        int Sel;
        float (*Funct)(float*, float*);
        float (*ArrFunc[4]) (float*,float*)={Suma,Resta,Mult,Div};
        printf("Escriba el primer valor: \n");
        scanf("%s",Num1);
        getchar();
        X = atof(Num1);
        printf("Escriba el segundo valor: \n");
        scanf("%s",Num2);
        getchar();
        Y = atof(Num2);

	elegir:
        printf("Escriba la operacion a realizar\n0 = Suma\n1 = Resta\n2 = Multiplicacion\n3 = Division\n");
        scanf("%s",Select);
        getchar();
        if (Select[0] != '0'&& Select[0] != '1'&& Select[0] != '2' && Select[0] != '3')
        {
                printf("Nel prro eso no se puede elije otro\n");
                goto elegir;
        }
        Sel=atoi(Select);
        Funct=ArrFunc[Sel];

        printf("Su resultado es: %f\n",Funct(&X,&Y));

}


