#include"utente.h"
namespace mns {

utente::utente(const char * l, const char * p)
{
        login=new char [strlen(l)+1];
        strcpy(login,l);
        password=new char [strlen(p)+1];
        strcpy(password,p);
}

utente::utente(const utente & u)
{
        login=new char [strlen(u.login)+1];
        strcpy(login,u.login);
        password=new char [strlen(u.password)+1];
        strcpy(password,u.password);
}

const utente & utente::operator=(const utente & u)
{
        if (this != &u) {
                if (login)
                        delete [] login;
                if (password)
                        delete [] password;
                login=new char [strlen(u.login)+1];
                strcpy(login,u.login);
                password=new char [strlen(u.password)+1];
                strcpy(password,u.password);
        }
        return *this;
}

void utente::set_login(const char * l)
{
        delete [] login;
        login=new char [strlen(l)+1];
        strcpy(login,l);
}

void utente::set_password(const char * p)
{
        delete [] password;
        password=new char [strlen(p)+1];
        strcpy(password,p);
}

ostream & operator<<(ostream & out, const utente & u)
{
        out<<"\nLogin: "<<u.login<<endl;
        out<<"\nPassword: "<<u.password<<endl;
        return out;
}

istream & operator>>(istream & in, utente & u)
{
        char buffer[100];
        cout<<"\nInserisci il login: ";
        in.getline(buffer,100);
        u.set_login(buffer);
        strcpy(buffer,"");
        cout<<"\nInserisci la password: ";
        in.getline(buffer,100);
        u.set_password(buffer);
        strcpy(buffer,"");
        return in;
}

bool utente::operator==(const utente & u) const
{
        return (!strcmp(login,u.login) && !strcmp(password,u.password));
}

bool utente::valida() const
{
        int a,b;
        cout<<"\nInserisci la lunghezza minima: ";
        cin>>a;
        cout<<"\nInserisci la lunghezza massima: ";
        cin>>b;
        return ((strlen(password)>=a) && (strlen(password)<=b));
}

utente::~utente()
{
        delete [] login;
        delete [] password;
}

} //end_namespace
