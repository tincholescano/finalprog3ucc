#include <fstream>

void read_record(){

  // File pointer
    fstream fin;

    // Open an existing file
    fin.open("Covid19Casos-1000.csv", ios::in);

    vector<string> row;
    string line, word;
    cantMuestras = 0;
    for (int i=0; i<1000; i++){
        row.clear();

        getline(fin, line);

        stringstream s(line);

        while (getline(s, word, ',')){
            row.push_back(word);
        }

        for (int i=0; i<row.size(); i++){
            cout<<row[i];
        }
        cout<<endl;
        }
    cantMuestras = row.size();
    cout << "La cantidad de Muestras es de: "<< cantMuestras;
  };
