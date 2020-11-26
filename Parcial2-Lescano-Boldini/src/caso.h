#include <list>
#include "fecha.h"

#ifndef CASO_H
#define CASO_H

using namespace std;

class Caso {
 public:
  string provincia;
  bool intensivo;
  string infectado;
  Caso();
  void toString();
  Fecha fecha;
  };

Caso::Caso() {
  this->provincia = "";
  this->intensivo = false;
  this->infectado = "";
}

void Caso::toString() {
  printf(" %-20s\n", this->provincia.c_str());
  printf(" Si ");
  printf(" %12s ", this->infectado.c_str());
  this->fecha.toString();
}
#endif
