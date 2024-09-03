#include <iostream>
using namespace std;

int main() {
    float area, perimetro, longitud, ancho;
    
    cout << "Ingrese la longitud del rectangulo" << endl;
    cin >> longitud;
    cout << "Ingrese el ancho del rectangulo" << endl;
    cin >> ancho;

    area = longitud * ancho;
    perimetro = 2 * (longitud + ancho);

    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}
