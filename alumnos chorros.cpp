#include <iostream>
using namespace std;
class Alumno {
	private:
		string nombre;
		int edad;
	public:
		void mayor(){
		if(edad>=18) {
		edad==18;
		cout<<"si tenes más de 18 años ya sos mayor de edad";
		cout<<"\nTu edad es de: ";
		}
		else if(edad<=18){
			edad-=18;
			cout<<"si tenes 17 o menos sos menor de edad";
			cout<<"\nTu edad es de: ";
		}
		}
		void inicializar(){
		cout<<"ingrese su nombre: ";
		cin>>nombre;
		cout<<"ingrese su edad: ";
		cin>>edad;
		}
	};

int main() {
	Alumno persona;
	persona.inicializar();
	persona.mayor();
}
