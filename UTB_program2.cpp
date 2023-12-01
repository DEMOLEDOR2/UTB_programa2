#include <iostream>
using namespace std;
int main() {
    const int cantidadNumeros = 5;
    int numeros[cantidadNumeros];
    int suma = 0;

    for (int i = 0; i < cantidadNumeros; ++i) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }


    cout << "\nNumeros ingresados: ";
    for (int i = 0; i < cantidadNumeros; ++i) {
        cout << numeros[i] << " ";
    }

    
    double promedio = static_cast<double>(suma) / cantidadNumeros;
    cout << "\nPromedio: " << promedio <<endl;

    return 0;
}

