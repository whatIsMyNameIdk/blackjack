#!/bin/sh
mkdir obj

g++ -c -o obj/main.o src/main.cpp
g++ -c -o obj/deck.o src/deck/deck.cpp
g++ -c -o obj/card.o src/card/card.cpp

g++ -o blackjack obj/main.o obj/deck.o
