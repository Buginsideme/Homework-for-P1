#Project : prodotto

prodotto: main.o prodotto.o
	g++ main.o prodotto.o -o prodotto

main.o : main.cpp
	g++ -c main.cpp

prodotto.o : prodotto.cpp prodotto.h
	g++ -c prodotto.cpp

.PHONY : clean

clean :
	rm -f *.o prodotto
