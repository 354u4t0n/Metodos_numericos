//Metodo de la tangente
//o tambien llamado metodo Newton-rhapson
//#metodo el cual proporcion una forma de encontrar las raices
//#de una funcion similar al de la biseccion y al de la secante
//#pero con una convergencia en general más rapida.

#include<stdio.h>
#include<math.h>
float y(float x);
float y_1(float x);
int main(){
	float xi, xf,  tolerancia, error=100;
	int i=1;
	
	printf("\nBienvenido al programa para calcular la raiz de la funcion\n");
	printf("\t\ty=x^2 - 2\n");
	printf("Selecciona el intervalo donde crea que existe la raiz de la funcion:\n");
	//do{
//	printf("Error al ingresar los valores,digitelos nuevamente\n");
	printf("Digite el valor inicial xi: ");
	scanf("%f",&xi);
//	printf("Digite el valor final xf: ");
	//scanf("%f",&xf);
	printf("Digite la tolerancia en el error del calculo, en porcentaje\n");
	scanf("%f",&tolerancia);
//	}while(y(xi)*y(xf)>0);
	while(i< 100 && tolerancia<= error){
		printf("Tangente \t%d\t%f\n",i,xi,error);
		xf=xi-(y(xi)/y_1(xi));
		error=fabs((xf-xi)/xi)*100;
		i=i+1;
		xi=xf;
}
	
	printf("\nOprima ENTER para salir");
	getchar(); getchar();
	return 0;}
float y(float x){
	return x*x-2;}
	float y_1(float x){
	return 2*x;}
