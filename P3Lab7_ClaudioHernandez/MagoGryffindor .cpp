#include "MagoGryffindor .h"
MagoGryffindor::MagoGryffindor(int atrevimienton,int astuciasly, int inteligenciasly, int lealtadsly,int valentiasly):Mago(astuciasly,inteligenciasly,lealtadsly,valentiasly) {
	
	this->atrevimiento = atrevimienton;

}
string MagoGryffindor::toString(){
	string n12 =to_string(this->astucia);
		string n22 =to_string(this->atrevimiento);
	string n32 =to_string(this->getinteligencia());
	string n42 =to_string(this->getlealtad());
	string n52 =to_string(this->getvalentia());

	return"\n  astucia:"+n12+"\n  atrevimiento:"+n22+"\n  inteligencia"+n32+"\n  lealtad:"+n42+"\n  valentia"+n52;
}

int MagoGryffindor::getastucia(){
	 return this->astucia;
}
int MagoGryffindor::getinteligencia(){
	 return this->inteligencia;
}
int MagoGryffindor::getlealtad(){
	 return this->lealtad;
}
int MagoGryffindor::getvalentia(){
	 return this->valentia;
}
