#include <iostream>
using namespace std;

int main(){
	float pesos, reales, cotizacion;
	
	cout << "Ingrese cantidad de pesos a convertir a reales." << endl;
	cin >> pesos;
	cout << "Ingrese la cotizacion del dia" << endl;
	cin >> cotizacion;
	
	reales = pesos * cotizacion;
	
	cout << pesos << " pesos son " << reales << " reales. La cotizacion del dia es " << cotizacion << endl;
	
	return 0;
}
