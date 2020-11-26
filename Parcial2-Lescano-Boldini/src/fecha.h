#include <iostream>
#include <sstream>

using namespace std;

#ifndef FECHA_H
#define FECHA_H

class Fecha {
 private:
  int ano;
  int mes;
  int dia;

 public:
  Fecha();
  Fecha(int, int, int);
  void fromISO(string);
  int getano();
  bool operator>(Fecha);
  bool operator<(Fecha);
  bool operator==(Fecha);
  bool operator>=(Fecha);
  void toString();
};

Fecha::Fecha() {
  this->ano = 0;
  this->mes = 0;
  this->dia = 0;
}

Fecha::Fecha(int ano, int mes, int dia) {
  this->ano = ano;
  this->mes = mes;
  this->dia = dia;
}

void Fecha::fromISO(string fecha) {
  stringstream ss(fecha);
  string f;
  getline(ss, f, '-');
  this->ano = stoi(f);
  getline(ss, f, '-');
  this->mes = stoi(f);
  getline(ss, f, '-');
  this->dia = stoi(f);
}

int Fecha::getano() {
  return this->ano;
  }


bool Fecha::operator>(Fecha d) {
  if (this->ano > d.ano) return true;
  if (this->ano < d.ano) return false;
  if (this->mes > d.mes) return true;
  if (this->mes < d.mes) return false;
  if (this->dia > d.dia) return true;
  if (this->dia < d.dia) return false;
  return false;
}

bool Fecha::operator<(Fecha d) {
  if (this->ano < d.ano) return true;
  if (this->ano > d.ano) return false;
  if (this->mes < d.mes) return true;
  if (this->mes > d.mes) return false;
  if (this->dia < d.dia) return true;
  if (this->dia > d.dia) return false;
  return false;
}

bool Fecha::operator==(Fecha d) {
  return this->ano == d.ano && this->mes == d.mes && this->dia == d.dia;
}

bool Fecha::operator>=(Fecha d) {
  if (this->ano > d.ano) return true;
  if (this->ano < d.ano) return false;
  if (this->mes > d.mes) return true;
  if (this->mes < d.mes) return false;
  if (this->dia > d.dia) return true;
  if (this->dia < d.dia) return false;
  return true;
}

void Fecha::toString() {
  if (this->ano != 0)
    printf(" %4d/%02d/%02d ", this->ano, this->mes, this->dia);
  else
    printf(" %10s ", "");
}

#endif
