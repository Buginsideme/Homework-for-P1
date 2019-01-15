//Description in Homework2.rtf

#include "voce.h"

voce::voce(const int c, const char * d) {
	descrizione=new char[strlen(d)+1];
	strcpy(descrizione,d);
	chiave=c;
}

voce::voce(const voce & v)
{
	descrizione=new char[strlen(v.descrizione)+1];
	strcpy(descrizione,v.descrizione);
	chiave=v.chiave;
}

const voce & voce::operator=(const voce & v)
{
	if (this!=&v) {
		delete [] descrizione;
		descrizione=new char[strlen(v.descrizione)+1];
		strcpy(descrizione,v.descrizione);
		chiave=v.chiave;
	}
	return *this;
}

int voce::get_chiave() const
{
	return chiave;
}

const char * voce::get_descrizione() const
{
	return descrizione;
}

void voce::set_chiave(int c)
{
	chiave=c;
}

void voce::set_descrizione(const char * d)
{
	delete [] descrizione;
	descrizione=new char [strlen(d)+1];
	strcpy(descrizione,d);
}

ostream & operator<<(ostream & out, const voce & v)
{
	out<<"\nChiave: "<<v.chiave<<"\nDescrizione: "<<v.descrizione;
	return out;
}

istream & operator>>(istream & in, voce & v)
{
	char buffer[100];
	int c;
	cout<<"\nInserisci la chiave: ";
        in>>c;
	v.set_chiave(c);
        cout<<"\nInserisci la descrizione: ";
        cin.ignore();
        in.getline(buffer,100);
        v.set_descrizione(buffer);
	return in;
}

bool voce::operator==(const voce & v) const
{
        return ((chiave==v.chiave) && (!strcmp(descrizione,v.descrizione)));
}

bool voce::operator!=(const voce & v) const
{
	return !(*this==v);
}

bool voce::operator>(const voce & v) const
{
	return (chiave>v.chiave);
}

bool voce::operator<(const voce & v) const
{
	return (chiave<v.chiave);
}

voce::~voce()
{
	delete [] descrizione;
}

void swap_v(voce & x, voce & y) {
	voce temp;
	temp=x;
	x=y,
	y=temp;
}
