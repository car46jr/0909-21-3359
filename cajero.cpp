
#include<iostream>
using namespace std;

int main() {
	float deposito,money,moneda,pin,retiro,saldo,saldo1,tarjeta;
	int eleccion;
	
	do {
		cout << "Ingresa tu Pin para entrar a tu usuario" << endl;
		cin >> pin;
		if (pin==2021) {
			cout << " Hola Carlos Gonzalez" << endl;
			cout << "Carnet: 0909-21-3359" << endl;
			cout << " Tienes Q 5,000.00 en tu cuenta" << endl;
			saldo = 5000;
			saldo1 = 650;
			do {
				cout << "Escoge que tipo de moneda utilizaras" << endl;
				cout << "1. Dollar" << endl;
				cout << "2. Quetzalez" << endl;
				
				cin >> moneda;
				if (moneda==2) {
					cout << "Elige que transaccion quieres realizar" << endl;
					cout << "1. Retiro" << endl;
					cout << "2. Depositar" << endl;
					cout << "3. Consultar Saldo" << endl;
					cout << "4. Salir" << endl;
					cin >> eleccion;
					switch (eleccion) {
					case 1:
						cout << "Cuanto Dinero quieres retirar" << endl;
						cin >> retiro;
						if (retiro>saldo) {
							cout << "La cantidad supera tu dinero actual" << endl;
							cout << "Tu dinero actual es de Q " << saldo << endl;
						} else {
							saldo = saldo-retiro;
							cout << "Tu dinero actual es de Q " << saldo << endl;
						}
						break;
					case 2:
						cout << "Cuanto Dinero quieres depositar" << endl;
						cin >> deposito;
						saldo = saldo+deposito;
						cout << "Tu dinero actual es de Q " << saldo << endl;
						break;
					case 3:
						cout << "Tu dinero actual es de Q " << saldo << endl;
						break;
					}
				} else {
					cout << "Convertimos nuestro saldo actual a dolares y quedaria asi" << endl;
					money = 5000/8;
					cout << "Tu saldo en dolares es de $" << money << endl;
					cout << "Elige que transaccion quieres realizar" << endl;
					cout << "1. Retiro" << endl;
					cout << "2. Depositar" << endl;
					cout << "3. Consultar Saldo" << endl;
					cout << "4. Salir" << endl;
					cin >> eleccion;
					switch (eleccion) {
					case 1:
						cout << "Cuanto Dinero quieres retirar" << endl;
						cin >> retiro;
						if (retiro>saldo1) {
							cout << "La cantidad supera tu dinero actual" << endl;
							cout << "Tu dinero actual es de $ " << saldo1 << endl;
						} else {
							saldo1 = saldo1-retiro;
							cout << "Tu dinero actual es de $ " << saldo1 << endl;
						}
						break;
					case 2:
						cout << "Cuanto Dinero quieres depositar" << endl;
						cin >> deposito;
						saldo1 = saldo1+deposito;
						cout << "Tu dinero actual es de $ " << saldo1 << endl;
						break;
					case 3:
						cout << "Tu dinero actual es de $ " << saldo1 << endl;
						break;
					}
				}
			} while (eleccion!=4);
		} else {
			cout << "Vuelve a intentarlo, ingrese el pin correcto" << endl;
		}
	} while (pin!=2021);
	return 0;
}

