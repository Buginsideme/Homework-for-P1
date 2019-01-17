//TODO:Implementare la resize
//Description in Homework3.rtf

#ifndef _dynvet_h
#define _dynvet_h

#include<iostream>
#include<cstdlib>
using namespace std;


typedef int T;

class dynvet {
        friend ostream & operator<<(ostream &, const dynvet &);
        friend istream & operator>>(istream &, dynvet &);
private:
        T *v;
        int size;
        int count;
        // void resize();  //ridimensionare il vettore a una data dimensione
public:
        explicit dynvet(const int =2);
        dynvet(const dynvet &);
        const dynvet & operator=(const dynvet &);
        int get_size() const { return size;}  //restituisce la lunghezza del vettore (il numero di elementi in esso contenuti) *element*
        int get_count() const {return count;}  //restituisce il numero di elementi allocati *capacity*
        void set_size(int & s) {size=s;}
        bool empty();  //stabilire se il vettore è
        void push_back();  //inserire un elemento alla fine del vettore
        void pop_back();  //rimuovere l'elemento che si trova alla fine del vettore
        ~dynvet();
};

#endif
