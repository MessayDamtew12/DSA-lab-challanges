#include <iostream>
#include <unordered_map>

using namespace std;

int longestPalindrome(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int length = 0;
    bool hasOdd = false;
    
    for (auto& pair : freq) {
        if (pair.second % 2 == 0) {
            length += pair.second;
        } else {
            length += pair.second - 1;
            hasOdd = true;
        }
    }

    if (hasOdd) {
        length += 1; // Place one odd character in the middle
    }

    return length;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Longest Palindrome Length: " << longestPalindrome(s) << endl;
    return 0;
}
