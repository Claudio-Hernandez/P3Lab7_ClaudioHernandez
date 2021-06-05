#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include <vector>
#include "Mago.h"
#include "ClaseHogwarts.h"
#include <typeinfo>

using namespace std;
class SombreroClasificador
{
	
	public:
		ClaseHogwarts* clasificarmagosnuevos(vector<Mago*>,int anio);
	protected:
};

#endif