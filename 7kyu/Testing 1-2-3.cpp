#include <string>
#include <vector>

std::vector<std::string> number(const std::vector<std::string> &lines)
{
    if(lines.empty()) return {};
    std::vector<std::string> res(lines.size());
    for(int i = 0; i < lines.size(); i++){
        res[i] += std::to_string(i + 1) + ": " + lines[i];
    }
    return res;
}