#include<iostream>
using namespace std;
int main(){
	
	for(int i = 0; i <= 100; i++){ //ciclo for para imprimir del 1 al 100
		
    if(i % 3 == 0 && i % 5 == 0){ // evaluamos si ambas son correctas ya se ejecuta el cout
        cout << i << " fizzbuzz" << endl;
        cout<<"\n"; //espacio en blanco despues de endl xd
        
    }else if(i % 3 == 0){ //si al dividir dentro de 3 el residuo es 0, es multiplo de 3
        cout << i << " fizz" << endl;
        cout<<"\n";
        
    }else if(i % 5 == 0){
        cout << i << " buzz" << endl; //si al dividir dentro de 5 el residuo es 0, es multiplo de 3
        cout<<"\n";
    }
}

	cout<<"Hola Mundo :D";
}
