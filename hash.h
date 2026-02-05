#ifndef HASH_H
#define HASH_H
#include <iostream>
#include "Student.h"
#include "node.h"

using namespace std;

//hash class
class hash{
  //Public constructor, destructor, and useful functions
public:
  hash(int whashlen);
  ~hash();
  void addNode(Student* s);
  Student* find(int id);
  
private:
  int hashlen=100;
  Student** table;
  int indexinator(int id);//, int hashlen); //I should get bonus points for my Phineas&Ferb refrence
};

#endif
