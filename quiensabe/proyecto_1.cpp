#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float a(float x);
float to(float x);
float y(float x);
int menu(void);
int ro,num;
	float xi, xf, xm,x0,x1,x2,tolerancia, error=100;
	int i=1;
	char respuesta;
int main(){
	do{
	//printf("\n P(x) = X^3 - 4.736X^2 - 0.41X +13.416 ");
	printf("\n");
	system("pause");
	system("cls");
	repetir:
	ro=menu();
	switch(ro){
	
        
  case 1:
  	system("cls");
  	printf("Eligio la integracion por metodo de biseccion.\n");
    printf("Determine el intervalo donde se considere que existe la raiz de la funcion:\n");
    i=0;
	error=100;
	do{
	printf("Digite el valor inicial xi: ");
	scanf("%f",&xi);
	printf("Digite el valor final xf: ");
	scanf("%f",&xf);
	printf("Digite la tolerancia en el error del calculo, en porcentaje:\n");
	scanf("%f",&tolerancia);	
	}while(a(xi)*a(xf)>0);
	while(i<= 100 && tolerancia<= error){
		xm=(xi+xf)/2;
		error=fabs((xf-xm)/xm)*100;
		printf("Biseccion\t%d\t%.9f\t%.9f\n",i,xm,error);
		i=i+1;
		if(a(xi)*a(xm)<0)
		xf=xm;
		else
		xi=xm;
}
    break;
        
    case 2:
    system("cls");
   	printf("\nBienvenido al programa para calcular la raiz de la funcion\n");
	printf("\t\t P(x) = X^3 - 4.736X^2 - 0.41X +13.416.\n");
	printf("Selecciona el intervalo donde crea que existe la raiz de la funcion:\n");
	i=0;
	error=100;
	do{
	printf("Digite el valor inicial xi: ");
	scanf("%f",&xi);
	printf("Digite la tolerancia en el error del calculo, en porcentaje\n");
	scanf("%f",&tolerancia);
	}while(to(xi)==0);
	while(i< 100 && tolerancia<= error){
		printf("Tangente \t%d\t%f\n",i,xi,error);
		xf=xi-(to(xi)/y(xi));
		error=fabs((xf-xi)/xi)*100;
		i=i+1;
		xi=xf;}

    break;
        
	case 3:   
	
    system("cls");
	printf("\n El programa calcula la raiz de la funcion.\n");
	printf("\t\t P(x) = X^3 - 4.736X^2 - 0.41X +13.416.\n");
	printf("Determine el intervalo donde crea que existe la raiz de la funcion:\n");
	i=0;
	error=100;
	do{
	printf("Digite el valor inicial xi: ");
	scanf("%f",&x0);
		printf("Digite el valor inicial x1: ");
	scanf("%f",&x1);
	printf("Digite la tolerancia en el error del calculo, en porcentaje\n");
	scanf("%f",&tolerancia);
	}while(y(x0)==0);
	while(i< 100 && tolerancia<= error){
		printf("secante\t%d\t%f\t%f\n",i,x0,error);
		x2=x1-(to(x1)*(x1-x0))/(to(x1)-to(x0));
		error=fabs((x2-x1)/x1)*100;
		i++;
		x0=x1;
		x1=x2;}
		printf("secante\t%d\t%f\t%f\n",i,x0,error);
		
    break;
           
    case 4:    	
    printf("\n usted entro a la opcion 4");
    printf("\nSalir");
    }
    } while (num==4);
	
	printf("\nSi desea realizar otra operacion proporcione  s o si\n ");
	
	printf("Presione  cualquier otra letra para salir: ");
	//printf("\n:");
	scanf("%s",&respuesta);
	if(respuesta == 's' || respuesta == 'S'||  respuesta == 'Si' || respuesta == 'si' )
	{
	
	 system("pause");
	 system("cls");
	 goto repetir;
	 //system("pause");
	 //system("cls")	 
}  else {
	goto salida;
}
	printf("Saliendo");
	system("pause");
	salida:
	return 0;
}
float a(float x){
	return pow(x,3)-4.736*pow(x,2)-0.41*x+13.416;}
float to(float x){
	return pow(x,3)-4.736*pow(x,2)-0.41*x+13.416;}
float y(float x){
	return 3*pow(x,2)-4.736*2*x-0.41;}
int menu(){
int num;
  printf("\n");
  printf("\tBinvenido al programa para realizar una integracion de algun polinomio grado 3");
  printf("\n\tEl polinomio es:  ");
  printf("\n\tP(x) = X^3 - 4.736X^2 - 0.41X +13.416. ");
  printf("\n");
  printf("\n\t...::MENU::...");
  printf("\n\t1.-Metodo de biseccion.");
  printf("\n\t2.-Metodo de la tangente.");
  printf("\n\t3.-Metodo de la secante.");
  printf("\n\t4.-Salir del programa.");
  printf("\n\tIngrese el numero del movimiento que desea hacer: ");
  scanf("%i",&num);
  return num;
  }
