#include"conto.h"
using namespace mionamespace;

conto_corrente::conto_corrente(string t, const int nc, const int nm)
{
        titolare=t;
        ncon=nc;
        nmax=nm;
        nmov=0;
        mov = new float [nmax];
}

conto_corrente::conto_corrente(const conto_corrente & c)
{
        titolare=c.titolare;
        ncon=c.ncon;
        nmax=c.nmax;
        nmov=c.nmov;
        mov = new float [c.nmax];
        for (int i=0; i<nmov; i++)
                mov[i]=c.mov[i];
}

const conto_corrente & conto_corrente::operator=(const conto_corrente & c)
{
        if (this!=&c) {
                if (mov)
                        delete [] mov;
                titolare=c.titolare;
                ncon=c.ncon;
                nmax=c.nmax;
                nmov=c.nmov;
                mov = new float [c.nmax];
                for (int i=0; i<nmov; i++)
                        mov[i]=c.mov[i];
        }
        return *this;
}

bool conto_corrente::versamento(const float v)
{
        if (v<0)
                throw "eccezione versamento negativo";
     	else {
                mov[nmov]=v;
                nmov++;
                return true;
        }
}

float conto_corrente::calcolo_saldo() const
{
        float saldo=0;
	for (int i=0; i<nmov; i++)
	     saldo+=mov[i];
	return saldo;
}

bool conto_corrente::prelievo(const float p)
{
        if (p>0)
                throw "eccezione prelievo positivo";
        if (nmov==0)
                return false;
        else if(calcolo_saldo() < -p)
                return false;
	else {
                mov[nmov]=p;
                nmov++;
                return true;
        }
}
