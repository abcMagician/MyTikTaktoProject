#ifndef JOUEUR_H
#define JPUEUR_h


#include <string>

using namespace std;

class Joueur{
private:
        string NomJoueur;
        unsigned int PointDuJoueur; //entier positive ou null
public:
        Joueur(); //constructeur
        ~Joueur(); //Destructeur
        void setNom(const string & NouveauNom);
        void setPoints(const int & Points);
        unsigned int getPointDuJoueur()const;
        string getNomJoueur()const;
        void poserUnXouUnO();
        void choisirXouO();
};

#endif
