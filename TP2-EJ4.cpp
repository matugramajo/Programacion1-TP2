#include <iostream>
using namespace std;

int main(){
	float lado, altura, area, perimetro;
	
	cout << "Ingrese la longitud de uno de los lados del triangulo equilatero" << endl;
	cin >> lado;
	cout << "Ingrese la altura del triangulo equilatero" << endl;
	cin >> altura;
	
	area = (lado * altura) / 2;
	perimetro = lado * 3;
	
	cout << "El area del triangulo es " << area << " y el perimetro " << perimetro << endl;
	
	return 0;
	
}
