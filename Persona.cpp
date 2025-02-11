#include <iostream>
using namespace std;
//1.nombre de la clase (Persona)

class Persona{
	//2.1 Controles de acceso (Private,Protected (clases heredadas), Public)
	//2.Atributos = caracteristicas de la clase (objeto)	
	private:
		string nombres,apellidos,direccion,fecha_nacimiento;
		int telefono;
	//3.Constructor
	public:
		Persona(){
		}
		Persona(string nom,string ape,string dir,string fn, int t){
			nombres=nom;
			apellidos=ape;
			direccion=dir;
			fecha_nacimiento=fn;
			telefono=t;	
		}
	//4.Metodos
	//CRUD es un acronimo en ingles que significa "Create, Read, Update, Delete".
	//Es decir, Crear, Leer, Actualizar y Borrar.
	void crear();
	void leer(){
		cout<<"Nombre: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		cout<<"Fecha de Nacimiento: "<<fecha_nacimiento<<endl;
	}
	void actualizar();
	void eliminar();
	
};
