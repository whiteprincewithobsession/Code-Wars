#include <vector>

char findMissingLetter(const std::vector<char>& chars)
{
  for(int i = 1; i < chars.size(); i++){
    if(chars[i] - chars[i - 1] == 2) return chars[i -1] + 1;
  }
}