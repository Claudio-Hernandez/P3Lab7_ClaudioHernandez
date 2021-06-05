#include "Mago.h"
Mago::Mago(int astuciab,int inteligenciab,int lealtadb,int valentiab){
	 astucia = astuciab;
	 inteligencia =inteligenciab;
	  lealtad =  lealtadb;
	  valentia =  valentiab;
}
string Mago::toString(){
	return "mago";
}
int Mago::getastucia(){
	 return this->astucia;
}
int Mago::getinteligencia(){
	 return this->inteligencia;
}
int Mago::getlealtad(){
	 return this->lealtad;
}
int Mago::getvalentia(){
	 return this->valentia;
}