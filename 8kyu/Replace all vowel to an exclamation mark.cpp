#include <string>

using namespace std;

string replace(const string &s)
{
    std::string vowel = "AEIOUaeiou";
    std::string res = s;
    for(int i = 0; i < res.length(); i++){
      if(vowel.find(res[i]) != std::string::npos)
        res[i] = '!';
    }
    return res; //coding and coding....
}