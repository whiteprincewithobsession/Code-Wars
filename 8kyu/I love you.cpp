#include <string>
#include <array>

std::string how_much_i_love_you(int nb_petals) {  
  std::array<std::string, 6> res {"I love you", "a little", "a lot",
                                  "passionately", "madly", "not at all"};
  return res[nb_petals % 6 == 0 ? 5 : nb_petals % 6 - 1];
}