# include <string>

bool is_vowel(char c){
  char vowels[11] = "aeiouAEIOU";
  for(int i = 0; i < 10; i++){
    if(c == vowels[i]) return true;
  }
  return false;
  
}

std::string disemvowel(const std::string& str) {
  std::string res = "";
  for(auto i : str){
    if(is_vowel(i)) continue;
    res.push_back(i);
  }
  return res;
}