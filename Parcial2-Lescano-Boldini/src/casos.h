#include "caso.h"

#ifndef CASOS_H
#define CASOS_H

class Casos {
 private:
  Caso *caso;
  int cap;
  int tam;

 public:
  Casos(int);
  void append(Caso);
  void cambiar(int, int);
  Caso operator[](int i);
  int getSize();
  void toString();
};

Casos::Casos(int cap) {
  this->caso = new Caso[cap];
  this->cap = cap;
  this->tam = 0;
}

void Casos::append(Caso ca) {
  this->caso[tam] = ca;
  this->tam++;
}

void Casos::cambiar(int a, int b) {
  Caso aux = this->caso[a];
  this->caso[a] = this->caso[b];
  this->caso[b] = aux;
}

Caso Casos::operator[](int i) { return caso[i]; };

int Casos::getSize() { return this->tam; }

void Casos::toString() {
  for (int i = 0; i < this->tam; i++) {
    this->caso[i].toString();
  }
}

#endif
