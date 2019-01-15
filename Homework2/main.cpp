//Description in Homework2.rtf
#include "voce_ve.h"

int main(){
        int dim=0, pos=0;
        voce ele;
        lista l1;
        read_l(l1,dim);
        write_l(l1,dim);
        cin>>ele;
        insert_ord(l1,dim,ele);
        insert(l1,dim,ele);
        remove_v(l1,dim,pos,ele);
        write_l(l1,dim);
        cout<<"\nInserire l'elemento da cercare: ";
        cin>>ele;
        if (in_my_list(l1,dim,ele,pos)) {
                cout<<"\nElemento presente in "<<pos+1<<"° posizione.";
        }
        else
                cout<<"\nElemento non presente.";
        cout<<"\n\n";
        return 0;
}
