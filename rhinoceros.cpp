#include "rhinoceros.h"

Rhinoceros::Rhinoceros(std::string nom, float poids, int superficie) :Animal(nom, poids){
	this->superficie_enclos = superficie;
	
	//Le rhinoceros est fructivore et herbivore
	this->diete_rhinoceros.definirDieteViande(0);
	
	//Diete en herbe du Rhinocéros
	//Un rhinoceros peut recupérer 10puissance-2 kg/m2 d'herbe dans un enclos. Ce qui correspond à sa capacité d'ingestion. 
	//La quantite d'herbe mangée est : quantite = capacité*superficie
	float capacite = 1/100;
	float herbeMangee = capacite*superficie;
	// Les besoins en herbe d'un rhinoceros correspondent à 2% du poids par jour
	float besoin = (2/100)*poids;
	if (herbeMangee<besoin) {this->diete_rhinoceros.definirDieteHerbe(besoin-herbeMangee);}
	else {this->diete_rhinoceros.definirDieteHerbe(0);};
	
	//La diete en fruit du rhinoceros dépend de son poids;
	this->diete_rhinoceros.definirDieteFruit(poids*(5/1000));
}

std::string Rhinoceros::afficherInfos(){
	return "";
};


