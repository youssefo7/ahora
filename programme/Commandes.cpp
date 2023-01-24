/**
* Définition des commandes interceptées dans la console et les traduit en des actions du joueur.
* \fichier   Commandes.cpp
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 décembre 2022
* Créé le 11 décembre 2022
*/

#include "Commandes.h"

Commandes::Commandes(): joueur_()
{
	jeuActif_ = true;
	joueur_.examiner();
}

bool Commandes::getJeuActif()
{
	return jeuActif_;
}

void Commandes::setJeuActif(bool arg)
{
	jeuActif_ = arg;
}

void Commandes::lireCommande()
{
	cout << "> ";
	string commande;
	getline(cin, commande);

	if (commande != "N"
		and commande != "E"
		and commande != "O"
		and commande != "S")
		dictCommandes(commande);
	else
		joueur_.seDeplacer(commande);

}

void Commandes::dictCommandes(string& commande) {
	shared_ptr<Clef> clef = make_shared<Clef>();
	shared_ptr<Echelle> echelle = make_shared<Echelle>();
	vector<shared_ptr<ObjetAbstrait>> vecteurObjetDescriptions = { clef, echelle };
	map<string, function<void()>> commandes =
	{
		{"examiner", [&]() { joueur_.examiner();  }},
		{"quitter", [&]() {quitterJeu(); }},
		{"look cle", [&]() { cout << vecteurObjetDescriptions[0]->getDescription() << endl; }},
		{"look echelle", [&]() { cout << vecteurObjetDescriptions[1]->getDescription() << endl; }},
		{"use cle", [&]() {}},
		{"use echelle", [&]() {}},
		{"take cle", [&]() { 
			cout << "Cette cle peut m'etre utile, je vais la prendre! " << endl;
			joueur_.prendreObjet("Une clé rouille");  }},
		{"take echelle", [&]() { cout << "L'echelle et trop lourde, je ne peux pas la prendre!" << endl;  }}
	};
	commandes[commande]();
}

void Commandes::quitterJeu()
{
	jeuActif_ = false;
}
