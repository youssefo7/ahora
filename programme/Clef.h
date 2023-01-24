#pragma once
#include "ObjetAbstrait.h"

class Clef : public ObjetAbstrait {
public:
	Clef();
	~Clef() = default;
	void appliquerAction(Case* position) override;
	string getNom() const override;
	string getDescription() const override;

private:
	string nom_;
	string description_;
};
