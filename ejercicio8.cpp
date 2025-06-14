#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int tragamonedas(int s ){
	return s*10;
}





int main(){
	
	int a, b, c, mon, apos;
	string r;
	
	cout<<"juego del tragamoneda "<<endl;
	cout<<"inicias con 100 monedas "<<endl;
	
	mon=100;
	
	do{
		
	cout<<"cuanto deseas apostar en esta ronda (1-10) "<<endl;
	cin>> apos;
	cout<< endl;
		
	a= rand( ) % 5+1;
	b= rand( ) % 5+1;
	c= rand( ) % 5+1;
	
	cout<<a<<"-"<<b<<"-"<<c<<endl;
	
	if(a==b and b==c and a==c){
	
	cout<<"has ganado: "<<tragamonedas(apos)<<endl;	
	}
		
	cout<<"deseas seguir jugando? (si o no) "<<endl;
	cin>>r;	
	}while(r=="si" or mon>0);
	
}