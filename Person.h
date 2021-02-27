#include <string> 
#include <iostream>

using namespace std;

#pragma once

class Person {

  private:
    string nom; 
    int age; 
  public:
    Person(string nom, float age); 
    virtual ~Person() {} 
    
    virtual void afficherInfo();  // virtual indique que lon veut du polymorphisme. 
    virtual string getNom();
    virtual int getAge();




};