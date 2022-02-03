#include <bits/stdc++.h>
using namespace std;

#define int long long int


bool cmp(pair<char, int>& a, pair<char, int>& b){
    return a.second < b.second;
}

string notPalString(int N, string s){
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    for(int i=0; i<N; i++){
        mp1[s[i]]++;
    }
    vector<pair<char, int>> vec;
    int maxOccur = 0;
    
    for(auto it: mp1){
        if(it.second > maxOccur){
            maxOccur = it.second;
        }
        vec.push_back(it);
    }
    if(maxOccur > N/2){
        return("NO!!");
    }
    
    sort(vec.begin(), vec.end(), cmp);
    string res = "";
    for(int i=0; i<vec.size(); i++){
        // mp2[vec[i].first] = vec[i].second;
        for(int j=0; j<vec[i].second; j++){
            res += vec[i].first;
        }
    }
    
    
    // for(auto it: mp2){
    //     for(int i=0; i<it.second; i++){
    //         res += it.first;
    //     }
    // }
    
    int j = N/2;
    int i=0;
    j--;
    char c;
    while(i<j){
        c=res[i];
        res[i]=res[j];
        res[j] = c;
        i++;
        j--;
    }
    
    return res;
    
    
}

int32_t main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    string s;
	    cin>>s;
	
	    if(N % 2 == 1){
	        cout<<"NO"<<endl;
	    }
	    else{
	        string res = notPalString(N, s);
	        if(res == "NO!!"){
    	        cout<<"NO"<<endl;
    	    }
    	    else{
    	        cout<<"YES"<<endl;
    	        cout<<res<<endl;
    	    }
	    }
	    
	    
	}
	return 0;
}


// https://www.codechef.com/START24B/problems/ANTI_PAL
// A (1-indexed) string S of length N is said to be anti-palindrome if, for each 1≤i≤N, Si≠S(N+1−i).

// You are given a string S of length N (consisting of lowercase Latin letters only). Rearrange the string to convert it into an anti-palindrome or determine that there is no rearrangement which is an anti-palindrome.

// If there are multiple rearrangements of the string which are anti-palindromic, print any of them.

// Input Format
// The first line of input contains a single integer T — the number of test cases. The description of T test cases follows.
// The first line of each test case contains an integer N — the length of the string S.
// The second line of each test case contains the string S.
// Output Format
// For each test case, if it is possible to rearrange S to convert it into an anti-palindrome, print YES in the first line and print the rearranged string in the second line. Otherwise, print NO.

// You may print each character of YES and NO in uppercase or lowercase (for e.g. yes, yEs, Yes will be considered identical).

// If there are multiple rearrangements of the string which are anti-palindromic, print any of them.

// Constraints
// 1≤T≤104
// 1≤N≤105
// S contains only lowercase Latin letters
// It is guaranteed that the sum of N over all test cases does not exceed 2⋅105.
// Sample Input 1 
// 4
// 3
// abc
// 8
// abccccdd
// 4
// xyyx
// 6
// ppppqr
// Sample Output 1 
// NO
// YES
// abddcccc
// YES
// xxyy
// NO
// Explanation
// Test case 1: No matter how the string is rearranged, the condition Si≠S(N+1−i) will not be satisfied for i=2.

// Test case 2: One possible rearrangement of the string which is anti-palindromic is abddcccc. Other answers, such as ccdaccdb, will also be accepted.

// Test case 3: One possible rearrangement of the string which is anti-palindromic is xxyy.

Test case 4: It can be shown that none of the rearrangements of A is anti-palindromic.