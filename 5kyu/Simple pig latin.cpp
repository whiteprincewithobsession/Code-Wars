#include <sstream>
#include <string>
#include <vector>

std::string pig_it(std::string text) {
    std::istringstream iss(text);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word) {
        if (std::isalpha(word[0])) {
            word = word.substr(1) + word[0] + "ay";
        }
        words.push_back(word);
    }
    std::string result;
    for (const auto& w : words) {
        result += w + " ";
    }
    result.pop_back();

    return result;
}