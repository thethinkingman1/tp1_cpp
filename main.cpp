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
int main() {
	
    int const TAILLE = 250; 
    int index_tableau = 0;
    Animal* animaux [TAILLE];
    
    int choix;
    string nom;
    float poids;
    bool est_enclos_herbe;
    int superficie_enclos; 
    double diete_viande = 0;
    double diete_fruit = 0;
    double diete_herbe = 0;
    
    do {
        
        afficherMenu();
        cout << ("\nFaite Votre choix: ") << endl;
        cin >> choix ; 
        
        switch (choix) {
            
            case 1: 
            
                cout << "Entrez le nom de Tigre: " << endl; 
                cin >> nom; 
                cout << "Entrez le poids du Tigre" << endl; 
                cin >> poids; 
                animaux[index_tableau] = new Tigre(nom, poids);
                index_tableau ++; 
                break; 
                
            case 2: 
            
                cout << "Entrez le nom de Singe: " << endl; 
                cin >> nom; 
                cout << "Entrez le poids du Singe" << endl; 
                cin >> poids; 
                cout << "Enclos avec herbes? (1 pour herbe, 0 pour sans herbes)" << endl; 
                cin >> est_enclos_herbe; 
                animaux[index_tableau] = new Singe(nom, poids, est_enclos_herbe);  
                index_tableau ++;         
                break; 
                
            case 3: 
            
                cout << "Entrez le nom de Rhino: " << endl; 
                cin >> nom; 
                cout << "Entrez le poids du Rhino" << endl; 
                cin >> poids; 
                cout << "Entrez la superficie de l'enclos" << endl; 
                cin >> superficie_enclos;  
                animaux[index_tableau] = new Rhinoceros(nom, poids, superficie_enclos);  
                index_tableau ++;         
                break; 
            
            case 4: 
            
                cout << "\n *** Compte Rendu du Zoo *** " << endl; 
                for (int i = 0 ; i < index_tableau; i ++) {
                    
                    (*animaux[i]).afficherInfos(); // Affiche les animaux
                    diete_viande = diete_viande + (*animaux[i]).obtenirDieteViande(); // Calcul les besoins en viande
                    diete_fruit = diete_fruit + (*animaux[i]).obtenirDieteFruit(); // Calcul les besoins en fruit
                    diete_herbe = diete_herbe + (*animaux[i]).obtenirDieteHerbe(); // Calcul les besoins en herbe
                    //cout << "Viande: " << diete_viande << " | Fruits: " << diete_fruit << " | Herbe: " << diete_herbe << endl; // For testing purposes
                    
                }
                    
                    cout << "Diete quotidienne totale: " << endl; 
                    cout << " - Viande: " << diete_viande << " kg" << endl;
                    cout << " - Fruits: " << diete_fruit << " kg" << endl;
                    cout << " - Herbe: " << diete_herbe << " kg" << endl;      
   
                break; 
                
            case 5: 
            
                cout << "\nVous avez quitter. Merci d'avoir utilise notre logiciel!" << endl; 
                break; 
                
            default:
            
                cout << "\nVous avez entrez une mauvaise valeur. Entree une valeur entre 1 et 5. Merci. " << endl; 
                  
        }
        
    } while (choix != 5);
    
    
    
    //Liberer la memoire du tableau de pointeurs animaux / initialisation de pointeur a NULL afin d'eviter que les pointeur ne pointe vers un espace du HEAP invalide
    for (int i = 0; i < TAILLE; i ++) {
        
        delete animaux[i]; 
        animaux[i] = NULL; 
        
    }

}


void afficherMenu() {

        cout << "\n\n******************************** Logiciel de Gestion du Zoo ********************************" << endl; 
        cout << "\n1 - Ajouter un tigre \t 2- Ajouter un singe \t 3- Ajouter un rhino\n4- Compte rendu du Parc "
        << "\t5- Quitter" << endl;
    
    }

