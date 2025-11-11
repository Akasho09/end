#include <iostream>
using namespace std;

string smallestMostFrequentSubstring(const string& s) {
    vector<int> cnt(26, 0);
    for (char ch : s) cnt[ch - 'a']++;

    int mx = *max_element(cnt.begin(), cnt.end());
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] == mx) return string(1, char('a' + i));
    }
    return ""; // never reached for non-empty s
}


int main (){
    cout << smallestMostFrequentSubstring("abcabc");
}