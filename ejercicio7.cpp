#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	
	int a, b, c, i, l;
	string user1, user2;
	c=0;
	i=0;
	
	cout<<"juegos de los dados! "<<endl;
	cout<<endl;
	
	cout<<"instrucciones: "<<endl;
	cout<<"ingresar 0 para iniciar el lanzamiento de dados aleatorios "<<endl;
	cout<<"quien gane tres rondas sera el ganador "<<endl;
	cout<<endl;
	
	cout<<"comenzemos! "<<endl;
	cout<<endl;
	cout<<"ingresar el nombre del jugador 1 "<<endl;
	cin>> user1;
	cout<<endl;
	cout<<"ingresar el nombre del jugador 2"<<endl;
	cin>> user2;
	cout<<endl;
	
	c=0;
	i=0;
	
	while(c<3 and i<3){
		
		do{
		
		cout<<"es el turno de "<<user1<<endl;
		cout<<"ingresa el numero 0 para iniciar el lanzamiento "<<endl;
		cin>> l;
		cout<<endl;
		 
		if(l==0){
			
			a= rand() % 6+1;
			
			cout<<"numero: "<< a<<endl;
			cout<<endl;
			
			
		}else{
			
			cout<<"error, vuelve a intentarlo";
			cout<<endl;
		}
	   }while(l!=0);
	   
	   do{
	   
		cout<<"es el turno de "<<user2<<endl;
		cout<<"ingresa el numero 0 para iniciar lanzamiento "<<endl;
		cin>> l;
		cout<<endl;
		
		if(l==0){
			
			b= rand() % 6+1;
			
			cout<<"numero: "<< b<<endl;
			cout<<endl;
			
		}else{
			
			cout<<"error, vuelve a intentarlo ";
			cout<<endl;
		}
	}while(l!=0);
		if(a<b){
			
			i=i+1;
			
			cout<<"resultado= punto para "<<user2<<"!!! "<<endl;
			cout<<endl;
			
		}else if(a>b){
			
			c=c+1;
			cout<<"resultado= punto para "<<user1<<"!!! "<<endl;
			cout<<endl;
			
		}else{
			
			cout<<"resultado= empate!!! "<<endl;
			cout<<endl;
			
		}
		
	}
	
	if(i<c){
		
		cout<<"el ganador es: "<<user1<<endl;
		cout<<"puntajes "<<endl;
		cout<<endl;
		cout<<user1<<"="<<c<<endl;
		cout<<user2<<"="<<i<<endl;
		
	}else{
		
		cout<<"el ganador es: "<<user2<<endl;
		cout<<"puntajes "<<endl;
		cout<<endl;
		cout<<user2<<"="<<i<<endl;
		cout<<user1<<"="<<c<<endl;
	}
}
