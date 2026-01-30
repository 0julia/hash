#ifndef HASH_H
#define HASH_H
#include <iostream>
#include "Student.h"
#include "node,h"

using namespace std;

//hash class
class hash{
  //Public constructor, destructor, and useful functions
public:
  hash(int hashlen=100);
  ~hash();
  //  int hashlen = 100;
  void addNode(Student* s);
  Student* find(int id);
  
private:
}

