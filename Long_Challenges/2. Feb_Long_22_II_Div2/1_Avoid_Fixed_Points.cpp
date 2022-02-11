#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=1; i<=N; i++){
        cin>>arr[i];
    }
    int diff = 0;
    int res = 0;
    for(int i=1; i<=N; i++){
        if(i+diff == arr[i]){
            diff += 1;
            res += 1;
        }
    }
    cout<<res<<endl;
    return;
    
}

int32_t main() {
	int T;
	cin>>T;
	while(T--){
	    solve();
	}
	return 0;
}

// Avoid Fixed Points Problem Code: NOFIX
// Chef has a sequence of N integers A=[A1,A2,…,AN]. He can perform the following operation any number of times (possibly, zero):

// Choose any positive integer K and insert it at any position of the sequence (possibly the beginning or end of the sequence, or in between any two elements).
// For example, if A=[5,3,4] and Chef selects K=2, then after the operation he can obtain one of the sequences [2–,5,3,4],[5,2–,3,4],[5,3,2–,4], or [5,3,4,2–].

// Chef wants this sequence to satisfy the following condition: for each 1≤i≤∣A∣, Ai≠i. Here, ∣A∣ denotes the length of A.

// Help Chef to find the minimum number of operations that he has to perform to achieve this goal. It can be proved that under the constraints of the problem, it's always possible to achieve this goal in a finite number of operations.

// Input Format
// The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains an integer N.
// The second line contains N space-separated integers A1,A2,…,AN.
// Output Format
// For each test case, print a single line containing one integer — the minimum number of operations that Chef has to perform to achieve the given condition.

// Constraints
// 1≤T≤104
// 1≤N≤105
// 1≤Ai≤109
// Sum of N over all test caes does not exceed 2⋅105.
// Subtasks
// Subtask #1 (100 points): Original constraints

// Sample Input 1 
// 3
// 3
// 2 4 5
// 3
// 4 1 3
// 4
// 3 2 4 2
// Sample Output 1 
// 0
// 1
// 2
// Explanation
// Test case 1: The given sequence does not contain any index i such that Ai=i. Hence Chef does not have to perform any operation.

// Test case 2: In the given sequence, A3=3. Chef can choose K=2 and insert it before the first element, making the sequence A=[2–,4,1,3], which does not contain any index i for which Ai=i.

// Test case 3: In the given sequence, A2=2. Chef can perform the following sequence of operations:

// Choose K=5 and insert it before the first element. The sequence becomes A=[5–,3,2,4,2], and now A4=4.
// Choose K=3 and insert it between the third and fourth element. The sequence becomes A=[5,3,2,3–,4,2], which does not contain any index i for which Ai=i.
// It can be verified that there is no way to satisfy the given condition in less than two operations.
