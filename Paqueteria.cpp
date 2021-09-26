#include "iostream"  // Biblioteca estandar que permite entradas y salidas 
#include "string"	// * TEXTO */
#include<stdio.h> // Incluye las funciones, constantes y macros desde la librería de Entrada / Salida estándard (standar input/output)

using namespace std;
 int main() {
 	float opcion1,peso,envio_paque,largo,ancho,altura,Peso_volu,tarifa,tarifa2,tarifa3; // numeros decimales
 	int opc2,Elec_Menu,envio_doc,elec_paque; // opcion entero 
 	
 	// menu de ingreso
		cout << "Bienvenido Estimado Cliente";
		cout<< "Estos serian nuestros Productos a enviar"<<endl;
		cout << "1.Documentos " << endl;
		cout << "2.Paqueteria" << endl;
		cout << "3.Mobiliario" << endl;
		cout << "4.Respuestos" << endl;
		cout << "5.Art. Electronicos" << endl;
		cout << "6.Salir" << endl;
		cin >> Elec_Menu;                     
		
		switch(Elec_Menu){
	case 1: 	// eleccion de donde sera enviado el paquete
			cout<<"Eligue a que direccion quieres enviar, donde ingresa el km dado"<<endl;
		cout << "1.Guatemala (10 Km)" << endl;	
			cout << "2.Izabal (300 km)" << endl;
			cout << "3.Petén (460 km)" << endl;
			cout << "4.Chiquimula (178 km)" << endl;
			cout << "5.Retalhuleu (200 km)" << endl;
		
		cin>>envio_doc; //formula para determinar el pago (pero aqui siempre sera 40 ya que asi lo indica el parcial).
		cout<< "El total del envio es de: Q40.00";
		
		break;
		case 2:
		
			cout<<"Sabe el peso del paquete"<<endl;
		cout << "1.Si (Peso Real)" << endl;
		cout << "2.No (Peso Volumetrico)" << endl;
		cin>>elec_paque;
		
	  		switch(elec_paque){
			case 1: // peso real con formula
				cout<< "Ingrese el peso del paquete"<<endl;
				cin>>peso;
				if(peso<=50){
					// eleccion de donde sera enviado el paquete
				cout<<"Eligue a que direccion quieres enviar, donde ingresa el km dado"<<endl;
			cout << "1.Guatemala (10 Km)" << endl;	
			cout << "2.Izabal (300 km)" << endl;
			cout << "3.Petén (460 km)" << endl;
			cout << "4.Chiquimula (178 km)" << endl;
			cout << "5.Retalhuleu (200 km)" << endl;
			cin>>envio_paque;
			//formula para ver el precio a pagar 
			tarifa=peso*2.5;
			tarifa2=envio_paque*0.13;
			tarifa3=tarifa+tarifa2;
			cout<< "El total a pagar es de:"<< tarifa3;
			}
			else{
				("Exceso de Peso");
				cout<<"Exceso de Peso";
			}
			break;
			case 2: // peso volumetrico
				cout<<"Ingrese las medias del paquete"<<endl;
				cout<<"Largo"<<endl;
				cin>>largo;
				cout<<"Ancho"<<endl;
				cin>>ancho;
				cout<<"Altura"<<endl;
				cin>>altura;
				
				
			Peso_volu=(largo*ancho*altura)/2272;
							// eleccion de donde sera enviado el paquete
			cout<<"Eligue a que direccion quieres enviar, donde ingreses el km dado"<<endl;
			cout << "1.Guatemala (10 Km)" << endl;	
			cout << "2.Izabal (300 km)" << endl;
			cout << "3.Petén (460 km)" << endl;
			cout << "4.Chiquimula (178 km)" << endl;
			cout << "5.Retalhuleu (200 km)" << endl;
			cin>>envio_paque;
			
			tarifa2=envio_paque*0.13;
			tarifa3=Peso_volu+tarifa2;
			
				cout<<"El peso volumetrico es de" <<Peso_volu<<endl;
			cout<<"El total a pagar es de"<< tarifa3;
			}
			
	case 3:
			cout<<"Sabe el peso del Mobiliario"<<endl;
		cout << "1.Si (Peso Real)" << endl;
		cout << "2.No (Peso Volumetrico)" << endl;
		cin>>elec_paque;
		
	  		switch(elec_paque){
			case 1: // peso real con formula
				cout<< "Ingrese el peso del mobiliario"<<endl;
				cin>>peso;
				if(peso<=50){
				// eleccion de donde sera enviado el mobiliario
				cout<<"Eligue a que direccion quieres enviar el mobiliario en el Km dado"<<endl;
			cout << "1.Guatemala (10 Km)" << endl;	
			cout << "2.Izabal (300 km)" << endl;
			cout << "3.Petén (460 km)" << endl;
			cout << "4.Chiquimula (178 km)" << endl;
			cout << "5.Retalhuleu (200 km)" << endl;
			cin>>envio_paque;
			
			tarifa=peso*2.5; // formulas para ver cuanto pagar 
			tarifa2=envio_paque*0.13;
			tarifa3=tarifa+tarifa2;
			cout<< "El total a pagar es de:"<< tarifa3;
			}
			else{
				("Exceso de Peso");
				cout<<"Exceso de Peso";
			}
			break;
			case 2: // peso volumetrico
				cout<<"Ingrese las medias del mobiliario"<<endl;
				cout<<"Largo"<<endl;
				cin>>largo;
				cout<<"Ancho"<<endl;
				cin>>ancho;
				cout<<"Altura"<<endl;
				cin>>altura;
				
			Peso_volu=(largo*ancho*altura)/2272;
		// eleccion de donde sera enviado el repuesto
			cout<<"Eligue a que direccion quieres enviar los repuesto"<<endl;
			cout << "1.Guatemala (10 Km)" << endl;	
			cout << "2.Izabal (300 km)" << endl;
			cout << "3.Petén (460 km)" << endl;
			cout << "4.Chiquimula (178 km)" << endl;
			cout << "5.Retalhuleu (200 km)" << endl;
			cin>>envio_paque;
			
			tarifa2=envio_paque*0.13;
			tarifa3=Peso_volu+tarifa2;
	
				cout<<"El peso volumetrico es de"<< Peso_volu<<endl;
			cout<<"El total a pagar es de"<< tarifa3;
		}
		
	case 4:
			cout<<"Sabe el peso del repuesto"<<endl;
		cout << "1.Si (Peso Real)" << endl;
		cout << "2.No (Peso Volumetrico)" << endl;
		cin>>elec_paque;
		
	  		switch(elec_paque){
			case 1: // peso real con formula
				cout<< "Ingrese el peso del repuesto"<<endl;
				cin>>peso;
				if(peso<=50){
				// eleccion de donde sera enviado el repuesto
				cout<<"Eligue a que direccion quieres enviar el mobiliario en el Km dado"<<endl;
			cout << "1.Guatemala (10 Km)" << endl;	
			cout << "2.Izabal (300 km)" << endl;
			cout << "3.Petén (460 km)" << endl;
			cout << "4.Chiquimula (178 km)" << endl;
			cout << "5.Retalhuleu (200 km)" << endl;
			cin>>envio_paque;
			
			tarifa=peso*2.5; // formulas para ver cuanto pagar 
			tarifa2=envio_paque*0.13;
			tarifa3=tarifa+tarifa2;
			cout<< "El total a pagar es de:"<< tarifa3;
			}
			else{
				("Exceso de Peso");
				cout<<"Exceso de Peso";
			}
			break;
			case 2: // peso volumetrico
				cout<<"Ingrese las medias del repuesto"<<endl;
				cout<<"Largo"<<endl;
				cin>>largo;
				cout<<"Ancho"<<endl;
				cin>>ancho;
				cout<<"Altura"<<endl;
				cin>>altura;
				
				
			Peso_volu=(largo*ancho*altura)/2272;
		// eleccion de donde sera enviado el repuestos
			cout<<"Eligue a que direccion quieres enviar el mobiliario en el Km dado"<<endl;
			cout << "1.Guatemala (10 Km)" << endl;	
			cout << "2.Izabal (300 km)" << endl;
			cout << "3.Petén (460 km)" << endl;
			cout << "4.Chiquimula (178 km)" << endl;
			cout << "5.Retalhuleu (200 km)" << endl;
			cin>>envio_paque;
			
			tarifa2=envio_paque*0.13;
			tarifa3=Peso_volu+tarifa2;
		
			cout<<"El peso volumetrico es de" <<Peso_volu<<endl;
			cout<<"El total a pagar es de"<< tarifa3;
		}	
		
	case 5:  //Saber si el cliente sabe el precio del articulo electrico
			cout<<"Sabe el peso del Articulo Electrico"<<endl;
		cout << "1.Si (Peso Real)" << endl;
		cout << "2.No (Peso Volumetrico)" << endl;
		cin>>elec_paque;
		
	  		switch(elec_paque){
			case 1: // peso real con formula
				cout<< "Ingrese el peso del articulo electrico"<<endl;
				cin>>peso;
				if(peso<=50){
				// eleccion de donde sera enviado el articulo electtrico
				cout<<"Eligue a que direccion quieres enviar el articulo electrico, ingresa los km dados"<<endl;
			cout << "1.Guatemala (10 Km)" << endl;	
			cout << "2.Izabal (300 km)" << endl;
			cout << "3.Petén (460 km)" << endl;
			cout << "4.Chiquimula (178 km)" << endl;
			cout << "5.Retalhuleu (200 km)" << endl;
			cin>>envio_paque;
			
			tarifa=peso*2.5; // formulas para ver cuanto pagar 
			tarifa2=envio_paque*0.13;
			tarifa3=tarifa+tarifa2;
			cout<< "El total a pagar es de:"<< tarifa3;
			}
			else{
				("Exceso de Peso");
				cout<<"Exceso de Peso";
			}
			break;
			case 2: // peso volumetrico
				cout<<"Ingrese las medias del artiuclo electrico"<<endl;
				cout<<"Largo"<<endl;
				cin>>largo;
				cout<<"Ancho"<<endl;
				cin>>ancho;
				cout<<"Altura"<<endl;
				cin>>altura;
				
			Peso_volu=(largo*ancho*altura)/2272;
		
		// eleccion de donde sera enviado el articulo electrico
			cout<<"Eligue a que direccion quieres enviar el articulo electrico, ingresa los km dados"<<endl;
			cout << "1.Guatemala (10 Km)" << endl;	
			cout << "2.Izabal (300 km)" << endl;
			cout << "3.Petén (460 km)" << endl;
			cout << "4.Chiquimula (178 km)" << endl;
			cout << "5.Retalhuleu (200 km)" << endl;
			cin>>envio_paque;
			
			tarifa2=envio_paque*0.13;
			tarifa3=Peso_volu+tarifa2;
			
			cout<<"El peso volumetrico es de"<<Peso_volu<<endl;
			cout<<"El total a pagar es de"<< tarifa3;
		}	
}
}
		
		
		

		
		

		
		
		
		
		
		
		
		
		
			
