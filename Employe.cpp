#include "Employe.h"

Employe::Employe(string nom, int age, string poste) : Person(nom, age)
{
    this->poste = poste;
}


string Employe::getPoste(){
    
    return this->poste; 
    
    }
    
void Employe::afficherInfo(){
    
    std::cout << "Employe name: " << this->getNom() << ", Age: " << this->getAge() << ", poste: " << this->getPoste() << std::endl; 
    
    }

Employe::~Employe()
{
}

