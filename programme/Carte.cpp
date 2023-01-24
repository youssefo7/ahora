/**
* D�finition de la carte du jeu (la vue d'ensemble des cases)
* \fichier   Carte.cpp
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 d�cembre 2022
* Cr�� le 10 d�cembre 2022
*/

#include "Carte.h"

Carte::Carte()
{
	cases_ = {};


	shared_ptr<Case> entree = make_shared<Case>("Entr�e", "Ceci est l'entr�e. Il y a un tapis sur le sol. \n Le couloir est au Nord (N) \n Le salon est � l'Est (E)", true);
	shared_ptr<Case> salon = make_shared<Case>("Salon", "Nous sommes dans le salon. Une peinture rupestre est mise en valeur. \n L'entr�e est � l'Ouest (O)", true);
	shared_ptr<Case> couloir = make_shared<Case>("Couloir", "C'est le couloir. Il est tr�s �troit. \n La cuisine est au Nord (N) \n La petite chambre est � l'Ouest (O) \n L'entr�e est au Sud (S) \n La chambre secr�te est � l'Est (E)", true);
	shared_ptr<Case> chambre = make_shared<Case>("Petite chambre", "Ah, la chambre. Malgr� sa taille, un lit 'King' y est install�. \n Le grenier est en haut \n Le couloir est � l'Est (E)", true);
	shared_ptr<Case> grenier = make_shared<Case>("Grenier", "Hmm, le grenier. L'obscurit� lui donne une allure myst�rieuse. \n La chambre est en bas", false);
	shared_ptr<Case> cuisine = make_shared<Case>("Cuisine", "C'est la cuisine. Une l�g�re odeur de potage �mane du four. \n Le couloir est au Sud (S)", true);
	shared_ptr<Case> secret = make_shared<Case>("Salle secr�te", "Une salle secr�te. \n Le couloir est � l'Ouest (O)", false);

	shared_ptr<Clef> clef = make_shared<Clef>();
	shared_ptr<Echelle> echelle = make_shared<Echelle>();

	entree->ajouterAdjacent("E", salon.get());
	entree->ajouterAdjacent("N", couloir.get());
	salon->ajouterAdjacent("O", entree.get());
	couloir->ajouterAdjacent("O", chambre.get());
	couloir->ajouterAdjacent("N", cuisine.get());
	couloir->ajouterAdjacent("S", entree.get());
	couloir->ajouterAdjacent("E", secret.get());
	chambre->ajouterAdjacent("E", couloir.get());
	cuisine->ajouterAdjacent("S", couloir.get());
	secret->ajouterAdjacent("O", couloir.get());

	entree->ajouterObjet(clef);
	entree->ajouterObjet(echelle);

	cases_.push_back(entree);
	cases_.push_back(salon);
	cases_.push_back(couloir);
	cases_.push_back(chambre);
	cases_.push_back(grenier);
	cases_.push_back(cuisine);
	cases_.push_back(secret);

	positionInitiale_ = entree;
}

Case* Carte::getPositionInitiale()
{
	return positionInitiale_.get();
}

