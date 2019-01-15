#Project : voce

voce: main.o voce.o voce_ve.o
	g++ main.o voce.o voce_ve.o -o voce

main.o : main.cpp
	g++ -c main.cpp

voce_ve.o : voce_ve.h voce_ve.cpp voce.h
	g++ -c voce_ve.cpp

voce.o : voce.cpp voce.h
	g++ -c voce.cpp

.PHONY : clean

clean :
	rm -f *.o voce
