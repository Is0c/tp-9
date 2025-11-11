#include <iostream>
using namespace std;
class operacion{
	private:
	int a,b,R;
	public:
	int suma(int a, int b) {
	    return a+b;
	}
	int resta(int a, int b){
	    return a-b;
	}
	int multiplicacion(int a, int b){
	    return a*b;
	}
	int division(int a, int b){
	    return a/b;
	}
	operacion(){
		cout<<"ingrese el primer dato: ";cin>>a;
		cout<<"ingrese segundo dato: ";cin>>b;
	float R1= suma(a,b);
	float R2= resta(a,b);
	float R3= multiplicacion(a,b);
	float R4= division(a,b);
	cout<<"resultado de R1: "<<R1<<endl;
	cout<<"resultado de R2: "<<R2<<endl;
	cout<<"resultado de R3: "<<R3<<endl;
	cout<<"resultado de R4: "<<R4<<endl;
	}
};

int main() {
    operacion objeto1;
    return 0;
}
