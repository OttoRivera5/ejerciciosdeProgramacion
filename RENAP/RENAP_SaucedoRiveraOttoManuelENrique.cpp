#include <iostream>
#include <vector>
#include <string>

using namespace std;

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

   
    cout << "\nDatos ingresados y el calculo de mayoría de edad:" << endl;
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

    return 0;
}
