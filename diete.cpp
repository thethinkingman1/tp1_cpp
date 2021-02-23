#include "diete.h"



std::string Diete::afficherDiete(){
	std::string besoin_viande = "mange " + std::to_string(this->poids_viande)+ " kg de viande par jour.\n";
	std::string besoin_fruit = "mange " + std::to_string(this->poids_fruit) + "kg de fruits par jour.\n";
	std::string besoin_herbe = "mange " + std::to_string(this->poids_herbe) + " kg d'herbes par jour.\n" ;
	return besoin_viande + besoin_fruit + besoin_herbe ;
}
