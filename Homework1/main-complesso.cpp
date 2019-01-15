//Traccia Homework1
// #include "v_complesso.h"
#include "complesso.h"

int main(){
        /*vettore v;
        int riempi;
        LeggiElementi(v,riempi);
        StampaVettore(v,riempi);
        cout<<"\nEcco i moduli dei numeri: "<<"{ ";
        for (int i=0; i<riempi; i++)
                cout<<v[i].moduloComplex()<<"; ";
        cout<<"}";
        ModuloBubbleSort(v,riempi);
        cout<<"\nEcco i moduli ordinati: "<<"{ ";
        for (int i=0; i<riempi; i++)
                cout<<v[i].moduloComplex()<<"; ";
        cout<<" }";
        cout<<"\n\n";*/


        Complesso c1, c2, somma, prodotto, c3(3,3);
        cin>>c1;
        cin>>c2;
        cout<<c1;
        cout<<c2;
        //modulo
        cout << "\nIl modulo di C1: " <<c1.moduloComplex();
        cout << "\nIl modulo di C2: " <<c2.moduloComplex();
        //somma
        somma=c1+c2;
        cout << "\nSomma: "<<somma;
        //prodotto
        prodotto=c1*c2;
        cout << "\nProdotto: "<<prodotto;

        cout<<"\n\n";
        return 0;
}
