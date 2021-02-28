#include <stdio.h>
#include <iostream> 
#include <string>
#include "animal.h"
#include "diete.h"
#include "singe.h"
#include "rhinoceros.h"
#include "tigre.h"

using namespace std;

//prototypes
void afficherMenu();

//methode main
int main()
{
	
    int const TAILLE = 5; 
    int indexTableau = 0;
    Animal* animaux [TAILLE];
    
    int choix;
    string nom;
    float poids;
    bool isEnclos;
    int superficieEnclos; 
    double dieteViande = 0;
    double dieteFruits = 0;
    double dieteHerbe = 0;
    
    do {
        
    afficherMenu();
    
    cout << ("\nFaite Votre choix: ") << endl;
    cin >> choix ; 
    
    switch (choix){
        
        case 1: 
            cout << "Entrez le nom de Tigre: " << endl; 
            cin >> nom; 
            cout << "Entrez le poids du Tigre" << endl; 
            cin >> poids; 
            animaux[indexTableau] = new Tigre(nom, poids);
            indexTableau ++; 
            break; 
        case 2: 
            cout << "Entrez le nom de Singe: " << endl; 
            cin >> nom; 
            cout << "Entrez le poids du Singe" << endl; 
            cin >> poids; 
            cout << "Enclos avec herbes? (1 pour herbe, 0 pour sans herbes)" << endl; 
            cin >> isEnclos; 
            animaux[indexTableau] = new Singe(nom, poids, isEnclos);  
            indexTableau ++;         
            break; 
        case 3: 
            cout << "Entrez le nom de Rhino: " << endl; 
            cin >> nom; 
            cout << "Entrez le poids du Rhino" << endl; 
            cin >> poids; 
            cout << "Entrez la superficie de l'enclos" << endl; 
            cin >> superficieEnclos; 
            if (superficieEnclos > 1999) {
                    
                animaux[indexTableau] = new Rhinoceros(nom, poids, superficieEnclos);  
                indexTableau ++;
                
                }
                
                else { 
                    
                    cout << "\n ** Attention! La superficie doit etre plus grande ou egale a 2000 m carree. L'information n'a pas ete enregistre. Recommencez." << endl; 
                
                }
            
            break; 
        
        case 4: 
            cout << "\n *** Compte Rendu du Zoo *** " << endl; 
            for (int i = 0 ; i < indexTableau; i ++){
                
                    (*animaux[i]).afficherInfos();
                    
                    dieteViande = dieteViande + (*animaux[i]).getDieteViande();
                    dieteFruits = dieteFruits + (*animaux[i]).getDieteFruits();
                    dieteHerbe = dieteHerbe + (*animaux[i]).getDieteHerbe();
                
                }
                
                cout << "Diete quotidienne totale: " << endl; 
                cout << "\tViande: " << dieteViande << "KG" << endl;
                cout << "\tFruits: " << dieteFruits << "KG" << endl;
                cout << "\tHerbe: " << dieteHerbe << "KG" << endl;
                
            
            break; 
        case 5: 
            cout << "\nVous avez quitter. Merci d'avoir utilise notre logiciel!" << endl; 
            break; 
        default: 
            cout << "\nVous avez entrez une mauvaise valeur. Entree une valeur entre 1 et 5. Merci. " << endl; 
            
        
        }
    
    } while (choix != 5);
    
    
    
    //Liberer la memoire du tableau de pointeurs animaux / initialisation de pointeur a NULL afin d'eviter que les pointeur ne pointe vers un espace du HEAP invalide
    for (int i = 0; i < TAILLE; i ++){
        
        delete animaux[i]; 
        animaux[i] = NULL; 
        
        }

}


void afficherMenu(){
    
    
    cout << "\n\n******************************** Software de Gestion du Zoo ********************************" << endl; 
    cout << "\n1 - Ajouter un tigre \t 2- Ajouter un singe \t 3- Ajouter un rhino\n4- Compte rendu du Parc "
    << "\t5- Quitter" << endl;
    
    }

