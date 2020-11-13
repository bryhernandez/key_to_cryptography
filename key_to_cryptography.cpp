#include <iostream>
#include <string>
using namespace std;

int main() {
  string word;
  string code;

  cin >> word;
  cin >> code;

  for(int i = 0; i < word.size(); i ++){
    int index = i % code.size();

    int num = (word[i] - 'A') - (code[index] - 'A');

    if(num >= 26)
      num -= 26;
    if(num < 0)
      num += 26;

    word[i] = num + 'A';
    code[index] = word[i];
  }

  cout << word;
}
