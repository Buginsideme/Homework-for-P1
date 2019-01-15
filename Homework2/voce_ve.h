//Description in Homework2.rtf

#ifndef _voce_ve_h
#define _voce_ve_h

#include "voce.h"

const int md=20;
typedef voce lista[md];

//Prototypes
void read_l(lista &, int &);  //consente l’inizializzazione dell’elenco e l’ingresso dei suoi elementi da tastiera
void write_l(const lista & ,const int &);  // consente la visualizzazione dell’elenco
bool in_my_list(const lista &, const int &, const voce &, int &);  // determina se l’elemento x (la voce) esiste nell’elenco e in caso affermativo pos fornisce la posizione della sua prima occorrenza
bool is_full(int &);  // stabilisce se l’elenco è pieno
bool is_empty(int &);  // stabilisce se l’elenco è vuoto
void sort_l(lista &, const int &);  // ordina l’elenco (in ordine crescente)
void insert(lista &,int &, voce &);  // inserisce un elemento nell’elenco nella prima posizione libera
void insert_ord(lista &,int &, voce &);  // si applica ad un elenco ordinato. Inserisce l’elemento “e” rispettando l’ordinamento (scompattamento)
void remove_v(lista &,int &, int &, voce &);  // elimina la voce “e” dall’elenco se presente (compattamento)

#endif
