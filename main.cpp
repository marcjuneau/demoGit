/**
  * @file       main.cpp
  * @brief      Programme principal du projet
  * @author     Marc Juneau (marcjuneau@gmail.com)
  * @version    1.0
  * @date       21 mars 2025
  *
  * @mainpage
  *  Projet Exemple
  *	@author Marc Juneau
  *	@section MainSection1 Description
  *
  * Ce programme affiche un message sur la console et attend une entrée de l'utilisateur.
  */

#include <iostream>
#include <Windows.h>

using namespace std;

// Constantes pour les valeurs numériques
#define CODE_PAGE_UTF8 1252

/**
  * @brief      Fonction principale du programme
  * @return     Code de sortie du programme
  */
int main()
{
    SetConsoleOutputCP(CODE_PAGE_UTF8);
    cout << "Vive l'été!" << endl << flush;
    cin.get();
    return 0;
}
