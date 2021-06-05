#include "MagoHufflepuff .h"
MagoHufflepuff::MagoHufflepuff(int pacienciab,int astuciasly, int inteligenciasly, int lealtadsly,int valentiasly):Mago(astuciasly,inteligenciasly,lealtadsly,valentiasly) {
	
	this->paciencia = pacienciab;

}
string MagoHufflepuff::toString(){
		string n13 =to_string(this->astucia);
		string n23 =to_string(this->paciencia);
	string n33 =to_string(this->getinteligencia());
	string n43=to_string(this->getlealtad());
	string n53 =to_string(this->getvalentia());

	return "\nastucia:"+n13+"\n  paciencia:"+n23+"  inteligencia"+n33+"\n  lealtad:"+n43+"\n  valentia"+n53+"\n--------";
}

int MagoHufflepuff::getastucia(){
	 return this->astucia;
}
int MagoHufflepuff::getinteligencia(){
	 return this->inteligencia;
}
int MagoHufflepuff::getlealtad(){
	 return this->lealtad;
}
int MagoHufflepuff::getvalentia(){
	 return this->valentia;
}
