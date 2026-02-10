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

//find the index its suppposed to be at
int hash::indexinator(int id){//, int hashlen){ //do I need int hashlen?? i think im doing hash:: wrong
  return id % hashlen;

}

//put the node at that index
void hash::addNode(Student* s){
  //look at the index it should be at

  int index = indexinator(s->id);
  //if that index is empty, just put it in
  if(
