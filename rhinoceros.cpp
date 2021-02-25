#include "rhinoceros.h"
#include <iostream>

Rhinoceros::Rhinoceros(std::string nom, float poids, int superficie) :Animal(nom, poids){
	this->superficie_enclos = superficie;
	
	//Le rhinoceros est fructivore et herbivore
	this->diete_rhinoceros.definirDieteViande(0);
	
	//Diete en herbe du Rhinocéros
	//Un rhinoceros peut recupérer 10puissance-2 kg/m2 d'herbe dans un enclos. Ce qui correspond à sa capacité d'ingestion. 
	//La quantite d'herbe mangée est : quantite = capacité*superficie
	float capacite = (float)1/100;
	float herbeMangee = capacite*superficie;
	// Les besoins en herbe d'un rhinoceros correspondent à 2% du poids par jour
	float besoin = ((float)2/100)*poids;
	if (herbeMangee<besoin) {this->diete_rhinoceros.definirDieteHerbe(besoin-herbeMangee);}
	else {this->diete_rhinoceros.definirDieteHerbe(0);};
	
	//La diete en fruit du rhinoceros dépend de son poids;
	this->diete_rhinoceros.definirDieteFruit(poids*((float)5/1000));
}

void Rhinoceros::afficherInfos(){
    std::cout << "Rhinoceros : " << nom << " (" << poids << "kg)" <<std::endl;
    std::cout << "Enclos de " << superficie_enclos << " mètres-carrés" << std::endl;
    std::cout << this->diete_rhinoceros.afficherDiete();
    
    
};


