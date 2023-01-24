/**
* D�finition des actions pouvant �tre d�clench�es par le joueur
* \fichier   Joueur.cpp
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 d�cembre 2022
* Cr�� le 10 d�cembre 2022
*/

#include "Joueur.h"

Joueur::Joueur(): carte_()
{
	this->setPosition(carte_.getPositionInitiale());
}

Case* Joueur::getPosition()
{
	return position_;
}

void Joueur::setPosition(Case* position)
{
	position_ = position;
}

void Joueur::examiner()
{
	auto objs = position_->getObjets();
	cout << "-- " << position_->getNom() << " --" << endl;
	cout << position_->getDescription() << endl << endl;

	if (objets_.size() > 0)
	{
		cout << "Vous avez: " << endl << " ";
		for (auto&& obj : objets_) {
			cout << obj->getNom() << endl;
		}

	}
	if(objs.size() > 0 )
		cout << "Vous voyez: " << endl;
	for (auto&& obj : objs) {
		cout << " " + obj->getNom() << endl;
	}

}



void Joueur::seDeplacer(string direction)
{

	if (!position_->getCasesAdjacentes().contains(direction)) { //Si la direction ne m�ne pas � une case adjacente
		cout << "On ne peut pas aller l�! \n\n";
		return;
	}

	else if ((position_->getCasesAdjacentes().find(direction))->second->getAccessible() == false) { //Si la salle est inaccessible
		cout << "Cette pi�ce est inaccessible. Peut-�tre qu'un certain objet serait utile? \n\n";
		return;
	}

	position_ = position_->getCasesAdjacentes()[direction]; //on met � jour la position

	cout << "On se d�place dans la direction " << direction << endl << endl;
	examiner();
}

void Joueur::prendreObjet(string nomObjet)
{
	for (auto objetDeCase : position_->getObjets()) {
		if (objetDeCase->getNom() == nomObjet) {
			objets_.push_back(move(objetDeCase));
		}
	}
}