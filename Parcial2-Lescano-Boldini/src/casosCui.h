#include <fstream>
#include <string>

void ordenarCasos(Casos cas, int prim, int ult) {
  int middle = (prim + ult) / 2;
  Fecha med = cas[middle].fecha;
  int i = prim;
  int j = ult;

  do {
    while (cas[i].fecha < med) i++;
    while (cas[j].fecha > med) j--;

    if (i <= j) {
      cas.cambiar(i, j);
      i++;
      j--;
    }
  } while (i <= j);

  if (j > prim) ordenarCasos(cas, prim, j);
  if (i < ult) ordenarCasos(cas, i, ult);
}

Casos casosIntensivos(Casos cas, Fecha d) {
  Caso c;
  Casos fecha(cas.getSize());
  for (int i = 0; i < cas.getSize(); i++) {
    c = cas[i];
    if (c.intensivo && c.fecha > d) {
      fecha.append(c);
    }
  }
  if (fecha.getSize() > 0) {
    ordenarCasos(fecha, 0, fecha.getSize() - 1);
  return fecha;
  }
}

void casos_cui(Fecha nFecha){
  Casos casos(1000);
  int nCol = 0;
  fstream doc;
  doc.open("Covid19Casos-1000.csv", ios::in);
  string row, col;
  stringstream s;
  getline(doc, row);
  while (getline(doc, row)) {
    Caso c;
    s.str(row);
    while (getline(s, col, ',')) {
      switch (nCol) {
        case 7:
          col = col.substr(1, col.size() - 2);
          c.provincia = col;
          nCol++;
          break;
        case 12:
          col = col.substr(1, col.size() - 2);
          c.intensivo = (!col.compare("SI")) ? true : false;
          nCol++;
          break;
        case 13:
          nCol++;
          if (col.empty()) break;
          col = col.substr(1, col.size() - 2);
          c.fecha.fromISO(col);
          break;
        case 20:
          col = col.substr(1, col.size() - 2);
          c.infectado = col;
        default:
          nCol++;
      }
    }
    nCol = 0;
    s.clear();
    casos.append(c);
  }
  casosIntensivos(casos, nFecha).toString();
}

