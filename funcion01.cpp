#include<iostream>
#include <cmath>
using namespace std;
void resta (int val1, int val2);
int division(int val1, int val2);
int producto(int val1,int val2);
int suma (int val1, int val2);
int potencia(int val1, int val2);
int main (){
	int num1,num2,resultado;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	if (num1==0 || num2==0){
		cout<<"Ingrese numeros enteros";
	}
	else {
	resta(num1,num2);
	resta(num2,num1);
	suma(num1,num2);
	resultado=producto(num1,num2);
	    cout<<"La multiplicacion de "<<num1<<" por "<<num2<<" es: "<<resultado<<endl;
	division(num1,num2);
	division(num2,num1);
	potencia(num1,num2);
	potencia(num2,num1);  
    }  
	return 0;
}

//Funci�n resta
void resta (int val1, int val2){
	int sustrac;
	    sustrac=val1-val2;
	    cout<<"La resta de "<<val1<<" - "<<val2<<" es: "<<sustrac<<endl;
}

//Funci�n divisi�n
int division (int val1, int val2){
	int division;
	    division=val1/val2;
	    cout<<"La division de "<<val1<<" / "<<val2<<" es: "<<division<<endl;
}

//Funci�n suma
int suma(int val1, int val2){
	int suma;
	    suma=val1+val2;
	    cout<<"La suma de "<<val1<<" + "<<val2<<" es: "<<suma<<endl;;
}

//Funci�n producto
int producto(int val1, int val2){
	int prod;
	    prod=val1*val2;
    	return (prod);
}

//Funci�n potencia
int potencia(int val1, int val2){
	int potencia;
	    potencia= pow(val1,val2);
	    cout<<"La potencia de "<<val1<<" y "<<val2<<" es: "<<potencia<<endl;
}
