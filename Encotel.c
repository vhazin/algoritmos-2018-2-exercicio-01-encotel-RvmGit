#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
  std::string frase;
  std::getline (std::cin,frase);
  int tamanho = frase.size();
    while (tamanho != 0){
        std::replace(frase.begin(),frase.end(),'A','2');
        std::replace(frase.begin(),frase.end(),'B','2');
        std::replace(frase.begin(),frase.end(),'C','2');
        std::replace(frase.begin(),frase.end(),'D','3');
        std::replace(frase.begin(),frase.end(),'E','3');
        std::replace(frase.begin(),frase.end(),'F','3');
        std::replace(frase.begin(),frase.end(),'G','4');
        std::replace(frase.begin(),frase.end(),'H','4');
        std::replace(frase.begin(),frase.end(),'I','4');
        std::replace(frase.begin(),frase.end(),'J','5');
        std::replace(frase.begin(),frase.end(),'K','5');
        std::replace(frase.begin(),frase.end(),'L','5');
        std::replace(frase.begin(),frase.end(),'M','6');
        std::replace(frase.begin(),frase.end(),'N','6');
        std::replace(frase.begin(),frase.end(),'O','6');
        std::replace(frase.begin(),frase.end(),'P','7');
        std::replace(frase.begin(),frase.end(),'Q','7');
        std::replace(frase.begin(),frase.end(),'R','7');
        std::replace(frase.begin(),frase.end(),'S','7');
        std::replace(frase.begin(),frase.end(),'T','8');
        std::replace(frase.begin(),frase.end(),'U','8');
        std::replace(frase.begin(),frase.end(),'V','8');
        std::replace(frase.begin(),frase.end(),'W','9');
        std::replace(frase.begin(),frase.end(),'X','9');
        std::replace(frase.begin(),frase.end(),'Y','9');
        std::replace(frase.begin(),frase.end(),'Z','9');
        cout<<frase<<"\n";
        std::getline (std::cin,frase);
        tamanho = frase.size();
    }
  return 0;
}
