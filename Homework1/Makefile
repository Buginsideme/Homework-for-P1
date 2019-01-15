#Project : complex

complex: main-complesso.o complesso.o v_complesso.o
	g++ main-complesso.o complesso.o v_complesso.o -o complex

main-complesso.o : main-complesso.cpp
	g++ -c main-complesso.cpp

v_complesso.o : v_complesso.h v_complesso.cpp complesso.h
	g++ -c v_complesso.cpp

complesso.o : complesso.cpp complesso.h
	g++ -c complesso.cpp

.PHONY : clean

clean :
	rm -f *.o complex
