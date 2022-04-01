#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcion punto 2
void Cuadrado(int n){

     int resultado = 0;
     resultado = n*n;
     printf("El cuadrado en tipo void de %d es:  %d \n", n, resultado);

     return;
}

int main(){
     //punto 1
     int num, cuadrado;
     
     printf("Ingrese el numero del cual quiera calcular su cuadrado: \n");
     scanf("%d", &num);
     
     cuadrado = num*num;

     printf("El cuadrado de %d es: %d \n", num, cuadrado);

     //punto 2 usando funcion void

     Cuadrado(num);


     return 0;

}