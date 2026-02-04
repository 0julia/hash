#include <iostream>
#include "hash.h"
#include "Student.h"
#include <cstring>
using namespace std;


hash::hash(int len){
  hashlen = len;
  table = new Student*[hashlen];

  for (int i = 0; i<hashlen; i++){
    table[i] = NULL;
  }
}

hash::~hash(){

}

int hash::indexinator(int id, int hashlen){ // i think im doing hash:: wrong
  return id % hashlen;

}

