#include <iostream>
#include <string>
#include <vector>

std::string format_duration(int seconds) {
  if(seconds == 0) return "now";
  if(seconds < 60) return seconds == 1 ? "1 second" : std::to_string(seconds) + " seconds";
  std::vector<int> t;
  std::vector<std::string> t2;
  t.push_back(seconds / 31536000);
  t2.push_back(t[0] == 1 ? "year" : "years");
  t.push_back((seconds % 31536000) / 86400);
  t2.push_back(t[1] == 1 ? "day" : "days");
  t.push_back((seconds % 86400) / 3600);
  t2.push_back(t[2] == 1 ? "hour" : "hours");
  t.push_back((seconds % 3600) / 60);
  t2.push_back(t[3] == 1 ? "minute" : "minutes");
  t.push_back(seconds % 60);
  t2.push_back(t[4] == 1 ? "second" : "seconds");
  int counter = 0;
  for(auto i : t)
    if(i != 0) counter++;
  if(counter == 1){
    for(int i = 0; i < t.size(); i++)
      if(t[i] != 0) return std::to_string(t[i]) + " " + t2[i];
  }
  std::string res = "";
  for(int i = 0; i < t.size(); i++){
    if(t[i] != 0){
      counter = 0;
      for(int j = i; j < t.size(); j++){
        if(t[j] != 0) counter++;
      }
      if(counter >= 2 && res != "") res += ", " + std::to_string(t[i]) + " " + t2[i];
      if(counter >= 2 && res == "") res += std::to_string(t[i]) + " " + t2[i];
      if(counter == 1) res += " and " + std::to_string(t[i]) + " " + t2[i];
    }
  }
  //std::cout << t[0] << " " << t[1] << " " << t[2] << " " << t[3] << " " << t[4];
  return res;
}