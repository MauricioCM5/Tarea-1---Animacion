//Mauricio Colque Morales - CCOMP2-1
//Escalera doble - Animación del -3 al 3 y viceceversa
/*He usado la función sleep() para que se pueda apreciar 
la animación mejor*/

#include<iostream>
#include<stdlib.h>//Librería para el "cls" y para system("pause")
#include <Windows.h>
#include <cstdlib>
using namespace std;


//Función que crea la escalera doble
void EscaleraDoble(int n){
	if(n == -3){
    cout<<"_P_";
  	}
  	else{cout<<"___";}
  	//Para crear los espacios de la primera fila
	for(int i = 0 ; i<19 ; i++){
    	cout<<" ";
  		}
  	if(n == 3){
    	cout<<"_P_\n";
  	}
  	else{cout<<"___\n";};
  	
	  //Segundo nivel
  	cout<<"   |";
  	if(n == -2){
    	cout<<"_P_";
  	}
  	else{cout<<"___";}

  	for(int i = 0; i<11; i++){
    	cout<<" ";
  	}

  	if(n == 2){
    	cout<<"_P_|\n";
  	}
  	else{cout<<"___|\n";}
	

	for(int i = 0; i<7; i++){
		cout<<" ";
	}
	
	//Primer nivel
 	 if(n == -1){
    	cout<<"|_P_";
  	}
  	else{cout<<"|___";}
  	cout<<"   ";
  
  	if(n == 1){
    	cout<<"_P_|\n";  
  	}
  	else{cout<<"___|\n";}
	
	//El escalón cero
	for(int i = 0; i<11; i++){
		cout<<" ";
	}
	if(n == 0){
		cout<<"_P_";
	}
	
	else{cout<<"___";
	}
	cout<<"\n";
}

//Función principal
int main(){
	
	//La primer animación
	for(int i = -3; i<4; i++){
		EscaleraDoble(i);
		Sleep(400);
		system("cls");
		
	}
	
	//La animación en reversa
	for(int i = 2; i>-4; i--){
		EscaleraDoble(i);
		Sleep(400);
		system("cls");
	}
	
	system("pause");
	return 0;
}
