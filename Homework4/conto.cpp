//Description in Homework4.rtf
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
                mov = new float [c.nmov];
                for (int i=0; i<nmov; i++)
                        mov[i]=c.mov[i];
        }
        return *this;
}

bool conto_corrente::versamento(const float v)
{
        if (v<0)
                throw operazione("\nErrore: versamento negativo");
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
                throw operazione("\nErrore: prelievo positivo");
        if (nmov==0) {
                cout<<"\nImpossibile prelevare, saldo: "<<calcolo_saldo();
                return false;
        }
        else if(calcolo_saldo() < -p) {
                cout<<"\nImpossibile prelevare un valore superiore al saldo: "<<calcolo_saldo();
                return false;
        } else {
                mov[nmov]=p;
                nmov++;
                return true;
        }
}

ostream & conto_corrente::stampa_mov( ostream & out) const
{
        out<<"\nConto: "<<ncon<<endl;
        out<<"\nMovimenti: ";
        for (int i=0; i<nmov; i++)
                out<<mov[i]<<' ';
        return out;
}

ostream & conto_corrente::stampa_saldo(ostream & out) const
{
        out<<"\nConto: "<<ncon<<endl;
        out<<"\nSaldo: "<<calcolo_saldo();
        return out;
}
