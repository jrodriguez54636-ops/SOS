#include <iostream>
using namespace std;

void emergencia();

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

        case 1:
            emergencia();
            break;
        }

    } while(opcion != 4);

    return 0;
}

void emergencia() {

    cout << "911"<<endl;
}