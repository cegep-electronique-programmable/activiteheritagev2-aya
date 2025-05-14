#ifndef ETUDIANTFILS_H
#define ETUDIANTFILS_H

#include <string>
#include <iostream>
#include "Etudiant.h"

//********************************************************************************
// Classe TGE
//********************************************************************************
class EtudiantTGE : public Etudiant {
private:
    bool maitriseOscillo;

public:
    void setMatricule(int matricule) 
    {
        if (std::to_string(matricule)[0] == '2') //si ca commence par 2
        {
            Etudiant::setMatricule(matricule);
        } else 
        {
            std::cout << "Erreur: Votre matricule TGE doit commencer par 2." << std::endl; //message erreur
        }
    }
//-----------------------------------------------------
    void setMaitriseOscillo(bool valeur) 
    {
        maitriseOscillo = valeur;
    }

//-----------------------------------------------------
    bool getMaitriseOscillo() 
    {
        return maitriseOscillo;
    }
};

//********************************************************************************
// Classe Musique
//********************************************************************************

class EtudiantMusique : public Etudiant {
private:
    int nbrInstruments;

public:
    void setMatricule(int matricule) 
    {
        if (std::to_string(matricule)[0] == '3') //si ca commence par 3
        {
            Etudiant::setMatricule(matricule);
        } else 
        {
            std::cout << "Erreur: Votre matricule Musique doit commencer par 3." << std::endl; //message erreur
        }
    }
//-----------------------------------------------------
    void setNbrInstruments(int  Nb_instruments) 
    {
        nbrInstruments = Nb_instruments;
    }

//-----------------------------------------------------
    int getNbrInstruments() 
    {
        return nbrInstruments;
    }
};

//********************************************************************************
// Classe Art et Lettres
//********************************************************************************

class EtudiantArtLettre : public Etudiant {
private:
    int nbrLivresLus;

public:
    void setMatricule(int matricule) 
    {
        if (std::to_string(matricule)[0] == '4') //si ca commence par 4
        {
            Etudiant::setMatricule(matricule);
        } else 
        {
            std::cout << "Erreur: Votre matricule ArtLettre ne commence pas par 4." << std::endl; //message erreur
        }
    }
//-----------------------------------------------------

    void setNbrLivresLus(int Nb_Livres) 
    {
        nbrLivresLus = Nb_Livres;
    }

//-----------------------------------------------------
    int getNbrLivresLus() 
    {
        return nbrLivresLus;
    }

};



//--------------------------Classe administration------------------------------------

class EtudiantAdmin : public Etudiant {
private:
    float coutSession1;

public:
    void setMatricule(int matricule) {
        if (std::to_string(matricule)[0] == '5') {
            Etudiant::setMatricule(matricule);
        } else {
            std::cout << "INVALIDE: La matricule d'administration doit commencer par 5" << std::endl;
        }
    }

    void setCoutSession1(float cost) {
        coutSession1 = cost;
    }

    float getCoutSession1() {
        return coutSession1;
    }
};





#endif
