#ifndef _complesso_h
#define _complesso_h

#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;


class Complesso {
        friend ostream & operator<<(ostream &, const Complesso &);
        friend istream & operator>>(istream &, Complesso &);
private:
        //variabili membro
        double Re, Imm;
public:
        //Metodi o funz membro
        Complesso(double R=0.0,double I=0.0) { Re=R; Imm=I;}  //tre possibilità di creazione/inizializzazione
        Complesso(const Complesso &);
        const Complesso & operator=(const Complesso &);
        double get_Re() const {return Re;}
        double get_Imm() const {return Imm;}
        void set_Re(double R) {Re=R;}
        void set_Imm(double I) {Imm=I;}
        double moduloComplex() const;
        Complesso operator+(const Complesso &) const;
        Complesso operator+(const float &) const;
        Complesso operator-(const Complesso &) const;
        Complesso operator-(const float &) const;
        Complesso operator*(const Complesso &) const;
        bool operator!=(const Complesso &) const;
        bool operator==(const Complesso &) const;
        ~Complesso();
};

#endif
