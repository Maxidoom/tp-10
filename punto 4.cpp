#include<iostream>
#include<cstring>
using namespace std;

class Socio {
    char nombre[40];
    int antiguedad;
public:
    Socio();
    Socio(const char nom[40], int ant);
    void cargar();
    char* retornarNombre();
    int retornarAntiguedad();
};

Socio::Socio() {
    strcpy(nombre, "");
    antiguedad = 0;
}

Socio::Socio(const char nom[40], int ant) {
    strcpy(nombre, nom);
    antiguedad = ant;
}

void Socio::cargar() {
    cout << "Ingrese nombre del socio: ";
    cin >> nombre;
    cout << "Ingrese antiguedad (en años): ";
    cin >> antiguedad;
}

char* Socio::retornarNombre() {
    return nombre;
}

int Socio::retornarAntiguedad() {
    return antiguedad;
}

class Club {
    Socio socio1, socio2, socio3;
public:
    Club();
    void socioMayorAntiguedad();
};

Club::Club() {
    cout << "Carga del Socio 1:"<<endl;
    socio1.cargar();
    cout << "Carga del Socio 2:"<<endl;
    socio2.cargar();
    cout << "Carga del Socio 3:"<<endl;
    socio3.cargar();
}

void Club::socioMayorAntiguedad() {
    Socio mayor = socio1;
    if (socio2.retornarAntiguedad() > mayor.retornarAntiguedad()) {
        mayor = socio2;
    }
    if (socio3.retornarAntiguedad() > mayor.retornarAntiguedad()) {
        mayor = socio3;
    }
    cout << "El socio con mayor antiguedad es: " << mayor.retornarNombre() 
         << " con " << mayor.retornarAntiguedad() << " años."<<endl;
}

int main() {
    Club c;
    c.socioMayorAntiguedad();
    return 0;
}