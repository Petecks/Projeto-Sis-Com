#include <iostream>
#include <vector>
#include <string>
#include <sstream> //istringstream
#include <iostream> // cout
#include <fstream> // ifstream

using namespace std;

int main(int argc, char const *argv[]) {

//****************************** 5B6B

    ifstream in("coding5b.csv");

    string line, field;

    vector< vector<string> > array;  // the 2D array
    vector<string> v;                // array of values for one line only

    while ( getline(in,line) ){
        v.clear();
        stringstream ss(line);
        while (getline(ss,field,',')){
            v.push_back(field);  // add each field to the 1D array
        }
        array.push_back(v);  // add the 1D array to the 2D array
    }

    // print out what was read in
    cout << "CODIFICACAO 5B" << "\n";
    for (size_t i=0; i<array.size(); ++i){
        for (size_t j=0; j<array[i].size(); ++j){
            cout << array[i][j] << "|"; // (separate fields by |)
        }
        cout << "\n";
    }

//********************************  3B4B

ifstream in3b("coding3b.csv");

string line3b, field3b;

vector< vector<string> > array3b;  // the 2D array
vector<string> v3b;                // array of values for one line only

while ( getline(in3b,line3b) ){
    v3b.clear();
    stringstream ss3b(line3b);
    while (getline(ss3b,field3b,',')){
        v3b.push_back(field3b);  // add each field to the 1D array
    }
    array3b.push_back(v3b);  // add the 1D array to the 2D array
}

// print out what was read in
cout << "CODIFICACAO 3B" << "\n";
for (size_t i=0; i<array3b.size(); ++i){
    for (size_t j=0; j<array3b[i].size(); ++j){
        cout << array3b[i][j] << "|"; // (separate fields by |)
    }
    cout << "\n";
}

//*****************************************************

    int RD = 0;

  std::vector<int> mensagem(8,1);

  std::cout << "\n Mensagem Antes da codificacao:";

  std::vector<string> mensagem10b(8); // miscela da mensagem a ser tratada
  for (std::vector<int>::iterator it = mensagem.begin(); it != mensagem.end(); ++it)
    std::cout << ' ' << *it;

    std::cout << '\n' << mensagem10b.size() << endl;


    // ------------------lida com 5b
    for (int i = 0 ; i < 33 ; i++){
        if (to_string(mensagem[3]) == array[i][0] && to_string(mensagem[4]) == array[i][1] && to_string(mensagem[5]) == array[i][2] && to_string(mensagem[6]) == array[i][3] && to_string(mensagem[7]) == array[i][4]){
            if (RD < 0){
                mensagem10b.push_back(to_string(!stoi(array[i][5])));
                mensagem10b.push_back(to_string(!stoi(array[i][6])));
                mensagem10b.push_back(to_string(!stoi(array[i][7])));
                mensagem10b.push_back(to_string(!stoi(array[i][8])));
                mensagem10b.push_back(to_string(!stoi(array[i][9])));
                mensagem10b.push_back(to_string(!stoi(array[i][10])));
                RD++;
            }else{
                mensagem10b.push_back(array[i][5]);
                mensagem10b.push_back(array[i][6]);
                mensagem10b.push_back(array[i][7]);
                mensagem10b.push_back(array[i][8]);
                mensagem10b.push_back(array[i][9]);
                mensagem10b.push_back(array[i][10]);
                if ( stoi(array[i][5]) + stoi(array[i][6]) + stoi(array[i][7]) + stoi(array[i][8]) + stoi(array[i][9]) + stoi(array[i][10]) > 3) RD--;
            }
        }
    }


    // ------------------lida com 3b
    for (int i = 0 ; i < 8 ; i++){
        if (to_string(mensagem[0]) == array3b[i][0] && to_string(mensagem[1]) == array3b[i][1] && to_string(mensagem[2]) == array3b[i][2] ){
            if (RD < 0){
                mensagem10b.push_back(to_string(!stoi(array3b[i][3]));
                mensagem10b.push_back(to_string(!stoi(array3b[i][4]));
                mensagem10b.push_back(to_string(!stoi(array3b[i][5]));
                mensagem10b.push_back(to_string(!stoi(array3b[i][6]));
                RD++;
            }else{
                mensagem10b.push_back(array3b[i][3]);
                mensagem10b.push_back(array3b[i][4]);
                mensagem10b.push_back(array3b[i][5]);
                mensagem10b.push_back(array3b[i][6]);
                if ( stoi(array[i][3]) + stoi(array[i][4]) + stoi(array[i][5]) + stoi(array[i][6]) > 0) RD--;
            }
        }
    }


  std::cout << " \n Mensagem apos codificacao:";
  for (std::vector<string>::iterator it = mensagem10b.begin(); it != mensagem10b.end(); ++it)
    std::cout << ' ' << *it;
    std::cout << '\n' << mensagem10b.size() << endl;
  return 0;
}
