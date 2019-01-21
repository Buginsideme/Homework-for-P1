#include"gestore.h"
namespace mns {

gestore::gestore(const char * l, const char * p, const char * pr) : utente(l,p)
{
        profilo=new char [strlen(pr)+1];
        strcpy(profilo,pr);
}

gestore::gestore(const gestore & g) : utente(g)
{
        profilo=new char [strlen(g.profilo)+1];
        strcpy(profilo,g.profilo);
}

const gestore & gestore::operator=(const gestore & g)
{
        if (this != & g) {
                utente::operator=(g);
                if (profilo)
                        delete [] profilo;
                profilo=new char [strlen(g.profilo)+1];
                strcpy(profilo,g.profilo);
        }
        return *this;
}

void gestore::set_profilo(const char * p)
{
        delete [] profilo;
        profilo=new char [strlen(p)+1];
        strcpy(profilo,p);
}

ostream & operator<<(ostream & out, const gestore & g)
{
        out<<(utente &)g<<"\nProfilo: "<<g.profilo<<endl;
        return out;
}

istream & operator>>(istream & in, gestore & g)
{
        in>>(utente &)g;
        char buffer[100];
        cout<<"\nInserisci il profilo: ";
        in.getline(buffer,100);
        g.set_profilo(buffer);
        strcpy(buffer,"");
        return in;
}

bool gestore::operator==(const gestore & g) const
{
        return (utente::operator==(g) && !strcmp(profilo,g.profilo));
}

bool gestore::valida() const
{
        int a,b,l=strlen(password)+strlen(profilo);
        cout<<"\nInserisci la lunghezza minima: ";
        cin>>a;
        cout<<"\nInserisci la lunghezza massima: ";
        cin>>b;
        return ((l>=a) && (l<=b));
}

gestore::~gestore()
{
        delete [] profilo;
}

} //end_namespace
