#include <iostream>
#include <vector>
#include <ctime>
#include "Mago.h"
#include <iomanip>
#include "MagoSlytherin .h"
#include "MagoGryffindor .h"
#include "MagoRavenclaw .h"
#include "MagoHufflepuff .h"
#include <random>
#include <typeinfo>
#include "SombreroClasificador.h"
#include "ClaseHogwarts.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu();
vector<Mago*> hacerMagos();
int main(int argc, char** argv) {
	srand(time(NULL));
	vector<Mago*> magos;
	SombreroClasificador* m= new SombreroClasificador();
	ClaseHogwarts* clasehog;
	int opcion2 = 0;
	while(opcion2!=4) {
		switch(opcion2=menu()) {
			case 1: {

				magos = hacerMagos();
				cout<<"Ingrese anio:";
				int anio = 0;
				cin>>anio;
				clasehog = m->clasificarmagosnuevos(magos,anio);
				

				break;
			}
			case 2: {
				clasehog->imprimirCasas();
				cout<<"\n";
				break;
			}
			case 3: {
			cout<<"dev no sirve ";
				break;
			}
			case 4: {
				break;
			}

		}

	}

	for(int i =0; i<magos.size(); i++) {
		if(magos[i]) {
			delete magos[i];
			magos[i]=0;
		}
	}
	magos.clear();
	delete m;
	delete clasehog;

	return 0;
}
int menu() {
	int opcion=0;


	while(opcion!=4) {
		cout<<"\n=============MENU==========\n1.Separar por casa\n2.Imprimir por casa\n3.imprimir promedio de cualidades\n4.Salir\nOpcion:";
		cin>>opcion;
		if(opcion<=4&&opcion>=1) {
			//return opcion;
			break;
		}

	}
	return opcion;


}
vector<Mago*> hacerMagos() {
	vector<Mago*> vectormagos;


	for(int i =0; i<20; i++) {

		random_device rd;
		default_random_engine eng(rd());
		uniform_real_distribution<> distr(0.0, 1.0);
		double aleatorio = distr(eng);
		//cout<< setprecision(2)<<aleatorio<<"\n";
		if(aleatorio>=0&&aleatorio<0.25) { //slytherin
			cout<<"entro1\n";
			int astuciasly= rand()%(100-80+1)+80;//especial
			int inteligenciasly= rand()%(100-0+1)+0;
			int lealtadsly= rand()%(100-0+1)+0;
			int valentiasly= rand()%(100-0+1)+0;
			int liderazgosly= rand()%(100-80+1)+80;//especial
			vectormagos.push_back(new MagoSlytherin(liderazgosly,astuciasly,inteligenciasly,lealtadsly,valentiasly));

		} else if(aleatorio>=0.25&&aleatorio<0.5) { //ravenclaw
			cout<<"entro2\n";

			int astuciasra= rand()%(100-0+1)+0;
			int inteligenciasra= rand()%(100-80+1)+80;//especial
			int creatividadra= rand()%(100-80+1)+80;//especial
			int lealtadsra= rand()%(100-0+1)+0;
			int valentiasra= rand()%(100-0+1)+0;
			vectormagos.push_back(new MagoRavenclaw(creatividadra,astuciasra,inteligenciasra,lealtadsra,valentiasra));

		} else if(aleatorio>=0.5&&aleatorio<0.75) {//huffle
			cout<<"entro3\n";

			int astuciashu= rand()%(100-0+1)+0;
			int inteligenciashu= rand()%(100-0+1)+0;
			int lealtadshu= rand()%(100-80+1)+80;//especial
			int paciencia= rand()%(100-80+1)+80;//especial
			int valentiashu= rand()%(100-0+1)+0;
			vectormagos.push_back(new MagoHufflepuff(paciencia,astuciashu,inteligenciashu,lealtadshu,valentiashu));

		} else if(aleatorio>=0.75&&aleatorio<1) {//grfyndor
			cout<<"entro4\n";

			int astuciagry= rand()%(100-0+1)+0;
			int inteligenciagry= rand()%(100-0+1)+0;
			int lealtadgry= rand()%(100-0+1)+0;
			int atrevimientogry= rand()%(100-80+1)+80;//especial
			int valentiagry= rand()%(100-80+1)+80;	//especial
			vectormagos.push_back(new MagoGryffindor(atrevimientogry,astuciagry,inteligenciagry,lealtadgry,valentiagry));

		}
	}

	return vectormagos;


}
