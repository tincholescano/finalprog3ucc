void p_muertes(int n){
    vector<string> provincias = {"Buenos Aires", "CABA", "Catamarca", "Chaco", "Chubut", "Córdoba", "Corrientes", "Entre Ríos", "Formosa", "Jujuy", "La Pampa", "La Rioja", "Mendoza", "Misiones", "Neuquén", "Río Negro", "Salta", "San Juan", "San Luis", "Santa Cruz", "Santa Fe", "Santiago del Estero", "Tierra del Fuego, Antártida e Isla del Atlántico Sur", "Tucumán"};
    int prov[24][2] = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0}, {8, 0}, {9, 0}, {10, 0},{11, 0}, {12, 0}, {13, 0}, {14, 0}, {15, 0}, {16, 0}, {17, 0}, {18, 0}, {19, 0}, {20, 0}, {21, 0}, {22, 0}, {23, 0}};
    int c = 0;
    int interest[] = {0, 7, 14, 20};
    int nColumnas = sizeof(interest) / sizeof(interest[0]);
    fstream doc;
    doc.open("Covid19Casos-1000.csv", ios::in);

    vector<string> row;
    string line, word;

    for (int i=0; i<1000; i++){
        row.clear();
        getline(doc, line);
        stringstream s(line);
        while (getline(s, word, ',')){
            if (word.size() > 0){
                word = word.substr(1, word.size()-2);
            } else {
                word = "NA";
            }
            row.push_back(word);
        }

        if (row[14].compare("SI") == 0){
            for (int p=0; p<24; p++){
                if (row[7] == provincias[p]){
                    prov[p][1] += 1;
                    c +=1;
                }
            }
        }
    }
    int temp[1][2] = {{0,0}};
    for (int i=1; i<25; i++){
        for (int j=0 ; j<25 - 1; j++){
             if (prov[j][1] < prov[j+1][1]){
                  temp[0][0] = prov[j][0];
                  temp[0][1] = prov[j][1];
                  prov[j][0] = prov[j+1][0];
                  prov[j][1] = prov[j+1][1];
                  prov[j+1][0] = temp[0][0];
                  prov[j+1][1] = temp[0][1];
                  }
            }
        }
    for (int i=0; i<n; i++){
        cout << "\n";
        cout << provincias[prov[i][0]] << " tiene: " <<  prov[i][1] << endl;
    }
};
