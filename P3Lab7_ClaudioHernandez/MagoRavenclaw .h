#ifndef MAGORAVENCLAW__H
#define MAGORAVENCLAW__H

#include "Mago.h"
#include <string>
using namespace std;
class MagoRavenclaw  : public Mago {
	private:
		int creatividad;
	public:
		MagoRavenclaw(int,int,int,int,int);
		virtual string toString();
				virtual int getinteligencia();
		virtual int getvalentia();
		virtual int getastucia();
		virtual int getlealtad();

	protected:
};

#endif