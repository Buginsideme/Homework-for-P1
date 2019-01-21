#ifndef _utente_h
#define _utente_h

#include<iostream>
#include<cstring>
using namespace std;

namespace mns {

class utente {
        friend ostream & operator<<(ostream &, const utente &);
        friend istream & operator>>(istream &, utente &);
private:
        char * login;
protected:
        char * password;
public:
        utente(const char * ="Utente", const char * ="");
        utente(const utente &);
        const utente & operator=(const utente &);
        const char * get_login() const {return login;}
        void set_login(const char *);
        void set_password(const char *);
        bool operator==(const utente &) const;
        virtual bool valida() const;
        virtual ~utente();
};

} //end_namespace

#endif //_utente_h
