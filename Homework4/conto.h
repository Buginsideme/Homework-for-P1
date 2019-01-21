//TODO: Aggiustare il costruttore
//Description in Homework4.rtf
#ifndef _conto_h
#define _conto_h

#include<iostream>
#include<string>
#include"bad_op.h"
using namespace std;

namespace mionamespace {

class conto_corrente {
protected:
        string titolare;
        int ncon, nmax, nmov;
        float *mov;

public:
        conto_corrente(string ="", const int =0, const int =10);
        conto_corrente(const conto_corrente &);
        const conto_corrente & operator=(const conto_corrente &);
        string get_titolare() const {return titolare;}
        int get_ncon() const {return ncon;}
        void set_titolare(string t) {titolare=t;}
        void set_ncon(int & n) {ncon=n;}
        bool versamento(const float);  //inserisce nel vettore un valore positivo ricevuto in ingresso
        float calcolo_saldo() const;
        bool prelievo(const float);  //inserisce nel vettore un valore negativo ricevuto in ingresso
        virtual float calcolo_spese_conto() const =0;
        ostream & stampa_mov(ostream &) const;
        ostream & stampa_saldo(ostream &) const;
        virtual ~conto_corrente() {delete [] mov;}
};

class base : public conto_corrente {
protected:
        float tasso;
        int nop;
public:
        base(const string t, const int nc, const int nm, const float ta =0.02, const int np =3) : conto_corrente(t,nc,nm)
        {tasso=ta; nop=np;}
        virtual float calcolo_spese_conto() const {
	 	 int n=nmov/nop;
	 	 return tasso*n;
	 }
};

class ordinario : public base {
protected:
        int canone ,fop;
	bool fra;
public:
        /*Ordinario(const string t, const int nc, const int nm, const float ta, const int np,
                const int c, const bool f, const int fr) : base(t,nc,nm,ta,np) {canone=c; fop=fr; fra=f;}
	 */virtual float calcolo_spese_contospese() const {
	 	 if(!fra || nmov<=fop) return canone;
	 	 else {
	 	 	int n=(nmov-fop)/nop;
	 	 	return canone + tasso*n;
                }
        }

};

} //end_namespace

#endif //_conto_h
