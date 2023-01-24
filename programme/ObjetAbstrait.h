#pragma once
#include "Case.h"
class Case;

class ObjetAbstrait {
public:
	ObjetAbstrait() = default;
	ObjetAbstrait(string nom, string description);
	virtual ~ObjetAbstrait() = default;
	virtual void appliquerAction(Case* position);
	virtual string getNom() const;
	virtual string getDescription() const;

private:
	string nom_;
	string description_;
};