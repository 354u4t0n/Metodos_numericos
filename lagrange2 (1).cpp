/*
metodo de la granje 

 */


#include<stdio.h>
#include <stdlib.h>
char respuesta;
int n,rep,ro,sa,i,k,w;
float x[100], y[100],xf;
float j,a,b;
float f1(float j);
int menu(void);
void leer_coeficientesX(float X[], int N);
void leer_coeficientesY(float Y[], int N);
float calcularlagrange(float x[], float y[], int n, float xf);
int main(){
	
	system("pause");
	system("cls");
	repetir:
	ro=menu();
	switch(ro){
		case 1:
	printf("\n\t Este programa realiza interpolacion de lagrange");
	printf("\n\tingrese el numero de puntos que desea interpolar: k=  ");
	scanf("%d",&n);
	printf("\tDatos de X\n");
	leer_coeficientesX(x,n);
	printf("\tDatos de y\n");
	leer_coeficientesY(y,n);
	for(i=0;i<11;i++){
		float h;
		h = (x[n-1]-x[0])/10;
		//h=(b-a)*i
		j=x[0]+ h*i;
		printf("%d\t%f\t%f\n",i,j,calcularlagrange( x, y, n, j));
	}
	 do{
	printf("\n\tIngresa el valor a interpolar: X_i= ");
	scanf("%f",&xf);
	 calcularlagrange(x,y,n,xf);
	printf("\n\tEl punto interpolado es: [%.2f,f(%.2f)]= [%.2f, %.3f]",xf,xf,xf,calcularlagrange(x,y,n,xf));
	printf ("\n-quiere cambiar el valor de la interpolacion?\n1.Si \t 2.No \n");
    scanf("%i",&rep);
    }while (rep==1);
    break;
    case 2:
    	
  printf("\n usted entro a la opcion 4");
    printf("\nSalir");
}
 printf("\nDesea realizar otra operacion\n");
 printf("Presione s para Si\n Presione 2 para salir");
 printf("\n");
 scanf("%s",&respuesta);
 if(respuesta == 's'||respuesta == 'S')
 goto repetir;
	return 0;
}
void leer_coeficientesX(float X[], int N){
	int i;
	for(i=0;i<N;i++){
		printf("\tIngresa el valor X_%d para la interpolacion\n\t",i);
		scanf("%f",&X[i]);
	}
}
void leer_coeficientesY(float Y[], int N){
	int i;
	for(i=0;i<N;i++){
		printf("\tIngresa el valor f(X_%d) para la interpolacion\n\t",i);
		scanf("%f",&Y[i]);
	}
	
	
}
float calcularlagrange(float x[], float y[], int n, float xf){
	int i,j;
	float aux1[100], aux2[100], ix=0;
	for(i=0;i<n;i++){
		aux1[i]=1;
		aux2[i]=1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j!=i){
				aux1[i]=aux1[i]*(xf-x[j]);
				aux2[i]=aux2[i]*(x[i]-x[j]);
			}
		}
		ix=ix+y[i]*(aux1[i]/aux2[i]);
	}

return ix;
}
int menu(){
int num;
  printf("\n...::MENU::...");
  printf("\n1.-metodo de lagrange");
  printf("\n2.-Salir");
  printf("\nIngrese el numero del movimiento que desea hacer: ");
  scanf("%i",&num);
  return num;
  }
