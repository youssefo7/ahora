/**
* Définition des cases (pièces) du jeu
* \fichier   Cases.h
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 décembre 2022
* Créé le 10 décembre 2022
*/

#pragma once
using namespace std;
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "ObjetAbstrait.h"
class ObjetAbstrait;

class Case {
public:
	Case() = default;
	Case(string nom, string description, bool accessible);
	string getNom();
	string getDescription();
	void ajouterAdjacent(string direction, Case* nom);
	map<string, Case*> getCasesAdjacentes();
	void setCasesAdjacentes(map<string, Case*> casesAdjacentes);
	vector <shared_ptr<ObjetAbstrait>> getObjets();
	void ajouterObjet(shared_ptr<ObjetAbstrait> objet);
	bool getAccessible();
	void setAccessible(bool accessible);

private:
	string nom_;
	string description_;
	map<string, Case*> casesAdjacentes_;
	vector<shared_ptr<ObjetAbstrait>> objets_;
	bool accessible_;

};