all: fringe_search_13

fringe_search_13: obj/fringe_search_13.o
	gcc obj/fringe_search_13.o -o build/fringe_search_13

obj/fringe_search_13.o: src/fringe_search.cpp src/fringe_search.h src/constants.h
	cd src
	gcc fringe_search.cpp -o ../obj/fringe_search_13.o

.PHONY: all
