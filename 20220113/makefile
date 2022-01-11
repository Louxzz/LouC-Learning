all:libsquare.a libadd.a link_main_square_add

add.o:add.cpp

libadd.a:add.o
	ar cr $@ $^
square.o:square.cpp

libsquare.a:square.o
	ar cr $@ $^
link_add_square_main:
	g++ -L. -ladd -lsquare main.cpp

link_square_add_main:
	g++ -L. -lsquare -ladd main.cpp

link_main_add_square:main.cpp
	g++ -L. main.cpp -ladd -lsquare

link_main_square_add:main.cpp
	g++ -L../3/ main.cpp -lsquare -ladd 
clean:
	rm -rf *.a *.o
