#include <stdio.h>
#include <math.h>

void hola();
float y_1(float x);

int main() {
	hola();
    int i, n;
    float a=0, b, paso, x, suma=0, integral;
    printf("Bienvenido usuario, por favor digite el valor del limite inferior: \n");
    scanf("%f",&a);
    printf("\nDigite el valor del limite superior: ");
    scanf("%f",&b);
    printf("\nDigite el valor de la particion: ");
    scanf("%f",&paso);
    n=((b-a)/paso);
    for (i=0;i<n;i++){
        x = a + paso*i;
        //printf("El logaritmo de %f es %f\n",x, y_1(x));
        suma = suma + y_1(x);
    }
    integral =suma*paso;
    printf("la integral es %f", integral);
    return 0;
}
float y_1(float x){
    return log(x);
}
void hola(){
	
	printf("Hola amigo mio \n ");
}
