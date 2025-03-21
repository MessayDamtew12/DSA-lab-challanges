 
#include <vector>
#include <algorithm> // For std::swap

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            std::swap(s[left], s[right]); // Swap characters
            left++;
            right--;
        }
    }
};
