#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>

#include "src/caso.h"
#include "src/casos.h"
#include "src/estad.h"
#include "src/pCasos.h"
#include "src/pMuertes.h"
#include "src/casosEdad.h"
#include "src/casosCui.h"

using namespace std;

int main(){
    int a;
    int n;
    string edad;
    int fA, fM, fD;
    Casos casos(1000);
    while (a != 0){
        cout<<"Menu: \n 1) Informacion estadstica \n 2) Provincias con mas contagios \n 3) Provincias con mas muertes \n 4) Filtrar por edad \n 5) Casos en cuidado intensivo \n 0) Salir"<<endl;
        cin>>a;
        switch (a){
            case 1: {
                if (a == 1){
                    estad();
                }
            }
            case 2: {
                if (a == 2){
                    cout << "\nIngrese la cantidad de provincias a mostrar: ";
                    cin >> n;
                    if (n and n<25) {
                        cout<<"si";
                        p_casos(n);
                    } else {
                        cout<<"no";
                        p_casos(24);
                    }
                }
            }
            case 3: {
                if (a == 3){
                    cout << "\nIngrese la cantidad de provincias a mostrar: ";
                    cin >> n;
                    if (n != 0 and n<25) {
                        cout<<"si";
                        p_muertes(n);
                    }else {
                        cout<<"no";
                        p_muertes(24);
                    }
                }
            }
            case 4: {
                if (a == 4){
                    cout << "\nIngrese la edad a buscar: ";
                    cin >> edad;
                    casos_edad(edad);
                }
            }
            case 5: {
                if (a == 5){
                    cout << "\nIngrese el ano: ";
                    cin >> fA;
                    cout << "\nIngrese el mes: ";
                    cin >> fM;
                    cout << "\nIngrese el dia: ";
                    cin >> fD;
                    Fecha fecha(fA,fM,fD);
                    casos_cui(fecha);
                }
            }
            case 0: {
                cout << endl;
            }
        }
    };
};

