game: TestCompetition.o Competition.o Hare.o Road.o Tortoise.o
	g++ TestCompetition.o Competition.o Hare.o Road.o Tortoise.o -o game

TestCompetition.o: TestCompetition.cpp
	g++ -c TestCompetition.cpp

Competition.o: Competition.cpp
	g++ -c Competition.cpp

Hare.o: Hare.cpp
	g++ -c Hare.cpp

Road.o: Road.cpp
	g++ -c Road.cpp

Tortoise.o: Tortoise.cpp
	g++ -c Tortoise.cpp

clean:
	rm *.o game

