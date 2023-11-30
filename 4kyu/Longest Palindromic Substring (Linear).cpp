#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longest_palindrome(string s) {
  if (s.empty()) return "";
    string modified = "#";
  for (char c : s) {
    modified += c;
    modified += "#";
    }

    int n = modified.size();
    vector<int> palindromeLengths(n, 0);

    int center = 0, right = 0;
    int maxLen = 0, start = 0;

for (int i = 0; i < n; ++i) {
        int mirror = 2 * center - i;

      if (i < right) {
        palindromeLengths[i] = min(right - i, palindromeLengths[mirror]);
        }

        int leftIdx = i - (1 + palindromeLengths[i]);
        int rightIdx = i + (1 + palindromeLengths[i]);

        while (leftIdx >= 0 && rightIdx < n && modified[leftIdx] == modified[rightIdx]) {
            palindromeLengths[i]++;
          leftIdx--;
            rightIdx++;
          }

          if (i + palindromeLengths[i] > right) {
            center = i;
            right = i + palindromeLengths[i];
        }

        if (palindromeLengths[i] > maxLen) {
            maxLen = palindromeLengths[i];
          start = (i - maxLen) / 2;
            }
            }

        return s.substr(start, maxLen);
            }