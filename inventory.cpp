#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std; 
				
class Pymes{
	public: 
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
			cout << "Cantidad de pesos por anio: " << moneyYear << endl;
		}
};


class Worker: public Pymes{
	private: 
		string name;
		int age; 
		string position;
		
	public: 
		void setNameWorker(string s){
			name = s;
		}
		
		void setAge(int a){
			age = a;
		}
		
		void setPosition(string p){
			position = p;
		}
		
		string getNameWorker(){
			return name;
		}
		
		int getAge(){
			return  age;
		}
		
		string getPosition(){
			return position;
		}
		
		void showWorker(){
			cout << "Informacion disponible" << endl; 
			cout << "Nombre: " << name << endl; 
			cout << "Edad: " << age << endl; 
			cout << "Posicion: " << position << endl;
			cout << "Pyme donde trabaja: " << namePyme << endl; 
			cout << "RFC de Pyme: " << rfcPyme << endl; 
			cout << "Dirección donde trabaja: " << adressPyme << endl;
		}
};


Pymes pmes[1000];
Worker wrkr[1000];

void addPyme(int i){
	string name, rfc, adress, ceo; 
	int num, k = i;
	float money;
	
	cout << "Agregar una Pyme " << endl; 
	cout << "Ingrese el nombre: " << endl; cin.ignore(); getline(cin, name); 
	cout << "Ingrese el RFC: " << endl; cin >> rfc; 
	cout << "Ingrese la direccion: " << endl; cin.ignore(); getline(cin, adress); 
	cout << "Ingrese el nombre del director: " << endl; getline(cin, ceo); 
	cout << "Ingrese la cantidad de empleados: " << endl; cin >> num;
	cout << "Ingrese la cantidad de pesos por anio: " <<endl ; cin >> money; 
	
	pmes[k].setName(name);
	pmes[k].setRFC(rfc);
	pmes[k].setAdress(adress);
	pmes[k].setCEO(ceo);
	pmes[k].setNum(num);
	pmes[k].setMoney(money);
	
	system("CLS");
	
}

void addWorker(int i){
	string name, position, pyName, pyRFC, pyAdress; 
	int age, k = i; 
	
	cout << "Agregar un trabajador " << endl; 
	cout << "Ingrese el nombre: " << endl; cin.ignore(); getline(cin, name); 
	cout << "Ingrese la edad: " << endl; cin >> age; 
	cout << "Ingrese la posicion: " << endl; cin.ignore(); getline(cin, position); 
	cout << "Ingrese el nombre de la empresa donde trabaja: " << endl; getline(cin, pyName); 
	cout << "Ingrese la RFC de donde trabaja: " << endl; cin >> pyRFC;
	cout << "Ingrese la direccion de la empresa donde trabaja: " <<endl ; cin.ignore(); getline(cin, pyAdress); 
	
	wrkr[k].setNameWorker(name);
	wrkr[k].setAge(age);
	wrkr[k].setPosition(position);
	wrkr[k].setName(pyName);
	wrkr[k].setRFC(pyRFC);
	wrkr[k].setAdress(pyAdress);
	
	system("CLS");
	
}
	
