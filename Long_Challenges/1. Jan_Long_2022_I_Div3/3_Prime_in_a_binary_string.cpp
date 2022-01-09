#include<bits/stdc++.h>
using namespace std;

#define int long long int

bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int convertToDecimal (string s) {
    int res = 0;
    int k = 0;

    for(int i=s.length()-1; i>=0; i--) {
        res += ((s[i] - '0') << k);
        k++;
    }
    return res;
}

bool generateCheckSubStr(string s) {
    int N = s.length();
    for(int i=0; i<N; i++) {
        for (int len = 1; len <= N - i; len++){
            int temp = convertToDecimal(s.substr(i, len));
            if(isPrime(temp)) {
                return true;
            }
        }
    }
    return false;
}

int32_t main() {
    int T;
    cin>>T;
    while(T--) {
        string s;
        cin>>s;
        int noOf1 = 0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == '1'){
               noOf1++; 
            }
        }
        if(s.length() == 1) {
            cout<<"No\n";
        }
        else if(noOf1 == 1 && s[s.length()-1] == '1') {
            cout<<"No\n";
        }
        else if(noOf1 == 1 && s[s.length()-1] == '0'){
            cout<<"Yes\n"
            ;
        }
        else if(noOf1 == 0){
            cout<<"No\n";   
        }
        else{
            int N = s.length();
            if(generateCheckSubStr(s)){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
                
            }
        }
        
            
    }
}

//https://www.codechef.com/JAN221C/problems/PINBS
// Sample Input 1 
// 3
// 1
// 111
// 101101
// Sample Output 1 
// No
// Yes
// Yes
// Explanation
// Test case 1: There is only one substring, namely "1", and it isn't prime.

// Test case 2: The substrings of the given string are {"1", "11", "111", "1", "11", "1"}. Of these, "111" which represents 7 in binary, and "11" which represents 3 in binary, are primes.

// Test case 3: One of the substrings of the string is "1101", which is the binary representation of 13 — a prime.