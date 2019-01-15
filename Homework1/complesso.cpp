#include "complesso.h"

Complesso::Complesso(const Complesso & c)
{
        Re=c.Re;
        Imm=c.Imm;
}

const Complesso & Complesso::operator=(const Complesso & c)
{
        if (this!=&c) {
                Re=c.Re;
                Imm=c.Imm;
        }
        return *this;
}

ostream & operator<<(ostream & out, const Complesso & c)
{
        out<<c.Re<<"+i"<<c.Imm<<endl;
}

istream & operator>>(istream & in, Complesso & c)
{
        float r,i;
        cout<<"\nParte reale: ";
        in>>r;
        c.set_Re(r);
        cout<<"\nParte complessa: ";
        in>>i;
        c.set_Imm(i);
}

//definiamo il modulo di un numero complesso
double Complesso::moduloComplex() const
{
        return sqrt(pow(Re,2)+pow(Imm,2));
}

Complesso Complesso::operator+(const Complesso & c) const
{
        Complesso somma;
        somma.Re=Re+c.Re;
        somma.Imm=Imm+c.Imm;
        return somma;
}

Complesso Complesso::operator+(const float & f) const
{
        Complesso somma;
        somma.Re=Re+f;
        somma.Imm=Imm+0;
        return somma;
}

bool Complesso::operator==(const Complesso & c) const
{
        return ((Re==c.Re) && (Imm==c.Imm));
}

bool Complesso::operator!=(const Complesso & c) const
{
        return !(*this==c);
}

Complesso Complesso::operator-(const Complesso & c) const
{
        Complesso differenza;
        differenza.Re=Re-c.Re;
        differenza.Imm=Imm-c.Imm;
        return differenza;
}

Complesso Complesso::operator-(const float & f) const
{
        Complesso differenza;
        differenza.Re=Re-f;
        differenza.Imm=Imm-0;
        return differenza;
}

Complesso Complesso::operator*(const Complesso & c) const
{
        Complesso prodotto;
        prodotto.Re=(Re * c.Re)-(Imm * c.Imm);
        prodotto.Imm=(Re * c.Imm)+(Imm * c.Re);
        return prodotto;
}

Complesso::~Complesso()
{
        Re=0;
        Imm=0;
}
