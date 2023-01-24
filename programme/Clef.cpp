#include "Clef.h"

Clef::Clef()
{
	nom_ = "Une cl� rouille";
	description_ = "Sert � d�verouiller une porte";
}

void Clef::appliquerAction(Case* position)
{
	for (auto salle : position->getCasesAdjacentes()) {
		if ((salle.second)->getAccessible() == false) {
			(salle.second)->setAccessible(true);
			cout << "Clic! \n Vous avez d�verouill� la porte de la salle: ";
			cout << (salle.second)->getNom() << endl << endl;


			return;
		}
	}

	cout << "Vous ne voyez pas l'utilit� de cet objet ici. Peut-�tre en quelque part d'autre? \n\n";

}

string Clef::getNom() const
{
	return nom_;
}

string Clef::getDescription() const
{
	return description_;
}