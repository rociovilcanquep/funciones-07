#include<iostream>
using namespace std;
void resta (int val1, int val2);
int division(int val1, int val2);
int producto(int val1,int val2);
int suma (int val1, int val2);
int main (){
	int num1,num2,resultado;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	if (num1!=0 && num2!=0){
		resta(num1,num2);
	    resta(num2,num1);
	    suma(num1,num2);
	    resultado=producto(num1,num2);
	    cout<<"La multiplicacion de "<<num1<<" por "<<num2<<" es: "<<resultado<<endl;
	    division(num1,num2);
	    division(num2,num1);
	}
	else {
		division(num1,num2);
	    division(num2,num1);
	    cout<<"Error";
	}
	return 0;
}
void resta (int val1, int val2){
	int sustrac;
	sustrac=val1-val2;
	cout<<"La resta de "<<val1<<" - "<<val2<<" es: "<<sustrac<<endl;
}

int division (int val1, int val2){
	int division;
	division=val1/val2;
	cout<<"La division de "<<val1<<" / "<<val2<<" es: "<<division<<endl;
}

int suma(int val1, int val2){
	int suma;
	suma=val1+val2;
	cout<<"La suma de "<<val1<<" + "<<val2<<" es: "<<suma<<endl;;
}

int producto(int val1, int val2){
	int prod;
	prod=val1*val2;
	return (prod);
}
