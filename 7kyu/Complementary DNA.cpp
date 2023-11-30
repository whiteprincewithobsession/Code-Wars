#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string res;
  for(auto i : dna)
    res.push_back(i == 'T' ? 'A' : i == 'A' ? 'T' : i == 'C' ? 'G' : 'C');
  return res;
}