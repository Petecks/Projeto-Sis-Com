#include <iostream>
#include <vector>

enum 5b6b {  };
enum 3b4b {  };




int main(int argc, char const *argv[]) {
  std::vector<int> mensagem(16,1);
  //std::vector<int> mensagem_codificada;

  std::cout << "Mensagem:";
  for (std::vector<int>::iterator it = mensagem.begin(); it != mensagem.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << "\n Mensagem Codificada";
  for (std::vector<int>::iterator it = mensagem_codificada.begin(); it != mensagem_codificada.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';


  while (!mensagem.empty()) {
    std::vector<int> mensagem_5b; // miscela da mensagem a ser tratada
    std::vector<int> mensagem_3b; // miscela da mensagem a ser tratada
    std::vector<int> mensagem_8b; // miscela da mensagem a ser tratada

    for (int i = 0 ; i < 5 ; i++){    //5b6b
      mensagem_5b.push_back(mensagem.front());
      mensagem.erase(mensagem.begin());
    }


    for (int i = 0 ; i < 3 ; i++){  //3b4b
      mensagem_3b.push_back(mensagem.front());
      mensagem.erase(mensagem.begin());
    }


  }
  std::cout << "APOSS \n Mensagem:";
  for (std::vector<int>::iterator it = mensagem.begin(); it != mensagem.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << "\n Mensagem Codificada";
  for (std::vector<int>::iterator it = mensagem_codificada.begin(); it != mensagem_codificada.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
