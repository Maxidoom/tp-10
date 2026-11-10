#include<iostream>
using namespace std;

class Persona {
protected:
	char nombre[40];
	int edad;
public:
	void cargarPersona();
	void imprimirPersona();
};

void Persona::cargarPersona() {
	cout<<"Ingrese nombre: ";
	cin>>nombre;
	cout<<"Ingrese edad: ";
	cin>>edad;
}

void Persona::imprimirPersona() {
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

class Empleado : public Persona {
	float sueldo;
public:
	void cargarSueldo();
	void imprimirSueldo();
};

void Empleado::cargarSueldo() {
	cout<<"Ingrese sueldo: ";
	cin>>sueldo;
}

void Empleado::imprimirSueldo() {
	cout<<"Sueldo: $"<<sueldo<<endl;
}

int main() {
	cout << "Objeto Persona"<<endl;
	Persona per1;
	per1.cargarPersona();
	cout << "Datos de la Persona:"<<endl;
	per1.imprimirPersona();

	cout << "Objeto Empleado"<<endl;
	Empleado emp1;
	emp1.cargarPersona();
	emp1.cargarSueldo();
	cout << "Datos del Empleado:"<<endl;
	emp1.imprimirPersona();
	emp1.imprimirSueldo();

	return 0;
}