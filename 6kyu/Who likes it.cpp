#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
    if(names.size() == 0) return "no one likes this";
    else if(names.size() == 1) return names[0] + " likes this";
    else if(names.size() == 2) return names[0] + " and " + names[1] + " like this";
    else if(names.size() == 3) return names[0] + ", " + names[1] + " and " + names[2] + " like this"; 
    else if(names.size() >= 4) return names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
    return "";
}