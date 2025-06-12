#include<iostream>
#include<cmath>
using namespace std;
	
	
int main(){
	float r, pi, a;
	cout<<"ingrese el radio del circulo "<<endl;
	cin>> r;
	
	pi= M_PI;
	
	a= pi* pow(r,2);
	
	cout<<"el area del circulo es: "<<endl;
	cout<< a;
	
	
	return 0;
}
