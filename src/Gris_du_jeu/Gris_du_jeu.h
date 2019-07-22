#ifndef GRIS_DU_JEU_H
#define GRIS_DU_JEU_H

#include <string>

using namespace std;

class Gris_du_jeu{
private:
       string GrisDuJeu[3][3];       
        
public:
        Gris_du_jeu();
        ~Gris_du_jeu();
        bool CaseExisteDeja()const;
        bool CaseEstVide(const string &cetteCase)const;
        bool YatilDesCasesLibres()const;
        void affichage()const;
        
};
#endif
