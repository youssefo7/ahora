/**
* Définition des cases (pièces) du jeu
* \fichier   Cases.cpp
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 décembre 2022
* Créé le 10 décembre 2022
*/

#include "Case.h"

Case::Case(string nom, string description, bool accessible)
{
	nom_ = nom;
	description_ = description;
	casesAdjacentes_ = {};
	objets_ = {};
	accessible_ = accessible;
}

string Case::getNom()
{
	return nom_;
}

string Case::getDescription()
{
	return description_;
}

void Case::ajouterAdjacent(string direction, Case* nom)
{
	casesAdjacentes_[direction] = nom;
}

map<string, Case*> Case::getCasesAdjacentes()
{
	return casesAdjacentes_;
}

void Case::setCasesAdjacentes(map<string, Case*> casesAdjacentes)
{
	casesAdjacentes_ = casesAdjacentes;
}

vector<shared_ptr<ObjetAbstrait>> Case::getObjets()
{
	return objets_;
}

void Case::ajouterObjet(shared_ptr<ObjetAbstrait> objet)
{
	objets_.push_back(objet);
}


bool Case::getAccessible()
{
	return accessible_;
}

void Case::setAccessible(bool accessible)
{
	accessible_ = accessible;
}


