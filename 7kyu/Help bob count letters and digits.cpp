#include <string>

int countLettersAndDigits(std::string input)
{
    int s = 0;
    for(auto i : input){
      if(std::isalpha(i) || std::isdigit(i))
        s++;
    }
    return s;
}