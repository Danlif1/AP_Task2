# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -std=c++11
 
# **************************************************
a.out: main.o SafetyChecks.o Point.o PointReader.o KNN.o CalcDist.o
	$(CC) $(CFLAGS) main.o SafetyChecks.o Point.o PointReader.o KNN.o CalcDist.o

main.o: main.cpp SafetyChecks.h Point.h PointReader.h KNN.h
	$(CC) $(CFLAGS) main.cpp -c

SafetyChecks.o: SafetyChecks.h SafetyChecks.cpp
	$(CC) $(CFLAGS) SafetyChecks.cpp -c


Point.o: Point.h Point.cpp
	$(CC) $(CFLAGS) Point.cpp -c

PointReader.o: PointReader.h PointReader.cpp
	$(CC) $(CFLAGS) PointReader.cpp -c

KNN.o: KNN.h KNN.cpp
	$(CC) $(CFLAGS) KNN.cpp -c


CalcDist.o: CalcDist.h CalcDist.cpp
	$(CC) $(CFLAGS) CalcDist.cpp -c

clean:
	rm *.o a.out
