#include <iostream>
#include <vector>
#include <string>

using namespace std;


void buscarPorPosicion(const vector<string>& nombres, const vector<string>& vecindades, const vector<int>& dias, const vector<int>& meses, const vector<int>& anos, int posicion) {
    if (posicion >= 1 && posicion <= nombres.size()) {
        cout << "\nPersona encontrada en la posición " << posicion << ":" << endl;
        cout << "Nombre: " << nombres[posicion - 1] << endl;
        cout << "Vecindad: " << vecindades[posicion - 1] << endl;
        cout << "Fecha de nacimiento: " << dias[posicion - 1] << "/" << meses[posicion - 1] << "/" << anos[posicion - 1] << endl;

     
        int edad = 2024 - anos[posicion - 1];
        if (meses[posicion - 1] > 2 || (meses[posicion - 1] == 2 && dias[posicion - 1] > 16)) {
            edad--;
        }
        cout << "Edad: " << edad << " años" << endl;
        if (edad >= 18) {
            cout << "Es mayor de edad" << endl;
        } else {
            cout << "Es menor de edad" << endl;
        }
    } else {
        cout << "No hay ninguna persona en la posición " << posicion << endl;
    }
}


void buscarPorNombre(const vector<string>& nombres, const vector<string>& vecindades, const vector<int>& dias, const vector<int>& meses, const vector<int>& anos, const string& nombre) {
    bool encontrado = false;
    for (size_t i = 0; i < nombres.size(); ++i) {
        if (nombres[i] == nombre) {
            encontrado = true;
            cout << "\nPersona encontrada con el nombre '" << nombre << "':" << endl;
            cout << "Posición en la fila: " << i + 1 << endl;
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Vecindad: " << vecindades[i] << endl;
            cout << "Fecha de nacimiento: " << dias[i] << "/" << meses[i] << "/" << anos[i] << endl;

          
            int edad = 2024 - anos[i];
            if (meses[i] > 2 || (meses[i] == 2 && dias[i] > 16)) {
                edad--;
            }
            cout << "Edad: " << edad << " años" << endl;
            if (edad >= 18) {
                cout << "Es mayor de edad" << endl;
            } else {
                cout << "Es menor de edad" << endl;
            }
        }
    }
    if (!encontrado) {
        cout << "No se encontró ninguna persona con el nombre '" << nombre << "'" << endl;
    }
}

int main() {
    vector<string> nombres;
    vector<string> vecindades;
    vector<int> dias;
    vector<int> meses;
    vector<int> anos;
    
    cout<<"--------------------BIENVENIDO A RENAP--------------------\n\n\n";

    
    int cantidadPersonas;
    cout << "Ingrese la cantidad de personas en la fila: ";
    cin >> cantidadPersonas;

    for (int i = 0; i < cantidadPersonas; ++i) {
        string nombre, vecindad;
        int dia, mes, anno;

        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> nombre;
        nombres.push_back(nombre);
        
        cout << "Vecindad: ";
        cin >> vecindad;
        vecindades.push_back(vecindad);

        cout << "Fecha de nacimiento (dd mm aaaa): ";
        cin >> dia >> mes >> anno;
        dias.push_back(dia);
        meses.push_back(mes);
        anos.push_back(anno);
    }

 
    cout << "\nDatos ingresados y calculo de mayoria de edad:" << endl;
    for (int i = 0; i < cantidadPersonas; ++i) {
        cout << "\nPersona " << i + 1 << ":" << endl;
        cout << "Nombre: " << nombres[i] << endl;
        cout << "Vecindad: " << vecindades[i] << endl;
        cout << "Fecha de nacimiento: " << dias[i] << "/" << meses[i] << "/" << anos[i] << endl;

      
        int edad = 2024 - anos[i];
        if (meses[i] > 2 || (meses[i] == 2 && dias[i] > 16)) {
            edad--;
        }
        cout << "Edad: " << edad << " annos" << endl;
        if (edad >= 18) {
            cout << "Es mayor de edad" << endl;
        } else {
            cout << "Es menor de edad" << endl;
        }
    }

   
    char opcion;
    cout << "\n¿Desea buscar a una persona por su posicion en la fila (p) o por su nombre (n)? ";
    cin >> opcion;

    if (opcion == 'p' || opcion == 'P') {
        int posicionBusqueda;
        cout << "Ingrese la posicion de la persona que desea buscar: ";
        cin >> posicionBusqueda;
        buscarPorPosicion(nombres, vecindades, dias, meses, anos, posicionBusqueda);
    } else if (opcion == 'n' || opcion == 'N') {
        string nombreBusqueda;
        cout << "Ingrese el nombre de la persona que desea buscar: ";
        cin >> nombreBusqueda;
        buscarPorNombre(nombres, vecindades, dias, meses, anos, nombreBusqueda);
    } else {
        cout << "Opción no valida. Gracias por usar el programa." << endl;
    }

    return 0;
}


