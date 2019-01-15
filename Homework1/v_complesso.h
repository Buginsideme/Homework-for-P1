#ifndef _v_complesso_h
#define _v_complesso_h

#include"complesso.h"

//massimo numero di elementi del vettore
const int md=20;

//def vettore di complessi
typedef Complesso vettore[md];

//Prototipi
void LeggiElementi(vettore &, int &);
void StampaVettore(const vettore, const int);
void ModuloBubbleSort(vettore, const int);

#endif
