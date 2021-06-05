#include "MagoSlytherin .h"
MagoSlytherin::MagoSlytherin(int liderazgosly,int astuciasly, int inteligenciasly, int lealtadsly,int valentiasly):Mago(astuciasly,inteligenciasly,lealtadsly,valentiasly) {
	
	this->liderazgo = liderazgosly;

}
string MagoSlytherin::toString(){
		string n15 =to_string(this->astucia);
		string n25 =to_string(this->liderazgo);
	string n35 =to_string(this->getinteligencia());
	string n45 =to_string(this->getlealtad());
	string n55=to_string(this->getvalentia());

	return"\n  astucia:"+n15+"\n  liderazgo:"+n25+"\n  nkjvvkfdinteligencia"+n35+"\n  lealtad:"+n45+"\n  valentia"+n55+"\n--------";
}

int MagoSlytherin::getastucia(){
	 return this->astucia;
}
int MagoSlytherin::getinteligencia(){
	 return this->inteligencia;
}
int MagoSlytherin::getlealtad(){
	 return this->lealtad;
}
int MagoSlytherin::getvalentia(){
	 return this->valentia;
}
