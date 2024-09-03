#include <iostream>
using namespace std;


int main(){
	const float PI = 3.141592;
	float radio, area, perimetro;
	
	cout << "Ingrese el radio de la circunferencia" << endl;
	cin >> radio;
	
	area = PI * (radio * radio);
	perimetro = PI * radio;
	
	cout << "El area de la circuenferencia es " << area << " y el perimetro " << perimetro << endl;
	
	return 0;
}
