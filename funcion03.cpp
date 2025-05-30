#include<iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
void triangulo(int a);
int rombo(int x,int y);
int cuadrado(int l);
int cubo(int l);
int circulo(int r);
int error (int n);
int oportunidad(int m);
int main (){
	int opciones, lado, dmayor, dmenor, Lado, radio, ladoc, i=1;
	cout<<"Ingrese 1. Area de un triangulo equilatero, 2. Area de un rombo, 3. Area del cuadrado, 4. Area del circulo, 5. Volumen de un cubo, 0. Salir: "<<endl;
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
				    oportunidad(lado);
				}
			    break;
		    case 2:
			    cout<<"Ingresa la diagonal mayor: "<<endl;
			    cin>>dmayor;
			    cout<<"Ingresa la diagonal menor: "<<endl;
			    cin>>dmenor;
			    error(dmayor);
			    error(dmenor);
			    if (dmayor>dmenor){
			        rombo(dmayor,dmenor);	
				}
				else {
				    while (dmayor<=dmenor && i<3){
					    cout<<"Error el numero ingresado para la diagonal mayor debe ser mas grande que la otra diagonal, intentelo de nuevo"<<endl;
	                	i=i+1;
	                	cout<<"Ingresa la diagonal mayor: "<<endl;
		        	    cin>>dmayor;
			            cout<<"Ingresa la diagonal menor: "<<endl;
			            cin>>dmenor;
	            }
	                cout<<"Eliga nuevamente una de las opciones del menu"<<endl;	
					
				}
			    break;
			case 3:
				cout<<"Ingresa el lado del cuadrado: "<<endl;
				cin>>Lado;
				if (Lado>0){
			        cuadrado(Lado);	
				}
				else {
					oportunidad(Lado);
				}
			    break;
		    case 4:
			    cout<<"Ingresa el radio del circulo: "<<endl;
			    cin>>radio;
			    if (radio>0){
			        circulo(radio);	
				}
				else {
					oportunidad(radio);
				}
		        break;
		    case 5:
			    cout<<"Ingresa el lado del cubo: "<<endl;
			    cin>>ladoc;
			    if (ladoc>0){
			        cubo(ladoc);	
				}
				else {
					oportunidad(ladoc);
				}
		        break;
		    default:
		    	cout<<"ERROR"<<endl;
		    	i=i+1;
	   	        break;
	    }	
	
	    cout<<"Ingrese 1. Area de un triangulo equilatero, 2. Area de un rombo, 3. Area del cuadrado, 4. Area del circulo, 5. Volumen de un cubo, 0. Salir: "<<endl;
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


//Funcion área del cuadrado
int cuadrado(int l){
	int area2;
	area2=pow(l,2);
	cout<<"El area del cuadrado es: "<<area2<<endl;
}

//Función área del círculo
int circulo(int r){
	int area3;
	area3=(3.14)*pow(r,2);
	cout<<"El area del circulo es: "<<area3<<endl;
}

//Funcion volumen de un cubo
int cubo(int l){
	int volumen;
	volumen=pow(l,3);
	cout<<"El volumen del cubo es: "<<volumen<<endl;
}

//Funcion error 
int error (int n){
	if (n<=0){
		cout<<"ERROR, ingrese un valor positivo, intentelo de nuevo"<<endl;
	}
}

//Funcion oportunidad
int oportunidad(int m){
	int i=1;
    while (m<=0 && i<3){
		error(m);
		i=i+1;
		cout<<"Ingresa el valor (no negativos ni 0): "<<endl;
		cin>>m;
	}
	cout<<"Eliga nuevamente una de las opciones del menu"<<endl;	
}

