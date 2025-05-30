#include<iostream>
using namespace std;
int factorial(int); 
int main (){
	int m,n,cant,c,a;
	int S=0;
	cout<<"Ingrese la cantidad de combinatorias que se van a sumar: ";
	cin>>cant;
	for (int i=1;i<=cant;i=i+1){
		cout<<"Ingresa el primer indice de la combinatoria: ";
	    cin>>m;
	    cout<<"Ingresa el segundo indice de la combinatoria: ";
	    cin>>n;
	    if (m>n){
	    	if (m>0 && n>=0){
	            a=m-n;
	            c=factorial(m)/(factorial(n)*factorial(a));
	            cout<<"El resultado de la combinatoria es: "<<c<<endl;
	        }
	        else {
		        cout<<"ERROR, ingrese valores enteros positivos";
		    }
		}
		else {
			cout<<"El primer indice debe ser mayor que el segundo"<<endl;
		}
		S=S+c;
	}
	cout<<"La suma de las combinatorias ingresadas es: "<<S<<endl;
	return 0;
}

//Función factorial
 int factorial (int b){
	    int f=1;
	    for (int i=2;i<=b;i=i+1)
		    f=f*i;
	return f; 
}

