#include <iostream>
#include <conio.h>
int main() {
	int opcion;
	using namespace std; // declaracion de variables
	int a,b,s,r,m,d;


	cout << "\nIngrese una opcion: ";
	cout << "\n 1 suma 2 resta 3 multiplicacion 4 divicion  "; // menu para que el usuario escoja lo que realizaea
	cin >> opcion;

	switch (opcion) {
		case 1:
			cout << "\n ingrese numero a:"; // ingreso de datos
			cin >>a;
			cout << "\n ingrese numero b:";
			cin >>b;
			s=a+b;
			cout <<"\n la suma de "<<a<<"+"<<b<<" es:"<<s;

		case 2:
			cout << "\n ingrese numero a:";
			cin >>a;
			cout << "\n ingrese numero b:";
			cin >>b;
			r=a-b;
			cout <<"\n la resta de "<<a<<"+"<<b<<" es:"<<r;
			break;

		case 3:
			cout << "\n ingrese numero a:";
			cin >>a;
			cout << "\n ingrese numero b:";
			cin >>b;
			m=a*b;
			cout <<"\n la multplicacion  de "<<a<<"+"<<b<<" es:"<<m;
			break;

		case 4:
			cout << "\n ingrese numero a:";
			cin >>a;
			cout << "\n ingrese numero b:";
			cin >>b;
			d=a/b;
			cout <<"\n la divicion de "<<a<<"+"<<b<<" es:"<<d;
			break;

		case 0:
			cout << "error";
	}

	getch();

	return 0;
}