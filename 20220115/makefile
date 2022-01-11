all:main

libadd.so:add.cpp
	g++ -fpic -shared $^ -o $@

libsquare.so:square.cpp
	g++ -fpic -shared $^ -o $@

libdumy.so:dumy.cpp
	g++ -fpic -shared $^ -o $@

main:main.cpp libadd.so libsquare.so libdumy.so
	g++ -L. -o$@ -ladd -lsquare -ldumy main.cpp

main1:main.cpp libadd.so libsquare.so libdumy.so
	g++ -L. main.cpp -o$@ -lsquare -ladd -ldumy

main_needed:main.cpp libadd.so libsquare.so libdumy.so
	g++ -Wl,-as-needed -o $@ -L. -ladd -lsquare main.cpp

main_needed1:main.cpp libadd.so libsquare.so libdumy.so
	g++ -Wl,-as-needed -o $@ -L. main.cpp -lsquare -ladd -ldumy
clean:
	rm -rf *.so main main_needed*
