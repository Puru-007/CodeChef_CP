#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define mk make_pair
#define pb push_back

void solve() {
    int A;
    cin>>A;
    int N = 2*A;
    int arr[N];
    
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+N);
    
    if(arr[0] != 0){
        cout<<"YES"<<endl;
        return;
    }
    int mex = -1;
    int pos = -1;
    
   map<int, int> mp;
    
    for(int i=0; i<N; i++){
        mp[arr[i]]++;
    }
    int i = 0;
    
    while(true){
        if(mp[i] == 0){
            mex = i;
            break;
        }
        i += 1;
    }
    
    if(mex == 0){
        cout<<"YES"<<endl;
        return;
    }
    if(mex == -1){
        mex = arr[N-1] + 1;   
    }
    
    for(int i=0; i<N; i++){
        if(arr[i] < mex){
            if(mp[arr[i]] == 1){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    return;
    
    for(auto it : mp){
        if(it.first < mex){
            if(it.second == 1){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    
    cout<<"YES"<<endl;
    return;
    for(int i=0; i<=pos; i++){
        if(mp[arr[i]] == 1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
    if(arr[0] != 0){
        cout<<"YES"<<endl;
        return;
    }
    if(mp[arr[N-1]] > 1){
        
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;    
}

int32_t main() {
    int T;
    cin>>T;
    while(T--){
        solve();
    }
	return 0;
}





// Equal MEX Problem Code: EQUALMEX
// The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:

// The MEX of [2,2,1] is 0 because 0 does not belong to the array.
// The MEX of [3,1,0,1] is 2 because 0 and 1 belong to the array, but 2 does not.
// The MEX of [0,3,1,2] is 4 because 0,1,2 and 3 belong to the array, but 4 does not.
// You're given an array A containing 2⋅N integers where 0≤Ai≤N. Is it possible to reorder the elements of the array in such a way that the MEX of the first N elements is equal to the MEX of the last N elements?

// Input Format
// The first line contains T denoting the number of test cases. Then the test cases follow.
// The first line of each test case contains a single integer N.
// The second line contains 2⋅N space-separated integers A1,A2,…,A2⋅N.
// Output Format
// For each test case, print YES if there is a valid reordering of the given array and NO otherwise.

// You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

// Constraints
// 1≤T≤104
// 1≤N≤105
// 0≤Ai≤N
// Sum of N over all test cases does not exceed 2⋅105.
// Sample Input 1 
// 4
// 2
// 0 0 0 1
// 2
// 0 0 1 1
// 3
// 1 3 2 3 3 2
// 3
// 0 0 1 1 1 2
// Sample Output 1 
// NO
// YES
// YES
// NO
// Explanation
// Test case 1: There is no way to reorder the elements of the array [0,0,0,1] which satisfies the given conditions.

// Test case 2: One possible reordering is [0,1,0,1]. Here the MEX of the first half is MEX([0,1])=2 and the MEX of the second half is MEX([0,1])=2.

// Test case 3: The given array already satisfies the conditions. Here the MEX of the first half is MEX([1,3,2])=0 and the MEX of the second half is MEX([3,3,2])=0.