#Programa el cual emplea el metodo de la biseccion.
#El metodo de la biseccion es un metodo para resolver ecuaciones de una sola variable
#Realiza iteraciones hasta encontrar la raiz de la ecuacion
#se debe de proporcionar el intervalo en el cual se crea que existe una raiz.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float y(float x);
int main(){
	float xi, xf, xm,  tolerancia, error=100;
	int i=1;
	do{
	
	printf("\nBienvenido al programa para calcular la raiz de la funcion\n");
	printf("\t\ty=x^2 - 2\n");
	printf("Selecciona el intervalo donde crea que existe la raiz de la funcion:\n");
	printf("Digite el valor inicial xi: ");
	scanf("%f",&xi);
	printf("Digite el valor final xf: ");
	scanf("%f",&xf);
	printf("Digite la tolerancia en el error del calculo, en porcentaje\n");
	scanf("%f",&tolerancia);
	if (y(xi)*y(xf)>0){
			printf("No hay raiz en los intervalos.\n");
			printf("Introdusca los valores nuevamente\n");
			system("pause");		
			system("cls");
	}
	else{
		printf("\n");
	}
	}while(y(xi)*y(xf)>0);
	
	//system("cls");

	while(i<= 100 && tolerancia<= error){
		xm=(xi+xf)/2;
		error=fabs((xf-xm)/xm)*100;
		printf("Biseccion\t%d\t%.9f\t%.9f\n",i,xm,error);
		i=i+1;
		if(y(xi)*y(xm)<0)
		xf=xm;
		else
		xi=xm;
	
	}
	printf("\nOprima ENTER para salir");
	getchar(); getchar();
	
	//while(y(xi)*y(xf)>0);	
	return 0;}
float y(float x){
	return x*x-2;}
	
