#Project : lab

lab: main-e_3.o utente.o gestore.o
	 g++ main-e_3.o utente.o gestore.o -o lab

main-e_3.o : main-e_3.cpp
	g++ -c main-e_3.cpp

utente.o : utente.cpp utente.h
	g++ -c utente.cpp

gestore.o : gestore.cpp gestore.h
	g++ -c gestore.cpp

.PHONY : clean

clean :
	rm -f *.o lab
