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
void afficherQuantiteViande();
void afficherQuantiteFruit();
void afficherQuantiteHerbe();



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
            afficherQuantiteViande(); 
            break; 
        case 5: 
            afficherQuantiteFruit(); 
            break; 
        case 6: 
            afficherQuantiteHerbe(); 
            break; 
        case 7: 
            cout << " Vous avez quitter. Merci d'avoir utilise notre logiciel!" << endl; 
            break; 
        default: 
            cout << " Vous avez entrez une mauvaise valeur. Entree une valeur entre 1 er 7. Merci. " << endl; 
            
        
        }
    
    } while (choix != 7);

}


void afficherMenu(){
    
    
    cout << "\n\n******************************** Software de Gestion du Zoo ********************************" << endl; 
    cout << "\n1 - Ajouter un tigre \t 2- Ajouter un singe \t 3- Ajouter un rhino\n4- Quantite de viande a fournir par jour "
    << "\t 5- Quantite de fruit a fournir par jour\n6- Quantite d'herbe a fournir par jour\n7- Quitter" << endl;
    
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
    
void afficherQuantiteViande(){
    
    cout << " Quantite de viande pour tous les animaux: " << endl; 
    
    
    }

void afficherQuantiteFruit(){
    
    cout << " Quantite de Fruit pour tous les animaux: " << endl; 
    
    
    }

void afficherQuantiteHerbe(){
    
    cout << " Quantite d'herbe pour tous les animaux: " << endl; 
    
    
    }