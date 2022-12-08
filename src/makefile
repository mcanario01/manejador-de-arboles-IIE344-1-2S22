all:
	g++ -c ./TDA-Arbol/TDA-Lista-C/lista.cpp
	g++ -c ./TDA-Arbol/arbol.cpp
	g++ -c ./TDA-Lista-v2/listaLecturaArbol.cpp
	g++ -c manejaArbol.cpp
	g++ -c main.cpp
	g++ -o manejador-de-arbol lista.o arbol.o listaLecturaArbol.o manejaArbol.o main.o
	rm *.o

run:
	g++ -c ./TDA-Arbol/TDA-Lista-C/lista.cpp
	g++ -c ./TDA-Arbol/arbol.cpp
	g++ -c ./TDA-Lista-v2/listaLecturaArbol.cpp
	g++ -c manejaArbol.cpp
	g++ -c main.cpp
	g++ -o manejador-de-arbol lista.o arbol.o listaLecturaArbol.o manejaArbol.o main.o
	rm *.o
	./manejador-de-arbol ../dat/arbol.txt

clear:
	rm *.o
	rm manejador-de-arbol