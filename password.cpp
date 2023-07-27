#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para mostrar el banner de inicio
void MostrarBanner() {
    cout << R"(
  ____        _        
 |  _ \  __ _| |_ __ _ 
 | | | |/ _` | __/ _` |
 | |_| | (_| | || (_| |
 |____/ \__,_|\__\__,_|
                      
)" << endl;
}

// Función para generar una contraseña normal
string GenerarContrasenaNormal() {
    const string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    const int longitud = 8;

    string contrasena;

    for (int i = 0; i < longitud; i++) {
        int indice = rand() % caracteres.length();
        contrasena += caracteres[indice];
    }

    return contrasena;
}

// Función para generar una contraseña fuerte
string GenerarContrasenaFuerte() {
    const string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*";
    const int longitud = 12;

    string contrasena;

    for (int i = 0; i < longitud; i++) {
        int indice = rand() % caracteres.length();
        contrasena += caracteres[indice];
    }

    return contrasena;
}

// Función para generar una contraseña de fuerza bruta
string GenerarContrasenaFuerzaBruta() {
    const string caracteres = "abcdefghijklmnopqrstuvwxyz";
    const int longitud = 6;

    string contrasena;

    for (int i = 0; i < longitud; i++) {
        int indice = rand() % caracteres.length();
        contrasena += caracteres[indice];
    }

    return contrasena;
}

int main() {
    srand(time(nullptr));

    MostrarBanner();

    int opcion;
    do {
        cout << "Generador de passsword" << endl;
        cout << "1. Generar password normal" << endl;
        cout << "2. Generar password fuerte" << endl;
        cout << "3. Generar password debil" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Contraseña Normal: " << GenerarContrasenaNormal() << endl;
                break;
            case 2:
                cout << "Contraseña Fuerte: " << GenerarContrasenaFuerte() << endl;
                break;
            case 3:
                cout << "Contraseña de Fuerza Bruta: " << GenerarContrasenaFuerzaBruta() << endl;
                break;
            case 4:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Inténtelo nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcion != 4);

    return 0;
}
