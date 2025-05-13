#ifndef ETUDIANTFILS_H
#define ETUDIANTFILS_H

#include <string>
#include <iostream>
#include "Etudiant.h"

// Classe TGE
class EtudiantTGE : public Etudiant {
private:
    bool maitriseOscillo;

public:
    void setMatricule(int matricule) {
        if (std::to_string(matricule)[0] == '2') {
            Etudiant::setMatricule(matricule);
        } else {
            std::cout << "Erreur: Le matricule TGE doit commencer par 2." << std::endl;
        }
    }

    void setMaitriseOscillo(bool valeur) {
        maitriseOscillo = valeur;
    }

    bool getMaitriseOscillo() {
        return maitriseOscillo;
    }
};

#endif
