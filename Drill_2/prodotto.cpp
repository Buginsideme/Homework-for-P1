//Description in main_es_2.cpp

#include"prodotto.h"


/*prodotto::prodotto()
{
        //cout<<"\nCostruttore senza argomenti.";
        strcpy(cod,"");
        descrizione=new char[1];
        produttore="";
        costo=0;
}*/

prodotto::prodotto(const char * C, const char * d, string p, float c)
{
        if (check_is_valid(C)) {
                strcpy(cod,C);
        }
        else
                cout<<"\nCodice invalido, ecco il codice di default: "<<get_cod()<<endl;
        descrizione=new char [strlen(d)+1];
        strcpy(descrizione,d);
        produttore=p;
        if (c<0)
                costo=0;
        else
                costo=c;
}

prodotto::prodotto(const prodotto & p1)
{
        strcpy(cod,p1.cod);
        descrizione=new char [strlen(p1.descrizione)+1];
        strcpy(descrizione,p1.descrizione);
        produttore=p1.produttore;
        costo=p1.costo;
}

const char * prodotto::get_cod() const
{
        return cod;
}

const char * prodotto::get_des() const
{
        return descrizione;
}

string prodotto::get_pro() const
{
        return produttore;
}

float prodotto::get_cos() const
{
        return costo;
}

void prodotto::set_cod(const char * C)
{
        if (check_is_valid(C)) {
                strcpy(cod,C);
        }
        else
                cout<<"\nCodice invalido, ecco il codice di default: "<<get_cod()<<endl;
}

void prodotto::set_des(const char * d)
{
        delete [] descrizione;
        descrizione=new char [strlen(d)+1];
        strcpy(descrizione,d);
}

void prodotto::set_pro(string p)
{
        produttore=p;
}

void prodotto::set_cos(float & c)
{
        if (c<0)
                costo=0;
        else
                costo=c;
}

prodotto::~prodotto()
{
        strcpy(cod,"");
        delete [] descrizione;
        produttore="";
        costo=0;
}

ostream & operator<<(ostream & out, const prodotto & p)
{
        out<<"\nProdotto: "<<p.cod<<' '<<p.descrizione<<' '<<p.produttore<<' '<< p.costo;
        return out;
}

istream & operator>>(istream & in, prodotto & p)
{
        char buffer[100];
        float c;
        cout<<"\nInserisci il codice: ";
        in.getline(buffer,100);
        p.set_cod(buffer);
        cout<<"\nInserisci la descrizione: ";
        in.getline(buffer,100);
        p.set_des(buffer);
        cout<<"\nInserisci il produttore: ";
        in.getline(buffer,100);
        cout<<"\nInserisci il costo: ";
        p.set_pro(buffer);
        in>>c;
        p.set_cos(c);
        return in;
}

bool prodotto::check_is_valid(const char * C) const
{
	bool A, B, c, D;

	A=(strlen(C)==8);
	B=((C[0]>='A') && (C[0]<='Z'));
	c=((C[1]>='A') && (C[1]<='Z'));
	return (A && B && c);
}

const prodotto & prodotto::operator=(const prodotto & p)
{
        if (this != &p) {
                strcpy(cod,p.cod);
                delete [] descrizione;
                descrizione=new char[strlen(p.descrizione)+1];
                strcpy(descrizione,p.descrizione);
                produttore=p.produttore;
                costo=p.costo;
        }
        return *this;
}

bool prodotto::operator==(const prodotto & p) const
{
        return (!strcmp(cod,p.cod) && !strcmp(descrizione,p.descrizione) &&
             (produttore==p.produttore) && (costo==p.costo));
}

bool prodotto::operator!=(const prodotto & p) const
{
        return !(*this==p);
}

bool prodotto::operator>(const prodotto & p) const
{
        return (costo>p.costo);
}

bool prodotto::operator<(const prodotto & p) const
{
        return (costo<p.costo);
}

bool prodotto::operator>=(const prodotto & p) const
{
        return !(*this<p);
}

bool prodotto::operator<=(const prodotto & p) const
{
        return !(*this>p);
}
