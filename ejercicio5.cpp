#include<iostream>
#include<cmath>
using namespace std;

void calcularRaices(double a,double b,double c, double &x1, double &x2, bool &g){
	
	double d;
	
	d=  pow(b, 2) - (4*a*c);
	
 	if(d>=0){
 		
		x1= (-b + sqrt(d))/(2*a);
		x2= (-b - sqrt(d))/(2*a);
		g=true;
		
	}else{
		
		x1=-b/(2*a);
		x2= sqrt(-d)/(2*a);
		g=false;
	}
}

int main(){
	
	double a, b, c, x1, x2; 
	bool n;
	
	cout<<"ingrese el valor del coeficiente de x^2 "<<endl;
	cin>> a;
	cout<<"ingrese el coeficiente de x "<<endl;
	cin>> b;
	cout<<"ingrese el termino independiente " <<endl;
	cin>> c;
	
	calcularRaices(a, b, c, x1, x2, n);
	
	if(n==true){
		
		cout<<"la raices son: "<<endl;
		cout<<x1<<endl;
		cout<<x2<<endl;
		
	}else{
		
		cout<<"las raices complejas son: "<<endl;
		cout<< x1<<" + "<<x2<<"i"<<endl;
		cout<<x1<<" - "<<x2<<"i"<<endl;
	}
	return 0;
}