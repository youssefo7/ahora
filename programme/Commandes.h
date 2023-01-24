/**
* D�finition des commandes intercept�es dans la console et les traduit en des actions du joueur. 
* \fichier   Commandes.h
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 d�cembre 2022
* Cr�� le 11 d�cembre 2022
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
	bool jeuActif_; //sera utile pour la future m�thode pour quitter le jeu
};