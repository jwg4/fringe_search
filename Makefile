all: fringe_search_13

fringe_search_13: obj/fringe_search_13.o obj/fringe_13.o build
	gcc obj/fringe_search_13.o obj/fringe_13.o -o build/fringe_search_13

obj/fringe_search_13.o: src/fringe_search.cpp src/fringe_search.h src/constants.h obj
	cd src; gcc -c fringe_search.cpp -o ../obj/fringe_search_13.o

obj/fringe_13.o: src/fringe.cpp src/fringe.h src/constants.h obj
	cd src; gcc -c fringe.cpp -o ../obj/fringe_13.o

obj:
	mkdir obj

build:
	mkdir build

.PHONY: all
