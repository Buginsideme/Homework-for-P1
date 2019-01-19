#Project : conto
obj = main_HW4.o conto.o
exe = conto
main = main_HW4.cpp
file = conto.cpp conto.h

conto: main_HW4.o conto.o
	 g++ main_HW4.o conto.o -o conto

main_HW4.o : main_HW4.cpp
	g++ -c main_HW4.cpp

conto.o : conto.cpp conto.h
	g++ -c conto.cpp

.PHONY : clean

clean :
	rm -f *.o conto 
