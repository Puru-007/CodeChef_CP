#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define mk make_pair
#define pb push_back

void solve() {
    int N;
    cin>>N;
    vector<pair<int, int>> v;
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;
    int x[N], y[N];
    for(int i=0; i<N; i++){
        cin>>x[i]>>y[i];
        mp1[x[i]]++;
        mp2[y[i]]++;
    }
    
    cout<<mp1.size() + mp2.size()<<endl;
}

int32_t main() {
    int T;
    cin>>T;
    while(T--){
        solve();
    }
	return 0;
}

// Points and Lines Problem Code: POLIN
// Given N points of the form (xi,yi) on a 2-D plane.

// From each point, you draw 2 lines one horizontal and one vertical. Now some of the lines may overlap each other, therefore you are required to print the number of distinct lines you can see on the plane.

// Note:

// Two horizontal lines are distinct if they pass through different y coordinates.
// Two vertical lines are distinct if they pass through different x coordinates.
// Input Format
// First line will contain T, number of testcases. Then the testcases follow.
// Each testcase contains a single integer N, the number of points.
// The next N lines contain two space separated integers xi,yi, the coordinate of the ith point.
// Output Format
// For each testcase, output in a single line the number of distinct lines that can be seen on the plane.

// Constraints
// 1≤T≤1000
// 1≤N≤105
// 0≤Xi,Yi≤109
// Sum of N over all test cases is atmost 105.
// Sample Input 1 
// 3
// 4
// 1 1
// 1 0
// 0 1
// 0 0
// 5
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 1
// 10 10
// Sample Output 1 
// 4
// 6
// 2
// Explanation
// Test Case 1: There are 2 horizontal lines passing through Y=0 and Y=1, and 2 vertical lines passing through X=0 and X=1.



// Test Case 2: There are 5 horizontal lines passing through Y=0,Y=1,Y=2,Y=3 and Y=4 and 1 vertical line passing through X=0.

// Test Case 3: There is 1 horizontal line passing through Y=10 and 1 vertical line passing through X=10.

