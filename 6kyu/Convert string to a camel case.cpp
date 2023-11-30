#include <string>

std::string to_camel_case(std::string text) {
  if(text.length() <= 1) return text;
  for(int i = 1; i <= text.length(); i++){
    if(text[i] == '-' || text[i] == '_'){
      text[i + 1] = std::toupper(text[i + 1]);
      text.erase(text.begin() + i, text.begin() + i + 1);  
    }
    
  }
  return text;
}