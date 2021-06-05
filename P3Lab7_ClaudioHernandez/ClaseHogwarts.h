#ifndef CLASEHOGWARTS_H
#define CLASEHOGWARTS_H
#include "MagoSlytherin .h"
#include "MagoGryffindor .h"
#include "MagoRavenclaw .h"
#include "MagoHufflepuff .h"
#include <vector>
using namespace std;
class ClaseHogwarts {
	private:
		int anio;
		vector<MagoSlytherin*>magosslyde;
		vector<MagoGryffindor*>magosGryffindor;
		vector<MagoRavenclaw*>magosRaven;
		vector<MagoHufflepuff*>magosHuffle;
	public:
		ClaseHogwarts(int anio2);

		void contarpromedio();
		vector<MagoSlytherin*>getvectorsly();
		void imprimirCasas();
		void promedioCualidades();
		vector<MagoGryffindor*>getVectorgr();
		vector<MagoRavenclaw*>getVectorraven();
		vector<MagoHufflepuff*>getVectorhuff();

	protected:
};

#endif