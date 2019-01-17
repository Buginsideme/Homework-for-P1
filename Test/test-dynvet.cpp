#include<iostream>
using namespace std;

// const int md=10;
typedef int T;
// typedef T vec[md];
void stampa(T & n, T * & v) {
        cout<<"\nVettore: {";
        for(int i=0; i<n; i++) {
                cout<<" "<<*(v+i)<<" ";
        }
        cout<<"}"<<endl;
}

int main(){
        T dim;
        const T punta=0; //la punta resta ovviamente fissa
        T *d, *coda, *fine;
        cin>>dim;
        d = new T[dim];
        fine=&dim;
        for(int i=0; i<dim; i++) {
                cin>>*(d+i);
        }
        stampa(dim,d);
        dim++; //passaggio fondamentale *per ora*
        d[*fine-1]=4; //coda=fine-1, perchè per ogni nuovo utilizzo incremento di 1 *per ora*
        d[punta]=5;
        stampa(dim,d);
        cout<<*fine;

        delete [] d;
        cout<<"\n\n";
        return 0;
}
