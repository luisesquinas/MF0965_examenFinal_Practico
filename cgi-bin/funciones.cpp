#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    cout << "Content-type: text/html\n\n";

    // Obtén el parámetro de la URL
    string query = getenv("QUERY_STRING");
    string numberStr = query.substr(query.find("numero=") + 7);
    double numero = stod(numberStr); // Convertir el número de string a double

    double resultado = numero / 25;
    int resultadoFinal;

    // Lógica de redondeo
    if (resultado - floor(resultado) <= 0.2) {
        resultadoFinal = floor(resultado); // Redondear hacia abajo
    } else {
        resultadoFinal = ceil(resultado); // Redondear hacia arriba
    }

    // Mostrar el resultado
    cout << "<html><body>Resultado: " << resultadoFinal << "</body></html>";

    return 0;
}

