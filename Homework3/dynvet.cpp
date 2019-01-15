//TODO:Ongoing, controllare operatore di stream
//Description in Homework3.rtf

#include"dynvet.h"
using namespace vett;

int dynvet::count=0;

dynvet::dynvet(int n) : size(n)
{
        count++;
        if (size<2)
                size=2;
        v=new T [size];
}

dynvet::dynvet(const dynvet & d)
{
        count++;
        v=new T [d.size];
        size=d.size;
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
                for (int i=0; i<size; i++)
                        v[i]=d.v[i];
        }
        return *this;
}

void dynvet::set_size(int & s)
{
        size=s;
}

bool dynvet::empty()
{
        return ((size==0) || (count==0));
}

ostream & operator<<(ostream & out, const dynvet & d)
{
        out<<"\nNumero degli element del vettre: "<<d.size;
        return out;
}

dynvet::~dynvet()
{
        delete [] v;
        delete first;
        delete next;
        delete last;
        count--;
}
