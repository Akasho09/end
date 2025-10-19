// Q5) You are given a string A and you have to find the number of different sub-strings of the string A which are fake palindromes. 

// Note: 

// 1. Palindrome: A string is called a palindrome if you reverse the string yet the order of letters remains the same. For example, MADAM. 

// 2. Fake Palindrome: A string is called as a fake palindrome if any of its permutations is a palindrome. For example, AAC is fake palindrome, but ACD is not. 

// 3. Sub-string: A sub-string is a contiguous sequence (non-empty) of characters within a string. 

// 4. Two sub-strings are considered same if their starting indices and ending indices are equal. 

#include <iostream>
using namespace std;
    int isPosPal(string s){
        sort(s.begin(),s.end());
        int l = 0  , r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]) return -1;
            l++; r--;
        }
        if(s.size()%2==0) return 0;
        return s[r];
    }
    int deArrgs(int n){
        int ans = 0;
        int a = 0  , b = 1;
        for(int i=3;i<=n;i++){
            ans+=(i-1)*(a+b);
            a=b; b=ans;
        }
        return ans ;
    }
    int fakePals(string s){
        bool isP = true , odd = true ;
        char prev = s[0];
        int ans = 0 ;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(isP && odd ) {
                    if(s[j]==prev){ ans+=(deArrgs(j-i+1)); odd = false;}
                    else {
                        isP = false;
                    }
                }else if (isP && !odd){
                    ans+=(deArrgs(j-i+1)); odd = true; prev = s[j];
                } else {
                    int r = isPosPal(s.substr(i,j-i+1));
                    if(r!=-1){
                        if(r==0){isP=true; odd=false;}
                        isP=true; odd=true; prev = r;
                        ans+=(deArrgs(j-i+1));
                    }
                }
            }
        }
        return ans ;
    }

int main () {
    string s ;
    cin >> s;
    cout <<fakePals(s);

}

