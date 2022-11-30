all:
	g++ -c ./TDA-Arbol/TDA-Lista/lista.cpp
	g++ -c ./TDA-Arbol/arbol.cpp
	g++ -c manejaArbol.cpp
	g++ -c main.cpp
	g++ -o ../manejador-de-arbol lista.o arbol.o manejaArbol.o main.o
	rm *.o

run:
	g++ -c ./TDA-Arbol/TDA-Lista-C/lista.cpp
	g++ -c ./TDA-Arbol/arbol.cpp
	g++ -c manejaArbol.cpp
	g++ -c main.cpp
	g++ -o ../manejador-de-arbol lista.o arbol.o manejaArbol.o main.o
	rm *.o
	../manejador-de-arbol ./dat/arbol.txt