#include "Echelle.h"

Echelle::Echelle()
{
	nom_ = "Une echelle en bois";
	description_ = "Permet d'atteindre des endroits normalement trop élevés ou bas";
}

//void Echelle::seDeplacerEchelle(Joueur joueur, Case* positionVoulue)
//{
//	joueur.setPosition(positionVoulue);
//
//	cout << "On se déplace dans la pièce: " << positionVoulue->getNom() << endl << endl;
//	joueur.examiner();
//}

string Echelle::getNom() const
{
	return nom_;
}

string Echelle::getDescription() const
{
	return description_;
}

