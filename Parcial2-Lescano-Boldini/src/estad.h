void estad(){
    int interest[] = {0, 2, 3, 12, 13 , 14, 17, 20};
    int nColumnas = sizeof(interest) / sizeof(interest[0]);

    int cantMuestras = 0;
    int cantInf = 0;
    int cantF = 0;
    int edad[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int edadF[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

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

    cantMuestras += 1;
    if (row[20].compare("Confirmado") == 0){
            cantInf += 1;
             if (row[2] == "0" or row[2] == "1" or row[2] == "2" or row[2] == "3" or row[2] == "4" or row[2] == "5" or row[2] == "6" or row[2] == "7" or row[2] == "8" or row[2] == "9"){
                edad[0] += 1;
            }
            if (row[2] == "10" or row[2] == "11" or row[2] == "12" or row[2] == "13" or row[2] == "14" or row[2] == "15" or row[2] == "16" or row[2] == "17" or row[2] == "18" or row[2] == "19"){
                edad[1] += 1;
            }
            if (row[2] == "20" or row[2] == "21" or row[2] == "22" or row[2] == "23" or row[2] == "24" or row[2] == "25" or row[2] == "26" or row[2] == "27" or row[2] == "28" or row[2] == "29"){
                edad[2] += 1;
            }
            if (row[2] == "30" or row[2] == "31" or row[2] == "32" or row[2] == "33" or row[2] == "34" or row[2] == "35" or row[2] == "36" or row[2] == "37" or row[2] == "38" or row[2] == "39"){
                edad[3] += 1;
            }
            if (row[2] == "40" or row[2] == "41" or row[2] == "42" or row[2] == "43" or row[2] == "44" or row[2] == "45" or row[2] == "46" or row[2] == "47" or row[2] == "48" or row[2] == "49"){
                edad[4] += 1;
            }
            if (row[2] == "50" or row[2] == "51" or row[2] == "52" or row[2] == "53" or row[2] == "54" or row[2] == "55" or row[2] == "56" or row[2] == "57" or row[2] == "58" or row[2] == "59"){
                edad[5] += 1;
            }
            if (row[2] == "60" or row[2] == "61" or row[2] == "62" or row[2] == "63" or row[2] == "64" or row[2] == "65" or row[2] == "66" or row[2] == "67" or row[2] == "68" or row[2] == "69"){
                edad[6] += 1;
            }
            if (row[2] == "70" or row[2] == "71" or row[2] == "72" or row[2] == "73" or row[2] == "74" or row[2] == "75" or row[2] == "76" or row[2] == "77" or row[2] == "78" or row[2] == "79"){
                edad[7] += 1;
            }
            if (row[2] == "80" or row[2] == "81" or row[2] == "82" or row[2] == "83" or row[2] == "84" or row[2] == "85" or row[2] == "86" or row[2] == "87" or row[2] == "88" or row[2] == "89"){
                edad[8] += 1;
            }
            if (row[2] == "90" or row[2] == "91" or row[2] == "92" or row[2] == "93" or row[2] == "94" or row[2] == "95" or row[2] == "96" or row[2] == "79" or row[2] == "98" or row[2] == "99"){
                edad[9] += 1;
            }
            if (row[2] == "100" or row[2] == "101" or row[2] == "102" or row[2] == "103" or row[2] == "104" or row[2] == "105" or row[2] == "106" or row[2] == "107" or row[2] == "108" or row[2] == "109"){
                edad[10] += 1;
            }
        }
        if (row[14].compare("SI") == 0){
            cantF += 1;

            if (row[2] == "0" or row[2] == "1" or row[2] == "2" or row[2] == "3" or row[2] == "4" or row[2] == "5" or row[2] == "6" or row[2] == "7" or row[2] == "8" or row[2] == "9"){
                edadF[0] += 1;
            }
            if (row[2] == "10" or row[2] == "11" or row[2] == "12" or row[2] == "13" or row[2] == "14" or row[2] == "15" or row[2] == "16" or row[2] == "17" or row[2] == "18" or row[2] == "19"){
                edadF[1] += 1;
            }
            if (row[2] == "20" or row[2] == "21" or row[2] == "22" or row[2] == "23" or row[2] == "24" or row[2] == "25" or row[2] == "26" or row[2] == "27" or row[2] == "28" or row[2] == "29"){
                edadF[2] += 1;
            }
            if (row[2] == "30" or row[2] == "31" or row[2] == "32" or row[2] == "33" or row[2] == "34" or row[2] == "35" or row[2] == "36" or row[2] == "37" or row[2] == "38" or row[2] == "39"){
                edadF[3] += 1;
            }
            if (row[2] == "40" or row[2] == "41" or row[2] == "42" or row[2] == "43" or row[2] == "44" or row[2] == "45" or row[2] == "46" or row[2] == "47" or row[2] == "48" or row[2] == "49"){
                edadF[4] += 1;
            }
            if (row[2] == "50" or row[2] == "51" or row[2] == "52" or row[2] == "53" or row[2] == "54" or row[2] == "55" or row[2] == "56" or row[2] == "57" or row[2] == "58" or row[2] == "59"){
                edadF[5] += 1;
            }
            if (row[2] == "60" or row[2] == "61" or row[2] == "62" or row[2] == "63" or row[2] == "64" or row[2] == "65" or row[2] == "66" or row[2] == "67" or row[2] == "68" or row[2] == "69"){
                edadF[6] += 1;
            }
            if (row[2] == "70" or row[2] == "71" or row[2] == "72" or row[2] == "73" or row[2] == "74" or row[2] == "75" or row[2] == "76" or row[2] == "77" or row[2] == "78" or row[2] == "79"){
                edadF[7] += 1;
            }
            if (row[2] == "80" or row[2] == "81" or row[2] == "82" or row[2] == "83" or row[2] == "84" or row[2] == "85" or row[2] == "86" or row[2] == "87" or row[2] == "88" or row[2] == "89"){
                edadF[8] += 1;
            }
            if (row[2] == "90" or row[2] == "91" or row[2] == "92" or row[2] == "93" or row[2] == "94" or row[2] == "95" or row[2] == "96" or row[2] == "79" or row[2] == "98" or row[2] == "99"){
                edadF[9] += 1;
            }
            if (row[2] == "100" or row[2] == "101" or row[2] == "102" or row[2] == "103" or row[2] == "104" or row[2] == "105" or row[2] == "106" or row[2] == "107" or row[2] == "108" or row[2] == "109"){
                edadF[10] += 1;
            }
        }
    }

    int porInf = (cantMuestras/cantInf);
    int porF = (cantInf/cantF);

    cout<<endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "\nLa cantidad total de muestras es de: " << cantMuestras << endl;
    cout << "\nLa cantidad de infectados es de: " << cantInf << endl;
    cout << "\nLa cantidad de fallecidos es de: " << cantF << endl;
    cout << "\nEl porcentaje de infectados por muestras es de: " << porInf << "%" << endl;
    cout << "\nEl porcentaje de fallecidos por infectados es de: " << porF << "%" << endl;
    cout << "\nLa cantidad de infectados por anos: \n De  0 a  9: " << edad[0] << "\n De 10 a 19: " << edad[1] << "\n De 20 a 29: " << edad[2] << "\n De 30 a 39: " << edad[3] << "\n De 40 a 49: " << edad[4] << "\n De 50 a 59: " << edad[5] << "\n De 60 a 69: " << edad[6] << "\n De 70 a 79: " << edad[7] << "\n De 80 a 89: " << edad[8] << "\n De 90 a 99: " << edad[9] << "\n De 100 a 109: " << edad[10] << endl;
    cout << "\nLa cantidad de fallecidos por anos: \n De  0 a  9: " << edadF[0] << "\n De 10 a 19: " << edadF[1] << "\n De 20 a 29: " << edadF[2] << "\n De 30 a 39: " << edadF[3] << "\n De 40 a 49: " << edadF[4] << "\n De 50 a 59: " << edadF[5] << "\n De 60 a 69: " << edadF[6] << "\n De 70 a 79: " << edadF[7] << "\n De 80 a 89: " << edadF[8] << "\n De 90 a 99: " << edadF[9] << "\n De 100 a 109: " << edadF[10] << endl;
    cout << "\n-------------------------------------------------------" << endl;
};
