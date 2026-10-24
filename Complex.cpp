// complex.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"complexe.h"
using namespace std;

int main()
{
	Complex* c1 = new Complex(3, 6);
	Complex* c2 = new Complex(6, 3);
	Complex C3 = *c1 + *c2;
	c1->afficher();
	c2->afficher();
	C3.afficher();
	double a = 3;
	double b = 8;
	Complex c4 = *c2 + a;
	c4.afficher();
	Complex C5 = *c1 - *c2;
	C5.afficher();
	Complex c6 = *c2 - a;
	c6.afficher();
	Complex C7 = (*c1) * (*c2);
	C7.afficher();
	Complex c8 = (*c2) * a;
	c8.afficher();
	Complex C9 = *c1 / *c2;
	C9.afficher();
	Complex c10 = *c2 / a;
	c10.afficher();
	if (*c1 == *c2)
		cout << "lesdeux nombres complexes sont egaux" << endl;
	else
		cout << "les deux nombres complexes sont differentes" << endl;
	if (*c1 <= *c2)
		cout << "" << endl;
	else
		cout << "les deux nombres complexes sont differentes" << endl;
	if (*c1 <= *c2)
		cout << "c1 est inferieur ou egal a c2" << endl;
	else
		cout << "c1 est superieure ou egal a c2" << endl;

	if (*c1 >= *c2)
		cout << "c1 est superieur ou egal a c2" << endl;
	else
		cout << "c1 est inferieur ou egal a c2" << endl;
	if (*c1 != *c2)
		cout << "lesdeux nombres complexes sont differentes" << endl;
	else
		cout << "les deux nombres complexes sont egaux" << endl;



}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

