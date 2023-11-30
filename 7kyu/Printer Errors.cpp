#include <string>

class Printer
{
public:
    static std::string printerError(const std::string &s){
      uint32_t counter = 0; 
      for(auto letter : s){
        if(letter > 'm') counter++;
      }
      return std::string(std::to_string(counter) + "/" + std::to_string(s.length()));
    }
};