OBJ_FILES = obj/Joueur.o obj/main.o obj/Gris_du_jeu.o
INCLUDES = -I/usr/include
LIBS = -L/usr/lib -lm
LDFLAGS = `sdl-config --cflags --libs`


all: $(OBJ_FILES)
	g++ $(OBJ_FILES) -Wall -lSDL2 -o bin/MyTikTakToproject.out

obj/main.o: src/main.cpp src/Joueur/Joueur.h src/Gris_du_jeu/Gris_du_jeu.h
	g++ -Wall -o obj/main.o -c src/main.cpp 

obj/Joueur.o: src/Joueur/Joueur.cpp src/Joueur/Joueur.h
	g++ -Wall -o obj/Joueur.o -c src/Joueur/Joueur.cpp 

obj/Gris_du_jeu.o: src/Gris_du_jeu/Gris_du_jeu.cpp src/Gris_du_jeu/Gris_du_jeu.h
	g++ -Wall -o obj/Gris_du_jeu.o -c src/Gris_du_jeu/Gris_du_jeu.cpp $(INCLUDES)

clean: 
	rm -f *.o core $(OBJ_FILES)

exe:
	./bin/MyTikTakToproject.out
