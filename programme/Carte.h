/**
* Définition de la carte du jeu (la vue d'ensemble des cases)
* \fichier   Carte.h
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 décembre 2022
* Créé le 10 décembre 2022
*/

#pragma once
using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include "Case.h"
#include "Clef.h"
#include "Echelle.h"

class Carte {
public:
	Carte();
	Case* getPositionInitiale();

private:
	vector<shared_ptr<Case>> cases_;
	shared_ptr<Case> positionInitiale_;

};