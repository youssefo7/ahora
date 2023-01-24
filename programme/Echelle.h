#pragma once
#include "ObjetAbstrait.h"
//#include "Joueur.h"

class Echelle : public ObjetAbstrait {
public:
	Echelle();
	~Echelle() = default;
	//void seDeplacerEchelle(Joueur joueur, Case* positionVoulue); //On utilise le joueur pour pouvoir changer la position actuelle
	string getNom() const override;
	string getDescription() const override;

private:
	string nom_;
	string description_;
};