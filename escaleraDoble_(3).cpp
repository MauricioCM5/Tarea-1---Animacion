//Mauricio Colque Morales - CCOMP2-1
//Escalera doble - Animaci�n del -3 al 3 y viceceversa
/*He usado la funci�n sleep() para que se pueda apreciar 
la animaci�n mejor*/

#include<iostream>
#include<stdlib.h>//Librer�a para el "cls" y para system("pause")
#include <Windows.h>
#include <cstdlib>
using namespace std;


//Funci�n que crea la escalera doble
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
	
	//El escal�n cero
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

//Funci�n principal
int main(){
	
	//La primer animaci�n
	for(int i = -3; i<4; i++){
		EscaleraDoble(i);
		Sleep(400);
		system("cls");
		
	}
	
	//La animaci�n en reversa
	for(int i = 2; i>-4; i--){
		EscaleraDoble(i);
		Sleep(400);
		system("cls");
	}
	
	system("pause");
	return 0;
}
