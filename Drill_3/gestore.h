#ifndef _gestore_h
#define _gestore_h

#include<iostream>
#include<cstring>
#include"utente.h"

namespace mns {

class gestore : public utente {
        friend ostream & operator<<(ostream &, const gestore &);
        friend istream & operator>>(istream &, gestore &);
private:
        char * profilo;
public:
        gestore(const char * ="Utente", const char * ="", const char * ="Utente");
        gestore(const gestore &);
        const gestore & operator=(const gestore &);
        const char * get_login() const {return profilo;}
        void set_profilo(const char *);
        bool operator==(const gestore &) const;
        virtual bool valida() const;
        virtual ~gestore();
};

} //end_namespace

#endif //_gestore_h
