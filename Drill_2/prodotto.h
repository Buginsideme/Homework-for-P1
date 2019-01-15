//Description in main_es_2.cpp

#ifndef _prodotto_h
#define _prodotto_h

#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>

using namespace std;

typedef char codice[9];

class prodotto {
        friend ostream & operator<<(ostream &, const prodotto &);
        friend istream & operator>>(istream &, prodotto &);
private:
        codice cod;
        char * descrizione;
        string produttore;
        float costo;
        bool check_is_valid(const char *) const;
public:
        prodotto(const char * ="XX000000", const char * ="", string ="", float =0);
        prodotto(const prodotto &);
        const prodotto & operator=(const prodotto &);
        const char * get_cod() const;
        const char * get_des() const;
        string get_pro() const;
        float get_cos() const;
        void set_cod(const char *);
        void set_des(const char *);
        void set_pro(string);
        void set_cos(float &);
        bool operator==(const prodotto &) const;
        bool operator!=(const prodotto &) const;
        bool operator>(const prodotto &) const;
        bool operator<(const prodotto &) const;
        bool operator>=(const prodotto &) const;
        bool operator<=(const prodotto &) const;
        ~prodotto();
};

#endif
