#include <unordered_map>
#include <vector>
#include <sstream>

std::unordered_map<std::string, int> words = 
{ {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, 
  {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"ten", 10}, 
  {"eleven", 11}, {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14}, 
  {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17}, {"eighteen", 18}, 
  {"nineteen", 19}, {"twenty", 20}, {"thirty", 30}, {"forty", 40}, {"fifty", 50}, 
  {"sixty", 60}, {"seventy", 70}, {"eighty", 80}, {"ninety", 90}, 
  {"hundred", 100}, {"thousand", 1000}, {"million", 1e6} };

int parse_int(std::string s) {
      for(int i = 0; i < s.length(); i++){
        if(s[i] == '-') s[i] = ' ';
      }
    std::stringstream ss(s);
    std::string word;
    std::vector<int> values;
    while(ss >> word) {
        if(word != "and") {
            values.push_back(words[word]);
        }
    }

    int total = 0;
    int temp_sum = 0;
    for (int value : values) {
        if(value >= 100) {
            if(temp_sum) {
                temp_sum *= value;
            } else {
                temp_sum = value;
            }
        } else {
            temp_sum += value;
        }
        if(temp_sum >= 1000) {
            total += temp_sum;
            temp_sum = 0;
        }
    }
    total += temp_sum; 
    return total;
}