//Taller 1
//punto 2
#include <iostream>
#include <fstream>

using namespace std;

// Estructura de datos para el usuario: nombre, número de identificación y número celular
struct Usuario {
    string nombre;
    long int id;
    long int celular;
};

int main() {
    // Puntero a la estructura de datos
    Usuario *miUsuario = new Usuario;

    // Tomar los datos del usuario
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, miUsuario->nombre);

    cout << "Ingrese la id del cliente: ";
    cin >> miUsuario->id;

    cout << "Ingrese el telefono del cliente: ";
    cin >> miUsuario->celular;

    // Abrir el archivo para imprimir el recibo
    ofstream archivoRecibo("Recibo.txt");

    // Imprimir el recibo en el archivo de texto
    archivoRecibo << "RECIBO" << endl;
    archivoRecibo << "Nombre: " << miUsuario->nombre << endl;
    archivoRecibo << "Id: " << miUsuario->id << endl;
    archivoRecibo << "Celular: " << miUsuario->celular << endl;

    // Cerrar el archivo de texto y liberar la memoria del puntero
    archivoRecibo.close();
    delete miUsuario;

    return 0;
}