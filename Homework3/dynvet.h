//TODO:Ongoing
//Description in Homework3.rtf

#ifndef _dynvet_h
#define _dynvet_h

#include<iostream>
#include<cstdlib>
using namespace std;

namespace vett {

typedef int T;

class dynvet {
        friend ostream & operator<<(ostream &, const dynvet &);
        // friend istream & operator>>(istream &, dynvet &);
private:
        T *v, *first=NULL, *next=NULL, *last=NULL;
        int size;
        static int count;
        //void resize();  //ridimensionare il vettore a una data dimensione
public:
        explicit dynvet(const int =2);
        dynvet(const dynvet &);
        const dynvet & operator=(const dynvet &);
        void set_size(int &);
        int element() const {return size;}  //restituisce la lunghezza del vettore (il numero di elementi in esso contenuti)
        static int capacity() {return count;} //restituisce il numero di elementi allocati
        bool empty();  //stabilire se il vettore è vuoto
        ~dynvet();
};

}
#endif
