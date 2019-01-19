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
        string get_titolare() {return titolare;}
        int get_ncon() {return ncon;}
        void set_titolare(string t) {titolare=t;}
        void set_ncon(int & n) {ncon=n;}
        bool versamento(const float);  //inserisce nel vettore un valore positivo ricevuto in ingresso
        float calcolo_saldo() const;
        bool prelievo(const float);  //inserisce nel vettore un valore negativo ricevuto in ingresso
        void calcolo_spese_conto();

        // ostream & stampa_saldo(ostream&) const;
        // ostream & stampa_mov(ostream&) const;

};

}; /*mionamespace */

#endif //_conto_h
