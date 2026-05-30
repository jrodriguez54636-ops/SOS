#include <iostream>
using namespace std;

void Emergencia();
void Primeros_auxilios();
void Lista_hospitales();

int main() {

    int opcion;

    do {

        cout << "1. Emergencias"<<endl; 
        cout << "2. Primeros Auxilios"<<endl;
        cout << "3. Hospitales"<<endl;
        cout << "4. Salir"<<endl;
        cout << "Opcion: "<<endl;

        cin >> opcion;

        switch(opcion) {
//Opcion 1 --------------------------------------
        case 1:
            Emergencia();
            break;

//Opcion 2 --------------------------------------
        case 2:
            Primeros_auxilios();
            break;

//Opcion 3 --------------------------------------
            
        case 3:
            
            Lista_hospitales();
            break;
        }


//Opcion 4 --------------------------------------
    } while(opcion != 4);

    return 0;
}

void Lista_hospitales(){

    cout << "Hospitales disponibles: " << endl << "\n 1. San Pedro \n 2. Hospital Nino y la Mujer. \n 3. Hospital General." << endl;
    cout << endl;
}

void Primeros_auxilios(){

    cout << "Aplicando primeros auxilios......" << endl;
    cout << "Revivido :0" << endl;
    cout << endl;
}

void Emergencia() {

    cout << "Llamando al 911......"<<endl;
    cout << "---Operadora: 'Servicio de emergencias. Cual es su emergencia?.'" << endl;
    cout << endl;
}