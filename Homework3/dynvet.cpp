//TODO:Implementare la resize
//Description in Homework3.rtf

#include"dynvet.h"

dynvet::dynvet(int n) : size(n)
{
        if (size<2) {
                size=2;
                count=size;
        }
        count=n;
        v=new T [size];
}

dynvet::dynvet(const dynvet & d)
{
        v=new T [d.size];
        size=d.size;
        count=d.count;
        for (int i=0; i<size; i++)
                v[i]=d.v[i];  //dynvet[i];
}

const dynvet & dynvet::operator=(const dynvet & d)
{
        if (this!=&d) {
                if (v)
                        delete [] v;
                v=new T [d.size];
                size=d.size;
                count=d.count;
                for (int i=0; i<size; i++)
                        v[i]=d.v[i];
        }
        return *this;
}

ostream & operator<<(ostream & out, const dynvet & d)
{
        if (d.v!=NULL) {
                out<<"\nVettore: {";
                for(int i=0; i<d.size; i++) {
                        out<<d.v[i]<<";";
                }
                out<<"}"<<endl;
        }
}

istream & operator>>(istream & in, dynvet & d)
{
        cout<<"\nSize ="<<d.size<<endl;
        for (int i=0; i<d.size; i++)
                in>>d.v[i];
        return in;
}

bool dynvet::empty()
{
        return ((size==0) || (count==0));
}


void dynvet::pop_back()
{
        if (!empty()) {
                for(int i=size-1;i<size;i++)
                  v[i]=v[i+1];
                size--;
        }
}

/*void dynvet::resize()
{
        if (!empty() && (size<count)) {
                count*=2;
        }
}*/

void dynvet::push_back()
{
        int ele;
        if (size<count) {
                cout<<"\nInserisci l'elemento: ";
                cin>>ele;
                for(int i=size;i>=size-1;i--)
                        v[i+1]=v[i];
                v[size]=ele;
                size++;
        }
}

dynvet::~dynvet()
{
        delete [] v;
        count=0;
}
