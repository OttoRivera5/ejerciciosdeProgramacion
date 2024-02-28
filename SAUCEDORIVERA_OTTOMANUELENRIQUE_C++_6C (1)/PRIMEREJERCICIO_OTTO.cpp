#include <iostream>
using namespace std;

int main() {
    const int tam = 10; 
    int vector[tam];

    
    cout << "Ingrese " << tam << " elementos del vector:" << endl;
    for(int i = 0; i < tam; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

  
    bool quintaPositiva = vector[4] > 0;
    bool primeraNegativa = vector[0] < 0;
    bool ultimaCero = vector[tam - 1] == 0;

   
    cout << "¿fila 5ta es positiva? " << (quintaPositiva ? "Si" : "No") << endl;
    cout << "¿La 1ra posicion es negativa?? " << (primeraNegativa ? "Si" : "No") << endl;
    cout << "¿La posicion 10 es 0? " << (ultimaCero ? "Si" : "No") << endl;

    return 0;
}
