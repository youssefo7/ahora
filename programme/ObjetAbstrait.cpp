#include "ObjetAbstrait.h"

ObjetAbstrait::ObjetAbstrait(string nom, string description)
{
	nom_ = nom;
	description_ = description;
}

string ObjetAbstrait::getNom() const
{
	return nom_;
}

string ObjetAbstrait::getDescription() const
{
	return description_;
}

void ObjetAbstrait::appliquerAction(Case* position) { return; }
