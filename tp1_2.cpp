#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//punto 2a
void Cuadrado(int n); //funcion que calcula el cuadrado de un numero
//punto 2b
void Invertir(int a, int b); // deberá devolver en el valor de a en la variable b, y en el
                            // valor de b el valor de a
//punto 2c
void Orden(int a, int b); //deberá devolver en el valor de a el valor más chico, y en el
                         //valor de b el valor más grande


int main(){
     //punto 2a
     int num, cuadrado;
     
     printf("Ingrese el numero del cual quiera calcular su cuadrado: \n");
     scanf("%d", &num);
     
     cuadrado = num*num;

     printf("El cuadrado de %d es: %d \n", num, cuadrado);

     //punto 2b usando funcion void

     Cuadrado(num);

     //punto 2c
     
     int n;
     
     printf("Ingrese otro numero: \n ");
     scanf("%d", &n);
     
     int *puntero = &n;

     printf("Dirección de memoria de la variable: %d \n", puntero);
     printf("Contenido de la variable: %d \n", *puntero);

     //punto 2d
     int num1, num2;
     printf("Ingrese un numero (a): \n");
     scanf("%d", &num1);
     printf("Ingrese otro numero (b): \n");
     scanf("%d", &num2);

     printf("Ahora invertiremos sus valores: \n");

     Invertir(num1, num2);

     //punto 2e

     int num3, num4;
     printf("Ingrese el primer numero para comparar: \n");
     scanf("%d", &num3);
     printf("Ingrese el segundo numero para comparar: \n");
     scanf("%d", &num4);

     Orden(num3, num4);


     return 0;

}
//funcion punto 2b
void Cuadrado(int n){

     int resultado = 0;
     resultado = n*n;
     printf("El cuadrado en tipo void de %d es:  %d \n", n, resultado);

     return;
}
//punto 2d
void Invertir(int a, int b){
     int x = a;
     a= b;
     b= x;
     printf("Valor de a: %d \n", a);
     printf("Valor de b: %d \n", b);
     return;
}
//punto 2e
void Orden(int a, int b){
 
     printf("Ordenamos de menor a mayor: \n");
     if(a<b){
          printf("%d - %d", a, b);
     }else{
          printf("%d - %d", b, a);
     }
     return;
}