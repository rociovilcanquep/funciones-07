#include<iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
void triangulo(int a);
int rombo(int x,int y);
int cubo(int l);
int main (){
	int opciones, lado, dmayor, dmenor, ladoc, i=1;
	cout<<"Ingrese 1. Area de un triangulo equilatero, 2. Area de un rombo, 3. Volumen de un cubo, 0. Salir: "<<endl;
	cin>>opciones;
	system("cls");
	while (opciones!=0 && i<3){
	    switch (opciones){
	    	case 1:
			    cout<<"Ingresa el valor del lado del triangulo equilatero: "<<endl;
			    cin>>lado;
			    if (lado>0){
			        triangulo(lado);	
				}
				else {
					cout<<"ERROR, el lado de un triangulo no puede ser negativo ni 0, vuelva a intentarlo"<<endl;
				}
			    break;
		    case 2:
			    cout<<"Ingresa la diagonal mayor: "<<endl;
			    cin>>dmayor;
			    cout<<"Ingresa la diagonal menor: "<<endl;
			    cin>>dmenor;
			    if (dmayor>dmenor){
			        rombo(dmayor,dmenor);	
				}
				else {
					cout<<"ERROR, la diagonal mayor ingresada es menor que la segunda diagonal, intentelo de nuevo"<<endl;
				}
			    break;
		    case 3:
			    cout<<"Ingresa el lado del cubo: "<<endl;
			    cin>>ladoc;
			    if (ladoc>0){
			        cubo(ladoc);	
				}
				else {
						cout<<"ERROR, el lado de un cubo no puede ser negativo ni 0, vuelva a intentarlo"<<endl;
				}
		        break;
		    default:
		    	cout<<"ERROR"<<endl;
		    	i=i+1;
	   	        break;
	    }	
	
	    cout<<"Ingrese 1. Area de un triangulo equilatero, 2. Area de un rombo, 3. Volumen de un cubo, 0. Salir: "<<endl;
	    cin>>opciones;
	    system("cls");
	}
	cout<<"Fin del programa";
	return 0;
}

//Función área del triángulo
void triangulo(int a){
	int area;
	area=(sqrt(3)/4)*pow(a,2);
	cout<<"El area del triangulo equilatero es: "<<area<<endl;
}

//Función área del rombo
int rombo(int x,int y){
	int area1;
	area1=(x*y)/2;
	cout<<"El area del rombo es: "<<area1<<endl;
}

//Funcion volumen de un cubo
int cubo(int l){
	int volumen;
	volumen=pow(l,3);
	cout<<"El volumen del cubo es: "<<volumen<<endl;
}
