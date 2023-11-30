#include <vector>
#include <string>

bool is_vowel(char c){
  if(c == 'U' || c == 'Y' || c == 'A' || c == 'E' || c == 'I' || c == 'O')
    return true;
  else if(c == 'u' || c == 'y' || c == 'a' || c == 'e' || c == 'i' || c == 'o')
    return true;
  return false;
}


std::vector<int> vowelIndices(const std::string& word)
{
    std::vector<int> res{};
    for(int i = 0; i < word.length(); i++){
      if(is_vowel(word[i])) res.push_back(i + 1);
    }
    return res;
}