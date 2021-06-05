#include "ClaseHogwarts.h"
ClaseHogwarts::ClaseHogwarts(int anio2){
	this->anio = anio2;
}
vector<MagoGryffindor*>ClaseHogwarts::getVectorgr(){
	return this->magosGryffindor;
}
vector<MagoHufflepuff*>ClaseHogwarts::getVectorhuff(){
	return this->magosHuffle;
}
vector<MagoRavenclaw*>ClaseHogwarts::getVectorraven(){
	return this->magosRaven;
}
vector<MagoSlytherin*>ClaseHogwarts::getvectorsly(){
	return this->magosslyde;
}
void ClaseHogwarts::imprimirCasas(){
	cout<<"Casa Gryffindor:\n ";
	for(int i =0;i<magosGryffindor.size();i++) {
			MagoGryffindor* b = magosGryffindor[i];
			b->toString();
	}
	cout<<"Casa Hufflepuff:\n ";
	for(int i =0;i<magosHuffle.size();i++) {
			MagoHufflepuff* b = magosHuffle[i];
			b->toString();
	}
	cout<<"Casa Slydering:\n ";
	for(int i =0;i<magosslyde.size();i++) {
			MagoSlytherin* b = magosslyde[i];
			b->toString();
	}
	cout<<"Casa Ravenclaw:\n ";
	for(int i =0;i<magosRaven.size();i++) {
			MagoRavenclaw* b = magosRaven[i];
			b->toString();
	}

}
void ClaseHogwarts::promedioCualidades(){
	double nI,nv,nl,nA; 
	double pg,ps,phu,pr;
	double pi,pv,pl,pA;
	for(int i =0;i<magosGryffindor.size();i++){
		nI+=magosGryffindor[i]->getinteligencia();
		nv+=magosGryffindor[i]->getvalentia();
		nl+=magosGryffindor[i]->getlealtad();
		nA+=magosGryffindor[i]->getastucia();
	}
	pi = nI/magosGryffindor.size();
	pv = nv/magosGryffindor.size();
	pl = nl/magosGryffindor.size();
	pA = nA/magosGryffindor.size();
	cout<<"Promedio de inteligencia en gryffindor:"+to_string(pi);
	
}