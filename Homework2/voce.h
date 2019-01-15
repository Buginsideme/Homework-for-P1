//Description in Homework2.rtf

#ifndef _voce_h
#define _voce_h

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class voce{
        friend ostream & operator<<(ostream &, const voce &);
        friend istream & operator>>(istream &, voce &);
private:
        int chiave;
        char * descrizione;
public:
        voce(const int =0, const char * ="");
        voce(const voce &);
        const voce & operator=(const voce &);
        int get_chiave() const;
        const char * get_descrizione() const;
        void set_chiave(int);
        void set_descrizione(const char *);
        bool operator==(const voce &) const;
        bool operator!=(const voce &) const;
        bool operator>(const voce &) const;
        bool operator<(const voce &) const;
        ~voce();
};

void swap_v(voce &, voce &);

#endif
