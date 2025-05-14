
 /* Nom de fichier 
 *      main.cpp
 * 
 * Sommaire
 *      Fichier de départ pour le projet ActiviteHeritageV2
 * 
 * Auteur 
 *      MOHAMED YASSINE YAHYAOUI & AYMAN DABOUN & ADNANE LAHMIMSI
 * 
 * Date de création
 *      7 mai 2025
 */  



#include <Arduino.h>
#include <iostream>
#include "Etudiant.h"
#include "EtudiantFils.h"
//********************************************************************************
// Déclaration des fonctions
//********************************************************************************
void testEtudiant(void);


//********************************************************************************
// Déclartions des variables globales
//********************************************************************************



//********************************************************************************
// fonction setup (est appelée une sule fois au lancement du programme)
//********************************************************************************
void setup() {
  Serial.begin(9600);             // Démarrer le port série par défaut à 9600bauds
  //printf("Hello world !\n\n");

  pinMode(LED_BUILTIN, OUTPUT);   // DEL embarqué configuré en sortie

  testEtudiant();  
}


//********************************************************************************
// Loop (est appelé en boucle pour l'exécution du programme)
//********************************************************************************
void loop() {

  //digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));   //Changer état de la DEL

  delay(1000);                                            //Attendre une seconde
}


//********************************************************************************
// fonction testEtudiant permet de créer un étudiant et de valider le 
// fonctionnement de la classe Etudiant.
//********************************************************************************
void testEtudiant(void) 
{
  // int numeroMatriculeTmp;
  // int moyenneTmp;

  // Etudiant owen;
  // owen.setMatricule(2288053);
  // owen.setMoyenne(99);

  // numeroMatriculeTmp = owen.getMatricule();
  // moyenneTmp = owen.getMoyenne(); 
  // printf("Owen, matricule # %d, moyenne %d\n", numeroMatriculeTmp, moyenneTmp);

  //-------------------TGE-------------------------
  EtudiantTGE tge;
  
  tge.setMatricule(2291718);
  tge.setMoyenne(63);
  tge.setMaitriseOscillo(true);
  printf("\n\rTGE\n\rMatricule: %d\n\rMoyenne: %d\n\rMaitrise oscillo: %s\n\r\n\r\n\r",tge.getMatricule(), tge.getMoyenne(), tge.getMaitriseOscillo() ? "oui" : "non");

  //-----------------Musique----------------------
  EtudiantMusique musique;
  musique.setMatricule(3123123);
  musique.setMoyenne(90);
  musique.setNbrInstruments(4);
  printf("Musique\n\rMatricule: %d\n\rMoyenne: %d\n\rInstruments: %d\n\r\n\r\n\r", musique.getMatricule(), musique.getMoyenne(), musique.getNbrInstruments());


  //---------------Art & Lettre-------------------
  EtudiantArtLettre art;
  art.setMatricule(4001122);
  art.setMoyenne(75);
  art.setNbrLivresLus(6);
  printf("Art & Lettres\n\rMatricule: %d\n\rMoyenne: %d\n\rLivres lus: %d\n\r\n\r\n\r", art.getMatricule(), art.getMoyenne(), art.getNbrLivresLus());


  //----------------Administration---------------
  EtudiantAdmin admin;
  admin.setMatricule(3034234);
  admin.setMoyenne(82);
  admin.setCoutSession1(256.25);
  printf("Admin\n\rMatricule: %d\n\rMoyenne: %d\n\rCout session: %.2f $\n\r\n\r\n\r",  admin.getMatricule(), admin.getMoyenne(), admin.getCoutSession1());
}