#include "MagoRavenclaw .h"
MagoRavenclaw::MagoRavenclaw(int creativi,int astuciasly, int inteligenciasly, int lealtadsly,int valentiasly):Mago(astuciasly,inteligenciasly,lealtadsly,valentiasly) {
	
	
	this->creatividad = creativi;

}
string MagoRavenclaw::toString(){
		string n14 =to_string(this->astucia);
		string n24 =to_string(this->creatividad);
	string n34 =to_string(this->getinteligencia());
	string n44 =to_string(this->getlealtad());
	string n54 =to_string(this->getvalentia());

	return"\n  astucia:"+n14+" Creativad:"+n24+"\n  inteligencia"+n34+"\n  lealtad:"+n44+"\n  valentia"+n54+"\n--------";
}

int MagoRavenclaw::getastucia(){
	 return this->astucia;
}
int MagoRavenclaw::getinteligencia(){
	 return this->inteligencia;
}
int MagoRavenclaw::getlealtad(){
	 return this->lealtad;
}
int MagoRavenclaw::getvalentia(){
	 return this->valentia;
}