void lookPyme(int i){
		int k = i+1, d, numWorkers;
		string name, rfc, ceo, adress;
		float money;
		bool flag = false; 
		
		cout << "Ingrese el criterio de busqueda: " << endl << "(1) Por nombre" << endl << "(2) Por RFC" << endl <<  "(3) Por direccion " << endl << "(4) Por director" << endl << "(5) Por numero de empleados" << endl << "(6) Por cantidad de pesos al anio" << endl; 
		cin >> d; 
		system("CLS");
		
		switch(d){
			case 1: cout << "Ingrese el nombre por buscar: " << endl; cin.ignore(); getline(cin, name);
					for (int i = 0; i < k; i++){
						if (pmes[i].getName() == name){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Pyme no encontrada" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
			
			case 2: cout << "Ingrese el RFC por buscar: " << endl; cin >> rfc;
					for (int i = 0; i < k; i++){
						if (pmes[i].getRFC() == rfc){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Pyme no encontrada" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
					
			case 3: cout << "Ingrese la direccion por buscar: " << endl; cin.ignore(); getline(cin, adress);
					for (int i = 0; i < k; i++){
						if (pmes[i].getAdress() == adress){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Pyme no encontrada" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
					
			case 4: cout << "Ingrese el nombre de director por buscar: " << endl; cin.ignore(); getline(cin, ceo);
					for (int i = 0; i < k; i++){
						if (pmes[i].getCEO() == ceo){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Pyme no encontrada" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
					
			case 5: cout << "Ingrese el numero de empleados por buscar: " << endl; cin >> numWorkers;
					for (int i = 0; i < k; i++){
						if (pmes[i].getNumWorkers() == numWorkers){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Pyme no encontrada" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
					 
			case 6: cout << "Ingrese la cantidad de pesos por anio por buscar: " << endl; cin >> money;
					for (int i = 0; i < k; i++){
						if (pmes[i].getMoneyYear() == money){
							cout << "Pyme " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Pyme no encontrada" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
			
			default: cout << "Opcion invalida, intente de nuevo..." << endl; break;
		}
	
}

void lookWorker(int i){
		int k = i+1, d, numWorkers, age;
		string name, rfc, ceo, adress, position, company;
		float money; 
		bool flag = false;
		
		cout << "Ingrese el criterio de busqueda: " << endl << "(1) Por nombre" << endl << "(2) Por edad" << endl <<  "(3) Por posicion " << endl << "(4) Por empresa" << endl << "(5) Por RFC de la empresa" << endl;
		cin >> d;
		system("CLS");
		
		switch(d){
			case 1: cout << "Ingrese el nombre por buscar: " << endl; cin.ignore(); getline(cin, name);
					for (int i = 0; i < k; i++){
						if (wrkr[i].getNameWorker() == name){
							cout << "Trabajador " << i + 1 << " con informacion coincidente: " << endl; 
							wrkr[i].showWorker();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Trabajador no encontrado" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
			
			case 2: cout << "Ingrese edad por buscar: " << endl; cin >> age;
					for (int i = 0; i < k; i++){
						if (wrkr[i].getAge() == age){
							cout << "Trabajador " << i + 1 << " con informacion coincidente: " << endl; 
							wrkr[i].showWorker();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Trabajador no encontrado" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
					
			case 3: cout << "Ingrese la posicion por buscar: " << endl; cin.ignore(); getline(cin, position);
					for (int i = 0; i < k; i++){
						if (wrkr[i].getPosition() == position){
							cout << "Trabajador " << i + 1 << " con informacion coincidente: " << endl; 
							wrkr[i].showWorker();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Trabajador no encontrado" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
					
			case 4: cout << "Ingrese la empresa por buscar: " << endl; cin.ignore(); getline(cin, company);
					for (int i = 0; i < k; i++){
						if (pmes[i].getName() == company){
							cout << "Trabajador " << i + 1 << " con informacion coincidente: " << endl; 
							pmes[i].showPyme();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Trabajador no encontrado" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
					
			case 5: cout << "Ingrese el RFC por buscar: " << endl; cin >> rfc;
					for (int i = 0; i < k; i++){
						if (wrkr[i].getRFC() == rfc){
							cout << "Trabajador " << i + 1 << " con informacion coincidente: " << endl; 
							wrkr[i].showWorker();
							cout << endl; 
							flag = true;
						} 
					}
					
					if(flag == false){
						cout << "Trabajador no encontrado" << endl;
						flag = false;
					}
					
					system ("PAUSE");
					break; 
			
			default: cout << "Opcion invalida, intente de nuevo..." << endl; break;
		}
	
}


int main(){
	int d, py = -1, wk = -1;
	bool flag = true;

	cout << "--- Bienvenido al inventario de Pymes ---" << endl; 
	system ("PAUSE");
	
	while (flag == true){
		system("CLS");
		cout << "Indique la opcion de lo que quiere hacer: " << endl; 
		cout << "(1) Agregar PYME" << endl << "(2) Agregar trabajador" << endl << "(3) Consultar PYME" << endl << "(4) Consultar trabajador" << endl << "(5) Cerrar" << endl; cin >> d;
		
		switch(d){
			case 1: py++; system("CLS"); addPyme(py); break; 
			
			case 2: wk++; system("CLS"); addWorker(wk); break; 
			
			case 3: system("CLS"); lookPyme(py); break;
			
			case 4: system("CLS"); lookWorker(wk); break;
			
			case 5: system("CLS"); cout << endl << "How did we get this far apart? " << endl << "We used to be so close together" << endl << "How did we get this far apart?" << endl << "I thought this love would last forever" << endl << "- Apart by The Cure" << endl << endl << "Bye..."; flag = false; break; 
			
			default: system("CLS"); cout << "Opcion invalida, intente de nuevo. " << endl;
		}
	
	}
	
	
}
