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


    // SESSAO DE TESTE
  std::vector<vector<int>> mensagem;
  std::vector<int> info1(8,1);
  std::vector<int> info2(8,0);
  std::vector<int> info3(8,1);
  std::vector<int> info4(8,0);
  std::vector<int> info5(8,1);
  std::vector<int> info6(8,0);
  std::vector<int> info7(8,1);
  std::vector<int> info8(8,0);
    mensagem.push_back(info1);
    mensagem.push_back(info2);
    mensagem.push_back(info3);
    mensagem.push_back(info4);
    mensagem.push_back(info5);
    mensagem.push_back(info6);
    mensagem.push_back(info7);
    mensagem.push_back(info8);

    std::cout << "\n Mensagem Antes da codificacao:";
    for (std::vector<int>::iterator it = info1.begin(); it != info1.end(); ++it)
      std::cout << ' ' << *it;
      std::cout << "\n Mensagem Antes da codificacao:";
    for (std::vector<int>::iterator it = info2.begin(); it != info2.end(); ++it)
        std::cout << ' ' << *it;
        std::cout << "\n Mensagem Antes da codificacao:";
        for (std::vector<int>::iterator it = info3.begin(); it != info3.end(); ++it)
          std::cout << ' ' << *it;
          std::cout << "\n Mensagem Antes da codificacao:";
          for (std::vector<int>::iterator it = info4.begin(); it != info4.end(); ++it)
            std::cout << ' ' << *it;
            std::cout << "\n Mensagem Antes da codificacao:";
            for (std::vector<int>::iterator it = info5.begin(); it != info5.end(); ++it)
              std::cout << ' ' << *it;
              std::cout << "\n Mensagem Antes da codificacao:";
              for (std::vector<int>::iterator it = info6.begin(); it != info6.end(); ++it)
                std::cout << ' ' << *it;
                std::cout << "\n Mensagem Antes da codificacao:";
                for (std::vector<int>::iterator it = info7.begin(); it != info7.end(); ++it)
                  std::cout << ' ' << *it;
                  std::cout << "\n Mensagem Antes da codificacao:";
                  for (std::vector<int>::iterator it = info8.begin(); it != info8.end(); ++it)
                    std::cout << ' ' << *it;
    // FIM DA SESSAO DE TESTE





      std::vector<vector<string> > todas_mensagens;  // 20 se refere a quantidade de caracteres a serem lidos

    for (int elementos = 0 ; elementos < mensagem.size() ; elementos++){

              std::vector<string> mensagem10b; // miscela da mensagem a ser tratada


            // ------------------lida com 5b
            for (int i = 0 ; i < 33 ; i++){
                if (to_string(mensagem[elementos][3]) == array[i][0] && to_string(mensagem[elementos][4]) == array[i][1] && to_string(mensagem[elementos][5]) == array[i][2] && to_string(mensagem[elementos][6]) == array[i][3] && to_string(mensagem[elementos][7]) == array[i][4]){
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
                if (to_string(mensagem[elementos][0]) == array3b[i][0] && to_string(mensagem[elementos][1]) == array3b[i][1] && to_string(mensagem[elementos][2]) == array3b[i][2] ){
                    if (RD < 0){
                        mensagem10b.push_back(to_string(!stoi(array3b[i][3])));
                        mensagem10b.push_back(to_string(!stoi(array3b[i][4])));
                        mensagem10b.push_back(to_string(!stoi(array3b[i][5])));
                        mensagem10b.push_back(to_string(!stoi(array3b[i][6])));
                        RD++;
                    }else{
                        mensagem10b.push_back(array3b[i][3]);
                        mensagem10b.push_back(array3b[i][4]);
                        mensagem10b.push_back(array3b[i][5]);
                        mensagem10b.push_back(array3b[i][6]);
                        if ( stoi(array[i][3]) + stoi(array[i][4]) + stoi(array[i][5]) + stoi(array[i][6]) > 2) RD--;
                    }
                }
            }


          std::cout << " \n Mensagem apos codificacao:";
          for (std::vector<string>::iterator it = mensagem10b.begin(); it != mensagem10b.end(); ++it)
            std::cout << ' ' << *it;

        todas_mensagens.push_back(mensagem10b);
    }

  return 0;
}
