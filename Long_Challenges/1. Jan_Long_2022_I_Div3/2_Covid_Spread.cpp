#include <bits/stdc++.h>
using namespace std;

#define int long long int

int noOfInfects(int N, int D) {
    if(D <= 10){
        int res = (1 << D);
        if(res < N){
            return res;
        }
        else{
            return N;
        }
    }
    int res = (1 << 10);
    if(res > N){
        return N;
    }
    if(D/10 > 3){
        return N;
    }
    // res = 1;
    int mod1 = D%10;
    D /= 10;
    res *= (pow(D+2, (mod1)));
    while(D > 1) {
        res *= (pow(D+1, 10));
        if(res > N) {
            return N;
        }
        D--;
    }
    if(res > N){
        return N;
    }
    return res;
}

int32_t main() {
	int T;
	cin>>T;
	while(T--) {
	    int N;
	    int D;
	    cin>>N>>D;
	    cout<<noOfInfects(N, D)<<endl;
	}
	return 0;
}


//https://www.codechef.com/JAN221C/problems/COVSPRD

// Sample Input 1 
// 4
// 100 3
// 2000 10
// 6000 11
// 10 11
// Sample Output 1 
// 8
// 1024
// 3072
// 10
// Explanation
// Test Case 1:

// At the end of day 1, the number of infected people is 2×1=2.
// At the end of day 2, the number of infected people is 2×2=4.
// At the end of day 3, the number of infected people is 2×4=8.
// Test Case 2: Following the rules in the statement, it can be seen that at the end of day 10, the total number of infected people is 1024.

// Test Case 3: Note that starting at day 11, the number of infected people triples each day, 3×1024=3072.

// Test Case 4: At the end of day 3, the number of infected people is 8. Since there are only 10 people in ChefLand (which is less than 2×8=16), at the end of day 4 all people in ChefLand are infected and thus the number of infected people is 10 for all days from day 4 onwards, including day 11.