#include <iostream>

// Declaracion de las funciones 
int sumar(int a, int b);
void imprimirResultado(int resultado);

int main() {
    // Ejemplo de uso de las funciones
    int num1, num2;
    std::cout << "ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "ingrese el segundo numero: ";
    std::cin >> num2;

    // Llamada a la funcion de suma
    int resultado = sumar(num1, num2);

    // Llamada a la funcion de impresion
    imprimirResultado(resultado);

    return 0;
}

int sumar(int a, int b) {
    return a + b;
}

// Definicion de la funcion de impresion
void imprimirResultado(int resultado) {
    std::cout << "El resultado de la suma es: " << resultado << std::endl;
}