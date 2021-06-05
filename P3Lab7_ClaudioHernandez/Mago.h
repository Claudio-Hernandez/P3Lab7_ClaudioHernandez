#ifndef MAGO_H
#define MAGO_H
#include <string>
using namespace std;
class Mago {
	public:
		Mago(int astucia,int inteligencia,int lealtad,int valentia);
		virtual string toString();
		virtual int getinteligencia();
		virtual int getvalentia();
		virtual int getastucia();
			virtual int getlealtad();

	protected:

		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;

};

#endif