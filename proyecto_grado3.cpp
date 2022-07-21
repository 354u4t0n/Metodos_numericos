
#include <stdio.h>
#include <math.h>
float y_1(float x,float a,float b,float c,float d);
int menu(void);
int ro;
	float a,b,c,d,y,i,n;
    float li,ls , paso,pasopar, x, sp=0,si=0, integral;
int main (){
	
    printf("\tBinvenido para realizar una integracion de algun polinomio grado 3");
printf("\n\t\tax3 + bx2 + cx + d");	
	printf("\ningrese el valor de a:");
	scanf("%f",&a);
	printf("ingrese el valor de b:");
	scanf("%f",&b);
	printf("ingrese el valor de c:");
	scanf("%f",&c);
	printf("ingrese el valor de d:");
	scanf("%f",&d);
	printf("su ecuacion quedo como: %fx3 + %fx2 + %fx + %f ",a,b,c,d);
	ro=menu();
	
	switch(ro){
        
  case 1:
  		printf("usted escogio la integracion por metodo de franjas");
    printf("\ningrese el valor del limite inferior:");
    scanf("%f",&li);
    printf("ingrese el valor del limite superior:");
    scanf("%f",&ls);
    printf("ingrese el valor de la particion:");
    scanf("%f",&paso);
    n=((ls-li)/paso);
    for(i=0;i<n;i++){
    	x=li+i*paso;
    	si=si+y_1(x,a,b,c,d);
	}
	integral=si*paso;
	printf("el resultado de la integral es %f\n",integral);
   
            break;
        
        case 2:
           printf("usted escogio la integracion por metodo del trapecio");
            break;
        
	    case 3:   
           printf("usted escogio la integracion por metodo de Simpson");
    
    pasopar=paso/2;
    printf("\ningrese el limite inferior:");
scanf("%f",&a);
printf("ingrese el limite superior:");
scanf("%f",&b);
printf("ingrese el valor de la particion:");
scanf("%f",&paso);
    n=((b-a)/pasopar);	
			
            break;
           
            case 4:    	
            		printf("\n usted entro a la opcion 4");
            printf("\nSalir");
        }

	return 0;
}




float y_1(float x,float a,float b,float c,float d){
	return a*pow(x,3)+b*pow(x,2)+c*x+d;
}
int menu(){
int num;
  printf("\n...::MENU::...");
  printf("\n1.-metodo de integracion por franjas");
  printf("\n2.-metodo de integracion por trapecio");
  printf("\n3.-metodo de integracion por regla de simpson");
  printf("\n4.-Salir");
  printf("\nIngrese el numero del movimiento que desea hacer: ");
  scanf("%i",&num);
  return num;
  }
