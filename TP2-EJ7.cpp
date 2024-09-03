#include <iostream>
using namespace std;

int main(){
	string nombre, apellido, calle, localidad, provincia, pais, telefono;
	int edad, altura;
	
	cout << "Ingrese su nombre" << endl;
	cin >> nombre;
	cout << "Ingrese su apellido" << endl;
	cin >> apellido;
	cout << "Ingrese su edad" << endl;
	cin >> edad;
	cout << "Ingrese su direccion" << endl;
    cin >> calle >> altura; 
	cout << "Ingrese su localidad" << endl;
	cin >> localidad;
	cout << "Ingrese su provincia" << endl;
	cin >> provincia;
	cout << "Ingrese su pais" << endl;
	cin >> pais;
	cout << "Ingrese su telefono" << endl;
	cin >> telefono;
	
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
	cout << "Edad: " << edad << endl;
	cout << "Direccion: " << calle << " " << altura << endl;
	cout << "Localidad: " << localidad << endl;
	cout << "Provincia: " << provincia << endl;
	cout << "Pais: " << pais << endl;
	cout << "Telefono: " << telefono << endl;
	
}
