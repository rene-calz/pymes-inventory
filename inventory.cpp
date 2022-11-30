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
		
		string getName(){
			return namePyme;
		}
		
		string getRFC(){
			return rfcPyme;
		}
		
		string getAdress(){
			return adressPyme;
		}
		
		string getCEO(){
			return ceoPyme;
		}
		
		int getNumWorkers(){
			return numWorkers;
		}
		
		float getMoneyYear(){
			return moneyYear;
		}
		
		void showPyme(){
			cout << "Informacion disponible" << endl; 
			cout << "Nombre: " << namePyme << endl; 
			cout << "RFC: " << rfcPyme << endl; 
			cout << "Direccion: " << adressPyme << endl;
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
	
void lookPyme(int i){
		int k = i+1, d, numWorkers;
		string name, rfc, ceo, adress;
		float money; 
		
		cout << "Ingrese el criterio de busqueda: " << endl << "(1) Por nombre" << endl << "(2) Por RFC" << endl <<  "(3) Por direccion " << endl << "(4) Por director" << endl << "(5) Por numero de empleados" << endl << "(6) Por cantidad de pesos al ano" << endl; 
		cin >> d; 
		
		switch(d){
			case 1: cout << "Ingrese el nombre por buscar: " << endl; cin >> name;
					for (int i = 0; i < k; i++){
						if (pmes[i].getName() == name){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
						} 
					}
					break; 
			
			case 2: cout << "Ingrese el RFC por buscar: " << endl; cin >> rfc;
					for (int i = 0; i < k; i++){
						if (pmes[i].getRFC() == rfc){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
						} 
					}
					break; 
					
			case 3: cout << "Ingrese la direccion por buscar: " << endl; cin >> adress;
					for (int i = 0; i < k; i++){
						if (pmes[i].getAdress() == adress){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
						} 
					}
					break; 
					
			case 4: cout << "Ingrese el nombre de director por buscar: " << endl; cin >> ceo;
					for (int i = 0; i < k; i++){
						if (pmes[i].getCEO() == ceo){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
						} 
					}
					break; 
					
			case 5: cout << "Ingrese el numero de empleados por buscar: " << endl; cin >> numWorkers;
					for (int i = 0; i < k; i++){
						if (pmes[i].getNumWorkers() == numWorkers){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
						} 
					}
					break; 
					 
			case 6: cout << "Ingrese la cantidad de pesos por ano por buscar: " << endl; cin >> money;
					for (int i = 0; i < k; i++){
						if (pmes[i].getMoneyYear() == money){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
						} 
					}
					break; 
			
			default: cout << "Opcion invalida, intente de nuevo..." << endl; break;
		}
	
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
			
			//case 2: ; break; 
			
			case 3: lookPyme(o); break;
			
			//case 4: mayor(); break;
			
			//case 5: frase(); break;
			
			case 5: flag = false; break; 
			
			default: cout << "Opcion invalida, intente de nuevo. " << endl;
		}
	
	}
	
	
}
