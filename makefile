project3Output: project3Main.o Character.o Barbarian.o Vampire.o BlueMen.o Medusa.o HarryPotter.o Menu.o
	g++ -Wall -g -std=c++0x project3Main.o Character.o Barbarian.o Vampire.o BlueMen.o Medusa.o HarryPotter.o Menu.o -o project3Output
	
project3Main.o: project3Main.cpp
	g++ -Wall -g -std=c++0x -c project3Main.cpp
	
Character.o: Character.cpp
	g++ -Wall -g -std=c++0x -c Character.cpp
	
Barbarian.o: Barbarian.cpp
	g++ -Wall -g -std=c++0x -c Barbarian.cpp
	
Vampire.o: Vampire.cpp
	g++ -Wall -g -std=c++0x -c Vampire.cpp
	
BlueMen.o: BlueMen.cpp
	g++ -Wall -g -std=c++0x -c BlueMen.cpp
	
Medusa.o: Medusa.cpp
	g++ -Wall -g -std=c++0x -c Medusa.cpp
	
HarryPotter.o: HarryPotter.cpp
	g++ -Wall -g -std=c++0x -c HarryPotter.cpp
	
Menu.o: Menu.cpp
	g++ -Wall -g -std=c++0x -c Menu.cpp
	
clean:
	rm *.o project3Output