#include <iostream>
#include <string>
using namespace std;

int shift(char x, char y){
  return (26 + (x - 'A') - (y - 'A')) % 26 + 'A';
}

int main() {
  string word;
  string code;
  
  cin >> word;
  cin >> code;

  string cypher = "";

  for(int i = 0; i < word.size(); i ++){
    char letter = shift(word[i], code[i]);
    cypher.push_back(letter);
    cout << letter;
    code += string(1, letter);
  }
  cout << endl << cypher;
}
