/**
* Définition des commandes interceptées dans la console et les traduit en des actions du joueur. 
* \fichier   Commandes.h
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 décembre 2022
* Créé le 11 décembre 2022
*/

#pragma once
#include "Joueur.h"

class Commandes {
public:
	Commandes();
	bool getJeuActif();
	void setJeuActif(bool arg);
	void lireCommande();
	void quitterJeu();
	void dictCommandes(string& commande);

private:
	Joueur joueur_;
	bool jeuActif_; //sera utile pour la future méthode pour quitter le jeu
};