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
void creerTigre(); 
void creerSinge(); 
void creerRhino();
void afficherRapport();




//methode main
int main()
{
	
    int choix;
    
    do {
        
    afficherMenu();
    cout << ("\nFaite Votre choix: ") << endl;
    cin >> choix ; 
    //cout << "Votre choix est " << choix << endl; 
    
    switch (choix){
        
        case 1: 
            creerTigre(); 
            break; 
        case 2: 
            creerSinge(); 
            break; 
        case 3: 
            creerRhino(); 
            break; 
        case 4: 
            afficherRapport(); 
            break; 
        case 5: 
            cout << "\nVous avez quitter. Merci d'avoir utilise notre logiciel!" << endl; 
            break; 
        default: 
            cout << "\nVous avez entrez une mauvaise valeur. Entree une valeur entre 1 er 7. Merci. " << endl; 
            
        
        }
    
    } while (choix != 5);

}


void afficherMenu(){
    
    
    cout << "\n\n******************************** Software de Gestion du Zoo ********************************" << endl; 
    cout << "\n1 - Ajouter un tigre \t 2- Ajouter un singe \t 3- Ajouter un rhino\n4- Rapport "
    << "\t5- Quitter" << endl;
    
    }

void creerTigre(){
    
    cout << " Vous avez cree un Tigre " << endl; 
    
    
    }
    
    
void creerSinge(){
    
    cout << " Vous avez cree un Singe " << endl; 
    
    
    }
    
void creerRhino(){
    
    cout << " Vous avez cree un Rhino " << endl; 
    
    
    }
    
void afficherRapport(){
    
    cout << " Quantite de viande pour tous les animaux: " << endl; 
    
    
    }
