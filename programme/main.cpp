/**
* Programme de jeu d'aventure textuel
* \fichier   main.cpp
* \auteurs Alexandre Boulay (2149547) et Youssef Ouarad (2117136)
* \date   12 décembre 2022
* Créé le 10 décembre 2022
*/

#pragma region "Bibliothèques"//{

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <fstream>
#include <cctype>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <gsl/span>
#include <cppitertools/range.hpp>
#include <cppitertools/enumerate.hpp>
#include "Carte.h"
#include "Commandes.h"

//#if __has_include("gtest/gtest.h")
//#include "gtest/gtest.h"
//#endif

#if __has_include("bibliotheque_cours.hpp")
#include "bibliotheque_cours.hpp"
#define BIBLIOTHEQUE_COURS_INCLUS
using bibliotheque_cours::cdbg;
#else
auto& cdbg = clog;
#endif

#if __has_include("verification_allocation.hpp")
#include "verification_allocation.hpp"
#include "debogage_memoire.hpp"  //NOTE: Incompatible avec le "placement new", ne pas utiliser cette entête si vous utilisez ce type de "new" dans les lignes qui suivent cette inclusion.
#endif

void initialiserBibliothequeCours([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
	#ifdef BIBLIOTHEQUE_COURS_INCLUS
	bibliotheque_cours::activerCouleursAnsi();  // Permet sous Windows les "ANSI escape code" pour changer de couleurs https://en.wikipedia.org/wiki/ANSI_escape_code ; les consoles Linux/Mac les supportent normalement par défaut.

	// cdbg.setTee(&clog);  // Décommenter cette ligne pour que cdbg affiche sur la console en plus de la "Sortie" du débogueur.
	
	// bibliotheque_cours::executerGoogleTest(argc, argv); // Attention de ne rien afficher avant cette ligne, sinon l'Explorateur de tests va tenter de lire votre affichage comme un résultat de test.
	#endif
}

using namespace std;
using namespace std::literals;
using namespace iter;
using namespace gsl;

#pragma endregion//}

//bibliotheque_cours::BreakpointSurAllocations breakpointSurAllocations = { 5U, 9U, 10U, 11U, 12U, 13U, 14U, 18U, 19U, 20U, 21U, 22U, 23U, 27U, 28U, 29U, 30U, 31U, 32U, 36U, 37U, 38U, 39U, 40U, 50U, 54U, 55U, 56U, 57U, 58U, 60U, 61U, 63U, 64U, 66U, 67U, 69U, 70U, 72U, 73U, 75U, 76U, 78U, 79U, 81U, 82U, };
//La ligne ci-dessus servira à déboguer les fuites

int main(int argc, char* argv[])
{
	cout << " --- THE LEGEND OF INF1015 ---\n";
	cout << "~ GAME OF THE SESSION EDITION ~\n\n";

	Commandes commandes;

	while (commandes.getJeuActif() == true) {
		commandes.lireCommande();
	}

	cout << "Game Over";
	
}
