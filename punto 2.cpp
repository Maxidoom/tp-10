#include<iostream>
using namespace std;

class VectorProcesado {
	int vec[5];
	string nombre;
	int edad;
public:
	VectorProcesado();
	void imprimir();
	void imprimir(int hasta);
	void imprimir(int desde, int hasta);
	void imprimirDatosPersona();
	void verificarEdad();
};

VectorProcesado::VectorProcesado() {
	cout << "Ingrese el nombre: ";
	cin >> nombre;
	cout << "Ingrese la edad: ";
	cin >> edad;
	cout << "Carga de los 5 elementos del vector:"<<endl;
	for(int f = 0; f < 5; f++) {
		cout << "Elemento " << f << ": ";
		cin >> vec[f];
	}
}

void VectorProcesado::imprimir() {
	cout << "Vector completo: ";
	for(int f = 0; f < 5; f++) {
		cout << vec[f] << " ";
	}

}

void VectorProcesado::imprimir(int hasta) {
	cout << "Vector hasta la posicion " << hasta << ": ";
	for(int f = 0; f <= hasta && f < 5; f++) {
		cout << vec[f] << " ";
	}

}

void VectorProcesado::imprimir(int desde, int hasta) {
	cout << "Vector desde " << desde << " hasta " << hasta << ": ";
	for(int f = desde; f <= hasta && f < 5; f++) {
		cout << vec[f] << " ";
	}

}

void VectorProcesado::imprimirDatosPersona() {
	cout << "Nombre: " << nombre <<endl;
	cout << "Edad: " << edad <<endl;
}

void VectorProcesado::verificarEdad() {
	if (edad >= 18) {
		cout << "Es mayor de edad."<<endl;
	} else {
		cout << "No es mayor de edad."<<endl;
	}
}

int main() {
	VectorProcesado v;
	cout << "Resultados"<<endl;
	v.imprimirDatosPersona();
	v.verificarEdad();
	v.imprimir();
	v.imprimir(2);
	v.imprimir(1, 3);
	return 0;
}