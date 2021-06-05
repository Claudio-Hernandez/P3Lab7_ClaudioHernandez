#include "SombreroClasificador.h"
ClaseHogwarts* SombreroClasificador::clasificarmagosnuevos(vector<Mago*>magos,int anio) {
	ClaseHogwarts* y =  new ClaseHogwarts(anio);
	for(int i =0; i<magos.size(); i++) {
		if(typeid( *magos[i] ) == typeid(MagoGryffindor)) {
			y->getVectorgr().push_back(dynamic_cast<MagoGryffindor*>(magos[i]));
		}
		if(typeid( *magos[i] ) == typeid(MagoHufflepuff)) {
			y->getVectorhuff().push_back(dynamic_cast<MagoHufflepuff*>(magos[i]));

		}
		if(typeid( *magos[i] ) == typeid(MagoRavenclaw)) {
			y->getVectorraven().push_back(dynamic_cast<MagoRavenclaw*>(magos[i]));

		}
		if(typeid( *magos[i] ) == typeid(MagoSlytherin)) {
			y->getvectorsly().push_back(dynamic_cast<MagoSlytherin*>(magos[i]));

		}
	}
	return y;



}