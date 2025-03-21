#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> freq;
    
    // Count frequency of each character
    for (char c : s) {
        freq[c]++;
    }
    
    // Find the first unique character
    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] == 1) {
            return i;
        }
    }
    
    return -1; // No unique character found
}

int main() {
    string s = "loveleetcode";
    cout << firstUniqChar(s) << endl;
    return 0;
}
