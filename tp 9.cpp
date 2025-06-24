#include <iostream>
#include <string.h>
using namespace std;
void inicializar(string &alumno,string &curso,string &materia)
{
	cout<<"ingresar nombre y apellido del alumno:";
	getline(cin,alumno);
	cout<<"ingrese su curso:";
	getline(cin,curso);
	cout<<"ingrese el nombre de la materia:";
	getline(cin,materia);
}
void calcular_promedio(int total,int contador,string materia)
{
	double promedio=total/contador;
	if(promedio>=7)
	cout<<"nota final de "<<materia<<": tea";
	else
	cout<<"nota final de "<<materia<<": ted";
}
bool condicion(bool recuperatorio,int nota)
{
	if(nota==6)
	return true;
}
int main ()
{
	string alumno,curso,materia;	bool recuperatorio;
	inicializar(alumno,curso,materia);
	int nota,total,contador=0;
	for(int i=1;i<=3;i++)
	{
		cout<<alumno<<" ingrese la nota del cuatrimestre:";
		cin>>nota;
		recuperatorio=condicion(recuperatorio,nota);
		total+=nota;	contador++;
		if(recuperatorio==true)
		{
			cout<<alumno<<" ingrese la nota del recuperatorio:";
			cin>>nota;
			total+=nota;	contador++;
		}
	}
	calcular_promedio(total,contador,materia);
	return 0;
}
