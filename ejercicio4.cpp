#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	float a, b, c, d, x1, x2;
	
	cout<<"ingrese el coeficiente de la variable de grado 2 "<<endl;
	cin>> a;
	
	cout<<"ingrese el coeficiente de la variable de grado 1 "<<endl;
	cin>> b;
	cout<<"ingrese el termino independiente "<<endl;
	cin>> c;
	
	
	// d= discriminante
	d= pow(b, 2) - (4*a*c) ;
	
	if(a != 0){
		
		if(d>=0){
			
			x1= (-(b)+ (sqrt(d))) /(2*a);
			
			x2= (-(b) - (sqrt(d))) / (2*a);
			
			cout<<"las raices son: "<<endl;
			cout<< x1<<endl;
			cout<< x2;
		}else{
			cout<<"las raices son numeros imaginarios" ;
		}
	}else{
		
		cout<<"vuelve a intentarlo ";
	}
	return 0;
}
