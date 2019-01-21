//TODO: finire parte due
//Description Drill_3.rtf
#include"utente.h"
#include"gestore.h"
#include "noAuth.h"
using namespace mns;

const int N=2;

typedef utente * Uptr;

void f(const Uptr *);


int main(){
        utente Paolo1("PaoloRossi", "12345aaa");
        utente Paolo2("PaoloVerde", "12345bbb");
        gestore Mario("MarioBianchi", "16375ccc", "Amministratore di sistema");

        Uptr L[N];

        L[0]=&Paolo2;
        L[1]=&Mario;

        try{
                f(L);
        }
        catch(const noauth e) {
                cout<<e.what()<<' '<<e.get_info()<<endl;
        }

        if(Paolo1==Paolo2)
                cout<<"\nUguali."<<endl;
        else
                cout<<"\nDiversi."<<endl;

        Paolo1=Paolo2;

        if(Paolo1==Paolo2)
                cout<<"\nUguali."<<endl;
        else
                cout<<"\nDiversi."<<endl;
        cout<<"\n\n";
        return 0;
}

void f(const Uptr* A)
{
        for(int i=0; i<N; i++) {
                if(A[i]->valida()) {
                        cout<<"\nUtente Valido: "<<A[i]->get_login()<<endl;
                } else
                        throw noauth("errore di validazione credenziali", A[i]->get_login());
        }
}
