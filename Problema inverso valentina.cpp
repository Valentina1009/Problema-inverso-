//*Problema  inverso de coordenadas geodesicas 
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.1415926654
using namespace std;
int main(int argc, char const *argv[])
{
	float a,b,f,e_cuadrado,x,y,z,longitud,latitud,phi1,N1,h1;
	printf("Bienvenido\n");
	printf("Ingrese el valor de x en decimales\n");
	scanf("%f",&x);
	printf("Ingrese el valor de y en decimales\n");
	scanf("%f",&y);
	printf("Ingrese el valor de z en decimales\n");
	scanf("%f",&z);
	a=6378137;
	b=6356752.3141;
	f=(a-b)/a;
	e_cuadrado=2*f-pow(f,2);
	longitud=atan(y/x)*180/pi;
	printf("La longitud (Lambda) es\n%f",longitud);
	printf("\n");
	latitud=atan((z/sqrt(pow(x,2)+pow(y,2)))*(1+(e_cuadrado/(1-e_cuadrado))))*180/pi;
	printf("La latitud (Phi) es\n%f",latitud);
	printf("\n");
	N1=a/sqrt(1-(e_cuadrado*pow(sin(latitud),2)*pi/180));
	printf("La gran normal (N) es\n%f",N1);
	printf("\n");
	
	return 0;
}
