#include "v_complesso.h"

//inserimento numeri complessi nel vettore
void LeggiElementi(vettore & vet, int & nelem)
{
        cout<<"\nInserisci il riempimento del vettore (1-"<<md<<"): ";
        cin>>nelem;
        while(nelem<1 || nelem>md){
          cout<<"\nERRORE! riempimento invalido, reinseriscilo (1-"<<md<<"): ";
          cin>>nelem;
        }
        for(int i=0; i<nelem; i++){
          cout<<"\nDammi il "<<i+1<<"° numero: ";
          //leggiComplex(vet[i]);
          cin>>vet[i];
        }
}

//stampa degli elementi del vettore
void StampaVettore(const vettore vet, const int nelem)
{
        cout<<"\nEcco il vettore di ingresso: {";
        for(int i=0; i<nelem; i++) {
           cout<<" "<<vet[i]<<";";
           //stampaComplex(vet[i]);
        }
        cout<<"}";
}

// Funzione di ordinamento per scambi
void ModuloBubbleSort(vettore vet, const int nelem)
{
        bool trovato=false;
	int i=0;
	int nswaps=0;	// numero di scambi
	int ncycles=0;	// numero di iterazioni
	while(i<(nelem-1) && !trovato) {
		ncycles++;
		for(int j=0;j<(nelem-i)-1;j++) {
			if(vet[j].moduloComplex()>vet[j+1].moduloComplex()) {
				nswaps++;
                                swap(vet[j],vet[j+1]);
                                trovato=true;
			}
		}
                i++;
                trovato=false;
        }
	cout<<"\n Sono stati eseguiti "<<nswaps<<" scambi...";
	cout<<"\n ...e "<< ncycles<<" cicli.\n";
}
