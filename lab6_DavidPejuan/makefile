main.out: main.o Carro.o Motor.o Pintura.o Chasis.o
	g++ main.o Carro.o Motor.o Pintura.o Chasis.o -o main.out

main.o: main.cpp Carro.h 
	g++ -c main.cpp

Carro.o:Carro.cpp Carro.h Motor.h Pintura.h Chasis.h
	g++ -c Carro.cpp
Motor.o: Motor.cpp Motor.h
	g++ -c Motor.cpp
Pintura.o: Pintura.cpp 
	g++ -c Pintura.cpp
Chasis.o: Chasis.cpp
	g++ -c Chasis.cpp