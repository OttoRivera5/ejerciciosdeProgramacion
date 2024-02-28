#include <iostream>

int main() {
    int vector[15];

    
    std::cout << "Ingrese los 20 valores del vector:" << std::endl;
    for (int i = 0; i < 15; ++i) {
        std::cout << "Ingrese el valor " << i + 1 << ": ";
        std::cin >> vector[i];
    }

    // Procesar los valores
    std::cout << "\nDatos ingresados y su nueva mejora:\n";
    for (int i = 0; i < 15; ++i) {
        int nuevo_valor;
        if (vector[i] % 2 == 0) {  
            nuevo_valor = vector[i] + 1;
        } else {  
            nuevo_valor = vector[i] - 2;
        }
        
        if (nuevo_valor < 0) {
            nuevo_valor = 0;
        }
        std::cout << "Valor original: " << vector[i] << ", Mejora: " << nuevo_valor << std::endl;
    }

    return 0;
}
