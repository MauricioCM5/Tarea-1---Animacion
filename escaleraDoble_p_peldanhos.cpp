//Mauricio Colque Morales - CCOMP2-1
//Escalera de 'p' peldanhos 

/*He usado la funci�n sleep de Windows.h para que se aprecie
mejor la animaci�n*/

#include<iostream>
#include<stdlib.h>
#include<Windows.h>
using namespace std;

//Funci�n auxiliar que cre� para crear escalones
//Paso como argumento la cantidad de escalones y la posici�n 'p' donde est� la persona
void escalon(int persona, int p){
  
	int temp2 = p*4 ; //Para los espacios
  int controlador = 0;
	//Un valor secundario
	int n = p; 
	int esp = ((p-1)*2)*4;//Los espacios en blanco por cada escalon
	//PARA EL PRIMER PISO
	//Para el escal�n de la derecha
	if(persona == -n)
		{cout<<"_P_";
		}
	else{cout<<"___";}
			
	for(int i = 0; i<esp+5; i++){
			cout<<" ";
		}
	//Para el escal�n del fondo
	if(persona == n){
		cout<<"_P_\n";
		}
	else{cout<<"___\n";}
			
	//Para los otros escalones
	int temp_3 = 0; // para laterales
  int aumento = -7 + (4*(p-1)); // auxiliar
	int temp_4 = (p*4) + aumento; // para espacios del medio

  int ajio = p-1;  
	for(int i = 0; i< p-1; i++){
			//For para los espacios de la izquierda
			for(int i = 0; i<temp_3*4 + 3; i++){
				cout<<" ";
			}
				
			if(persona == -ajio){
					cout<<"|_P_";
				}
			else{cout<<"|___";}
			
			for(int i = temp_4; i>0; i--){
					cout<<" ";
				}
			//Para el escal�n del fondo
			if(persona == ajio){
					cout<<"_P_|\n";
				}
			else{cout<<"___|\n";}
				
			temp_3++;
			temp_4-=(8);
      ajio--;
      }

	//Para el escal�n 0
	for(int i = 0; i< temp2-1; i++){
		cout<<" ";
		}	
	if(persona == 0){
	  cout<<"|_P_|\n";
		}
		else{ cout<<"|___|\n";
		}
	
	

}

//Funci�n que hace la animaci�n de la escalera doble, se pasa una cantidad de
// 'p' peldanhos
void escaleraDoble(int p){
	if(p >= 1){
		for(int i = -p; i < p+1; i++){
      		escalon(i, p);
      		Sleep(400);
      		system("cls");
   	 }	
    	for(int i = p-1; i> -p-1; i--){
      		escalon(i, p);
     	 	Sleep(400);
     	 	system("cls");
   		 }
    
	}
	else{
    	cout<<"_P_\n";
		}
	

}


//Funci�n principal
int main(){
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	
	escaleraDoble(n);
	
	
	return 0;
}

