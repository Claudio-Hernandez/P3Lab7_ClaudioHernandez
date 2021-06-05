#ifndef MAGOSLYTHERIN__H
#define MAGOSLYTHERIN__H

#include "Mago.h"
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

class MagoSlytherin  : public Mago {
	private:
		int liderazgo;
	public:
		MagoSlytherin(int,int,int,int,int);
		virtual string toString();
		virtual int getinteligencia();
		virtual int getvalentia();
		virtual int getastucia();
		virtual int getlealtad();
	protected:
};

#endif