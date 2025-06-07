#include<iostream>
using namespace std;

int primos(int a);

int main (){
	int num, cant;
	cout<<"¿Cuantos numeros quiere ingresar (no 0, ni negativos)?:"<<endl;
	cin>>cant;
    if (cant==0 && cant<0){
    	cout<<"La cantidad debe ser positiva"<<endl;
	}
	else{
		int S=0;
		int a=1;
		while (a<=cant){
			int n=0;
			cout<<"Ingresa el numero: "<<endl;
			cin>>num;
			if (num==0){
        	    cout<<"El cero no es ni un numero primo ni un numero compuesto";
        	}
	        else{
	        	primos(num);
	        }
	        S=S+num; 
            a=a+1;
	    }
	    cout<<"La suma es: "<<S<<endl;
    }
    cout<<"Fin del programa";
	return 0;
}

//Función primos
int primos(int a){
	int n=0;
	cout<<"Divisores: "<<endl;
		for (int i=1;i<=a;i=i+1){
    	    if (a%i==0){
    	        cout<<i<<" ";
    	        n=n+1;
    	    }
       }
        if (n>2){
	        cout<<endl<<"El numero es compuesto"<<endl;
	    }
        else {
	        cout<<endl<<"El numero es primo"<<endl;
        }
}



