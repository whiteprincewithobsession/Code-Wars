#include <string>

std::string chromosomeCheck(std::string sperm) {
  return sperm == "XY" ? "Congratulations! You're going to have a son." : "Congratulations! You're going to have a daughter.";
}