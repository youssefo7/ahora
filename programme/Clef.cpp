#include "Clef.h"

Clef::Clef()
{
	nom_ = "Une clé rouille";
	description_ = "Sert à déverouiller une porte";
}

void Clef::appliquerAction(Case* position)
{
	for (auto salle : position->getCasesAdjacentes()) {
		if ((salle.second)->getAccessible() == false) {
			(salle.second)->setAccessible(true);
			cout << "Clic! \n Vous avez déverouillé la porte de la salle: ";
			cout << (salle.second)->getNom() << endl << endl;


			return;
		}
	}

	cout << "Vous ne voyez pas l'utilité de cet objet ici. Peut-être en quelque part d'autre? \n\n";

}

string Clef::getNom() const
{
	return nom_;
}

string Clef::getDescription() const
{
	return description_;
}