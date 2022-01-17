all:main

libadd.so:add.cpp
	g++ -fpic -shared $^ -o $@

libsquare.so:square.cpp libadd.so
	g++ -fpic -shared $^ -o $@ -L. -ladd


main:main.cpp libsquare.so
	g++ -L. -o $@ -lsquare main.cpp

main1:main.cpp libsquare.so
	g++ -L. -o $@ main.cpp -lsquare

main_needed:main.cpp libsquare.so
	g++ -Wl,-as-needed -o $@ -L. -lsquare main.cpp

main_needed1:main.cpp libsquare.so
	g++ -Wl,-as-needed -o $@ -L. main.cpp -lsquare
clean:
	rm -rf *.so main main_needed* main1
