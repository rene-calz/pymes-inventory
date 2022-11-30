#include <iostream>

using namespace std; 

class Pymes{
	private: 
		string namePyme; 
		string rfcPyme; 
		string adressPyme;
		string ceoPyme;
		int numWorkers;
		float moneyYear;
		
	public: 
		Pymes(string n, string r, string a, string c, int num, float m){
			namePyme = n;
			rfcPyme = r; 
			adressPyme = a; 
			ceoPyme = c; 
			numWorkers = num;
			moneyYear = m;
		}
		
		void showPyme(){
			cout << "Información disponible" << endl; 
			cout << "Nombre: " << namePyme << endl; 
			cout << "RFC: " << rfcPyme << endl; 
			cout << "Nombre del director: " << ceoPyme << endl; 
			cout << "Número de trabajadores: " << numWorkers << endl; 
			cout << "Cantidad de pesos por año: " << moneyYear << endl;
		}
};

void addPyme(){
	string name, rfc, adress, ceo; 
	int num;
	float money;
	
	cout << "Agregar una Pyme " << endl; 
	cout << "Ingrese el nombre: "; cin >> name; 
	cout << "Ingrese el RFC: "; cin >> rfc; 
	cout << "Ingrese la dirección: "; cin >> adress; 
	cout << "Ingrese el nombre del director: "; cin >> ceo; 
	cout << "Ingrese la cantidad de empleados: "; cin >> num;
	cout << "Ingrese la cantidad de pesos por año: "; cin >> money; 
	
	
}
