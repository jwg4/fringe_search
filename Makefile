all: fringe_search_13 test

test: tests/test_fringe.py obj/fringe_13.o
	python -m unittest tests.test_fringe

fringe_search_13: obj/fringe_search_13.o obj/fringe_13.o build
	g++ obj/fringe_search_13.o obj/fringe_13.o -o build/fringe_search_13

obj/fringe_search_13.o: src/fringe_search.cpp src/fringe_search.h src/constants.h obj
	cd src; g++ -c fringe_search.cpp -o ../obj/fringe_search_13.o

obj/fringe_13.o: src/fringe.cpp src/fringe.h src/constants.h obj
	cd src; g++ -c fringe.cpp -o ../obj/fringe_13.o

obj:
	mkdir obj

build:
	mkdir build

.PHONY: all test
