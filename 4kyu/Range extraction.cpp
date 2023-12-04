#include <vector>
#include <string>

std::string range_extraction(std::vector<int> args) {
  std::string result = "";
  for (int i = 0; i < args.size(); ++i) {
    int rangeStart = args[i];
    while (i + 1 < args.size() && (args[i+1] - args[i] == 1))
      ++i;
    if (i > 0 && args[i] - rangeStart > 1)
      result += std::to_string(rangeStart) + "-" + std::to_string(args[i]);
    else if (i > 0 && args[i] - rangeStart == 1) {
      result += std::to_string(rangeStart) + "," + std::to_string(args[i]);
    } else
      result += std::to_string(args[i]);
    if (i + 1 < args.size())
      result += ",";
  }
  return result;
}