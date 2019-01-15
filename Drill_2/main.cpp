#include"prodotto.h"

int main() {
        prodotto cell("AS345675","casa","topo",15),p,c(cell);

        cell.set_cod("Casaoooo0");
        //cin>>p;
        cout<<cell.get_cod();
        //cout<<p;
        p=cell;
        cout<<p;
        //cout<<p.get_cod();
        if (cell==p)
                cout<<"\nSono uguali.";
        cout<<"\n\n";
        return 0;
}
