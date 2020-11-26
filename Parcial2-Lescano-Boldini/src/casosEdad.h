void casos_edad(string edad){
    vector<string> provincias = {"Buenos Aires", "CABA", "Catamarca", "Chaco", "Chubut", "Córdoba", "Corrientes", "Entre Ríos", "Formosa", "Jujuy", "La Pampa", "La Rioja", "Mendoza", "Misiones", "Neuquén", "Río Negro", "Salta", "San Juan", "San Luis", "Santa Cruz", "Santa Fe", "Santiago del Estero", "Tierra del Fuego, Antártida e Isla del Atlántico Sur", "Tucumán"};
    int interest[] = {0, 1, 2, 3, 7};
    vector<string> prov = {{}};
    int x=0;
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
        for (int p=0; p<24; p++){
            if (row[7] == provincias[p]){
                if (row[20].compare("Confirmado") == 0){
                    if (row[2].compare(edad) == 0){
                        prov.push_back(row[7]);

                    }
                }
            }
        }
    }
    sort(prov.begin(), prov.end());
    for (int i=0; i<prov.size(); i++){
        cout << prov[i] << " " << endl;
    }
};
