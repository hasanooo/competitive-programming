
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndexMap; // Map to store the last index of each character
    int maxLength = 0;
    int start = 0; // Start of the current window

    for (int end = 0; end < s.length(); ++end) {
        if (charIndexMap.find(s[end]) != charIndexMap.end()) {
            // Move the start of the window to avoid repeating characters
            start = max(start, charIndexMap[s[end]] + 1);
            cout<<charIndexMap[s[end]] + 1<<endl;

        }

        // Update the last index of the current character
        charIndexMap[s[end]] = end;

        // Calculate the maximum length
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    string s1 = "abcabcbb";
    string s2 = "bbbbb";
    string s3 = "pwwkew";

    //cout << "Input: " << s1 << "\nOutput: " << lengthOfLongestSubstring(s1) << endl;
    //cout << "Input: " << s2 << "\nOutput: " << lengthOfLongestSubstring(s2) << endl;
    cout << "Input: " << s3 << "\nOutput: " << lengthOfLongestSubstring(s3) << endl;

    return 0;
}
