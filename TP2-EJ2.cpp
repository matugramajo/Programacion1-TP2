#include <iostream>
using namespace std;

int main(){
	float centimetros, metros;
	
	cout << "Ingrese la cantidad de centimetros a convertir a metros" << endl;
    cin >> centimetros;
    
    metros = centimetros * 0.01;
    
    
    cout << centimetros << " centimetros son " << metros << " metros." <<endl;
	
	return 0;
}
