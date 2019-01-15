//Description in Homework2.rtf

#include "voce_ve.h"

//Function
void read_l(lista & l, int & d)
{
        cout<<"\nInserire il numero di elementi della lista (1 - "<<md<<"): ";
        cin>>d;
        while(d<1 || d>md){
          cout<<"\nERRORE! riempimento invalido, reinseriscilo (1-"<<md<<"): ";
          cin>>d;
        }
        for (int i=0; i<d; i++) {
                cin>>l[i];
        }
}

void write_l(const lista & l,const int & d)
{
        for (int i=0; i<d; i++) {
                cout<<"\nEcco la "<<i+1<<"° voce: "<<l[i];
        }
}

bool in_my_list(const lista & l, const int & d, const voce & x, int & p)
{
        int i=0,j=d-1,k=0;
        do {
                k=(i+j)/2;
                if(l[k]<x)
                        i=k+1;
                else j=k-1;
        }while (i<=j && l[k]!=x);
        p=k;
        return l[k]==x;
}

bool is_full(int & d)
{
        return (d<md || d>md);
}

bool is_empty(int & d)
{
        return (d==0);
}

//da ottimizzare
void sort_l(lista & l, const int & d)
{
        bool swapped=false;
        int i=0;
        while (i<(d-1) && !swapped) {
                for(int j=0; j<(d-i-1); j++) {
                        if(l[j]>l[j+1]) {
                                swap_v(l[j],l[j+1]);
                                swapped=true;
                        }
                }
                i++;
                swapped=false;
        }
}

void insert(lista & l, int & d, voce & e)
{
        int pos=d+1;
        for(int i=d-1;i>=pos-1;i--)
           l[i+1]=l[i];
        l[pos-1]=e;
        d++;
}

void insert_ord(lista & l,int & d, voce & e)
{
        int pos=0;
        cout<<"\nInserimento della voce nel vettore ordinato:";
        for (int i=0; i<d; i++) {
                if (e>l[i+1]) {
                        pos=i;
                }
        }
        for(int i=d-1;i>=pos-1;i--)
                l[i+1]=l[i];
        l[pos]=e;
        d++;
}

void remove_v(lista & l, int & d, int & p, voce & e)
{
        cout<<"\nEliminazione voce scelta: ";
        in_my_list(l,d,e,p);
        for (int j=p; j<d; j++)
                l[j]=l[j+1];
        d--;
}
