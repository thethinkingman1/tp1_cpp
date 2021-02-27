#include "Person.h"
#include <string>

using namespace std; 

Person::Person(string nom, float age){

    this->nom = nom; 
    this->age = age;


}

string Person::getNom(){

  return this->nom;
}


int Person::getAge(){

  return this->age;
}

void Person::afficherInfo(){

  cout<< "Nom: " << this->nom << ", age: " << this->age << endl;


}