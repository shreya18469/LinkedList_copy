#include "node.h"
#include <iostream>
#include <cstring>
#include "student.h"

Node::Node(Student* newStu) {
  value = newStu;
  next = NULL;
}

Node::~Node() {
  delete &value;
  next = NULL;
}

void Node::setStudent(Student* newStu) {
  value = newStu;
}

char* Node::getStudent() {
  return value->getName();;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Node* Node::getNext() {
  return next;
}
