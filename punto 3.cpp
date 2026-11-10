#include<iostream>
using namespace std;

class Punto {
	int x;
	int y;
public:
	Punto();
	Punto(int _x, int _y);
	void imprimir();
};

Punto::Punto() {
	x = 0;
	y = 0;
}

Punto::Punto(int _x, int _y) {
	x = _x;
	y = _y;
}

void Punto::imprimir() {
	cout << "Coordenadas = x: " << x << ", y: " << y << "\n";
}

int main() {
	Punto p1;
	Punto p2(5, 10);

	cout << "Punto 1 (por defecto): ";
	p1.imprimir();

	cout << "Punto 2 (con parametros): ";
	p2.imprimir();

	return 0;
}