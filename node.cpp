#include "node.h"
#include <iostream>
#include <cstring>
#include "student.h"

Node::Node(Student* newStu) {
  value = newStu;
  next = NULL;
}

Node::~Node() {
  delete value;
  next = NULL;
}

void Node::setStudent(Student* newStu) {
  value = newStu;
}

Student* Node::getStudent() {
  return value;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Node* Node::getNext() {
  return next;
}
