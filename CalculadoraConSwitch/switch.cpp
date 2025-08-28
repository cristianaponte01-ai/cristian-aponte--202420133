#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, resultado;
    char operation; // Char - Switch para (+, -, *, /, %)

    //Datos del usuario
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << "Ingrese la operacion: (+, -, *, /, %): ";
    cin >> operation;

    //Uso del switch 
    switch (operation) {
        case '+':
            resultado = numero1 + numero2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break; 


        case '-':
            resultado = numero1 - numero2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;
        
         case '*':
            resultado = numero1 * numero2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;

         case '/':
            resultado = numero1 / numero2;
            cout << "El resultado de la division es: " << resultado << endl;
            break;

         case '%':
            resultado = numero1 % numero2;
            cout << "El resultado del modulo es: " << resultado << endl;
            break;

        default:
        cout <<"ERROR: escribir alguna operacion entre +, -, *, /, %" << endl;
    }

    return 0;

}