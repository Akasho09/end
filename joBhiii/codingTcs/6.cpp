// Q5) You are given a string A and you have to find the number of different sub-strings of the string A which are fake palindromes. 

// Note: 

// 1. Palindrome: A string is called a palindrome if you reverse the string yet the order of letters remains the same. For example, MADAM. 

// 2. Fake Palindrome: A string is called as a fake palindrome if any of its permutations is a palindrome. For example, AAC is fake palindrome, but ACD is not. 

// 3. Sub-string: A sub-string is a contiguous sequence (non-empty) of characters within a string. 

// 4. Two sub-strings are considered same if their starting indices and ending indices are equal. 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to check if a substring can be rearranged into a palindrome
bool isFakePalindrome(const string &s, int l, int r) {
    vector<int> freq(26, 0);
    for (int i = l; i <= r; i++) freq[s[i] - 'A']++;

    int oddCount = 0;
    for (int f : freq)
        if (f % 2 != 0) oddCount++;

    // For fake palindrome, at most one character can have odd frequency
    return oddCount <= 1;
}

int countFakePalSubstrings(string s) {
    int n = s.size();
    int count = 0;

    // Check all substrings
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isFakePalindrome(s, i, j)) count++;
        }
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    cout << countFakePalSubstrings(s);
    return 0;
}
