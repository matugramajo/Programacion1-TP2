#include <iostream>
using namespace std;

int main(){
	const int VELOCIDAD_SONIDO = 343;
	int tiempo, distancia;
	
	cout << "Ingrese el tiempo transcurridos entre el relampago y el trueno" << endl;
	cin >> tiempo;
	
	distancia = tiempo * VELOCIDAD_SONIDO;
	
	cout << "La tormenta se encuentra a " << distancia << " metros." << endl;
	
	return 0;
}
