#Name: Jordan Sowell, Diego Masella 
#My Class: CPSC 1021
#Date: 4/7/2025

COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out



all: $(PROGRAM)
	

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp
	$(COMPILER) $(OPTIONS) main.cpp -o $(PROGRAM)

clean:
	rm *.out