#include<iostream>
using namespace std;
int factorial(int); 
int main (){
	int m,n,c,a;
	cout<<"Ingresa el primer indice de la combinatoria: ";
	cin>>m;
	cout<<"Ingresa el segundo indice de la combinatoria: ";
	cin>>n;
	    a=m-n;
	    c=factorial(m)/(factorial(n)*factorial(a));
	    cout<<"El resultado de la combinatoria es: "<<c;
	return 0;
}

 int factorial (int b){
	    int f=1;
	    for (int i=2;i<=b;i=i+1)
		    f=f*i;
	return f; 
}

