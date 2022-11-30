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
		
		void setName(string n){
			namePyme = n;
		}
		
		void setRFC(string r){
			rfcPyme = r;
		}
		
		void setAdress(string a){
			adressPyme = a;
		}
		
		void setCEO(string c){
			ceoPyme = c;
		}
		
		void setNum(int num){
			numWorkers = num;
		}
		
		void setMoney(float mon){
			moneyYear = mon;
		}
		
		void showPyme(){
			cout << "Informacion disponible" << endl; 
			cout << "Nombre: " << namePyme << endl; 
			cout << "RFC: " << rfcPyme << endl; 
			cout << "Nombre del director: " << ceoPyme << endl; 
			cout << "Numero de trabajadores: " << numWorkers << endl; 
			cout << "Cantidad de pesos por ano: " << moneyYear << endl;
		}
};

Pymes pmes[1000];

void addPyme(int i){
	string name, rfc, adress, ceo; 
	int num, k = i;
	float money;
	
	cout << "Agregar una Pyme " << endl; 
	cout << "Ingrese el nombre: " << endl; cin >> name; 
	cout << "Ingrese el RFC: " << endl; cin >> rfc; 
	cout << "Ingrese la direccion: " << endl; cin >> adress; 
	cout << "Ingrese el nombre del director: " << endl; cin >> ceo; 
	cout << "Ingrese la cantidad de empleados: " << endl; cin >> num;
	cout << "Ingrese la cantidad de pesos por ano: " <<endl ; cin >> money; 
	
	pmes[k].setName(name);
	pmes[k].setRFC(rfc);
	pmes[k].setAdress(adress);
	pmes[k].setCEO(ceo);
	pmes[k].setNum(num);
	pmes[k].setMoney(money);
	
}
	


int main(){
	int d, o = -1;
	bool flag = true;

	
	while (flag == true){
	
		cout << "--- Bienvenido al inventario de Pymes ---" << endl; 
		cout << "Indique la opcion de lo que quiere hacer: " << endl; 
		cout << "(1) Agregar PYME" << endl << "(2) Agregar trabajador" << endl << "(3) Consultar PYME" << endl << "(4) Consultar trabajador" << endl << "(5) Cerrar" << endl; cin >> d;
		
		switch(d){
			case 1: o++; addPyme(o); break; 
			
			//case 2: suma(); break; 
			
			case 3: pmes[o].showPyme(); break;
			
			//case 4: mayor(); break;
			
			//case 5: frase(); break;
			
			case 5: flag = false; break; 
			
			default: cout << "Opcion invalida, intente de nuevo. " << endl;
		}
	
	}
	
	
}
