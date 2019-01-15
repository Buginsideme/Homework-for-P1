#Project : dynvet

dynvet: main_HW3.o dynvet.o
	g++ main_HW3.o dynvet.o -o dynvet

main_HW3.o : main_HW3.cpp
	g++ -c main_HW3.cpp

dynvet.o : dynvet.cpp dynvet.h
	g++ -c dynvet.cpp

.PHONY : clean

clean :
	rm -f *.o dynvet
