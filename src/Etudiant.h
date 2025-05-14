/*
 * Nom de fichier 
 *      Etudiant.h
 * 
 * Sommaire
 *      Fichier header pour la classe Etudiant.h
 * 
 * Auteur 
 *      Maxime Champagne
 *  
 */

#ifndef ETUDIANT_H
#define ETUDIANT_H

//Déclaration de la classe Etudiant
class Etudiant {
    protected:
    int numeroMatricule = 0;
    int moyenne = 0;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setMoyenne(int);
    int getMoyenne();
};

#endif //ETUDIANT_H