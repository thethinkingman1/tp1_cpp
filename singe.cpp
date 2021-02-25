#include "singe.h"
#include "animal.h"
#include <iostream>

Singe::Singe(std::string nom, float poids, bool le_booleen): Animal(nom, poids) {
	this->enclosAvecHerbe = le_booleen;
	
	//La diete en viande du singe dépend de son poids
	this->diete_singe.definirDieteViande(poids*((float)1/100));
	
	//La diete en herbe du singe dépend de l'enclos : enherbé ou non.
	if (this->enclosAvecHerbe == false) {this->diete_singe.definirDieteHerbe(poids*((float)5/1000));}
	else {this->diete_singe.definirDieteHerbe(0);}
	
	//La diete en fruit du singe dépend du poids du singe
	this->diete_singe.definirDieteFruit(poids*((float)1/100)) ;
	}

void Singe::afficherEnclos() {
    if (enclosAvecHerbe == true) {
        std::cout << "Enclos avec herbe" << std::endl;
    }
        else {
        std::cout << "Enclos sans herbes" <<std::endl;
        }
}
    
void Singe::afficherInfos() {
    std::cout << "Singe : " << nom << "(" << poids << " kg)" << std::endl;
    afficherEnclos();
    std::cout << this->diete_singe.afficherDiete() << std::endl;
    std::cout << "" << std::endl;
    
    
}
	








