#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char calcularLetraDNI(const string& dni) {
    if (dni.length() != 8) {
        throw invalid_argument("El DNI debe tener 8 dígitos.");
    }

    long dniNumber = stoul(dni);
    int mod = dniNumber % 23;

    const string letras = "TRWAGMYFPDXBNJZSQVHLCKE";

    return letras[mod];
}

int main() {
    string dni;
    cout << "Introduce el DNI sin letra: ";
    cin >> dni;

    try {
        char letra = calcularLetraDNI(dni);
        string dniCompleto = dni + letra;
        cout << "DNI completo: " << dniCompleto << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
