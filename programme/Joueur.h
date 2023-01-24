/**
* Définition des actions pouvant être déclenchées par le joueur
* \fichier   Joueur.h
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 décembre 2022
* Créé le 10 décembre 2022
*/

#pragma once
#include "Case.h"
#include "Carte.h"
#include "ObjetAbstrait.h"
#include "functional"
#include "Clef.h"

class Joueur {
public:
	Joueur();
	Case* getPosition();
	void setPosition(Case* position);
	
	//commandes
	void examiner();
	void seDeplacer(string direction);
	void prendreObjet(string nomObjet);
	void look(string& obj);
	void take(string& obj);
	void use(string& obj);

	void dictCommande(string& commande);


private:
	Case* position_;
	Carte carte_;
	vector<shared_ptr<ObjetAbstrait>> objets_;
};