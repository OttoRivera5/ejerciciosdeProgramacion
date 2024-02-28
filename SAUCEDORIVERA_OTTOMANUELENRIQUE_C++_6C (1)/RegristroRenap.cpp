#include <iostream>
#include <vector>

using namespace std;

struct Persona {
    char nombre[50];
    char vecindad[50];
    int diaNacimiento, mesNacimiento, anioNacimiento;
};

bool esMayorDeEdad(int dia, int mes, int anio) {
    int diaActual, mesActual, anioActual;
    cout << "Ingrese la fecha actual: ";
    cin >> diaActual >> mesActual >> anioActual;

    int edad = anioActual - anio;

    if (mesActual < mes || (mesActual == mes && diaActual < dia)) {
        edad--;
    }

    return edad >= 18;
}

int main() {
    vector<Persona> personas;

    char IngresarMas = 's';

    while (IngresarMas == 's' || IngresarMas == 'S') {
        Persona nuevaPersona;
        
        cout << "\nIngrese los datos de la persona:\n ";
        cout << "Nombre: ";
        cin >> nuevaPersona.nombre;
        cout << "Vecindad: ";
        cin >> nuevaPersona.vecindad;
        cout << "Fecha de nacimiento : ";
        cin >> nuevaPersona.diaNacimiento >> nuevaPersona.mesNacimiento >> nuevaPersona.anioNacimiento;

        if (esMayorDeEdad(nuevaPersona.diaNacimiento, nuevaPersona.mesNacimiento, nuevaPersona.anioNacimiento)) {
            cout << "Es mayor de edad.\n";
        } else {
            cout << "No es mayor de edad.\n";
        }

    }
    return 0;
}
