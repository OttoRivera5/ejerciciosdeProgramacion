#include <iostream>
#include <vector>
#include <string>

using namespace std;



void buscarPersona(const vector<string>& nombres, const vector<string>& vecindades, const vector<int>& dias, const vector<int>& meses, const vector<int>& anos, int posicion) {
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


    cout << "\nDatos ingresados y cálculo de mayoría de edad:" << endl;
    for (int i = 0; i < cantidadPersonas; ++i) {
        cout << "\nPersona " << i + 1 << ":" << endl;
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

 
    char opcion;
    cout << "\n¿Desea buscar a una persona por su posición en la fila? (s/n): ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') {
        int posicionBusqueda;
        cout << "Ingrese la posición de la persona que desea buscar: ";
        cin >> posicionBusqueda;
        buscarPersona(nombres, vecindades, dias, meses, anos, posicionBusqueda);
    } else {
        cout << "Gracias por usar el programa." << endl;
    }

    return 0;
}

