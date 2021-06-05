#ifndef MAGOHUFFLEPUFF__H
#define MAGOHUFFLEPUFF__H

#include "Mago.h"
#include <string>
using namespace std;
class MagoHufflepuff  : public Mago {
	private:
		int paciencia;
	public:
		MagoHufflepuff(int,int,int,int,int);
		virtual string toString();
			virtual int getinteligencia();
			virtual int getvalentia();
		virtual int getastucia();
			virtual int getlealtad();


	protected:
};

#endif