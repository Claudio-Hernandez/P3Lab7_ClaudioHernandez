#ifndef MAGOGRYFFINDOR__H
#define MAGOGRYFFINDOR__H

#include "Mago.h"
#include <string>
using namespace std;
class MagoGryffindor  : public Mago
{
	private:
		int atrevimiento;
	public:
		MagoGryffindor(int,int,int,int,int);
		virtual string toString();
		virtual int getinteligencia();	
		virtual int getvalentia();	
		virtual int getastucia();	
		virtual int getlealtad();
		
};

#endif