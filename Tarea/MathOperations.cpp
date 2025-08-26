#include <iostream>

using namespace std;

int main() {
    
    int numero1, numero2;

    cout <<"Ingrese su numero: ";
    cin >> numero1;

    cout <<"Ingrese su segundo numero: ";
    cin >> numero2;

    int  Suma, Resta, Multiplicacion, Divsion, Modulo;

    int Resultado;

    // 1 = Suma, // 2 = Resta, // 3 = Multiplicaion, // 4 = Division, // 5 = Modulo;

    Suma = numero1 + numero2;
    Resta = numero1 - numero2;
    Multiplicacion = numero1 * numero2;
    Divsion = numero1 / numero2;
    Modulo = numero1 % numero2;

    cout << "El resultado para suma es: ";
    cout << Suma << endl;

    cout << "El resultado para resta es: ";
    cout << Resta << endl;

    cout << "El resultado para multiplicacion es: ";
    cout << Multiplicacion << endl;

    cout << "El resultado para division es: ";
    cout << Divsion << endl;

    cout << "El resultado para modulo es: ";
    cout << Modulo << endl;

    return 0;





}