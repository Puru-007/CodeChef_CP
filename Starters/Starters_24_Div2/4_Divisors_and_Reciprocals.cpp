//This solution didn't passed all the test cases.
//Will push the rectified solution too

#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;

#define int long long int

void solve(){
    int sum, X, Y;
    cin>>sum>>X>>Y;
    int b = sum;
    int a = 1;
    int c = Y;
    if(sum != X){
        cout<<-1<<endl;
        return;
    }
    int d = b*b - 4*a*c;
    double sq_val = sqrt(abs(d));
    if(d > 0){
        // cout<<"Roots"<<(double)(-b + sq_val)/(2*a)<<" & "<<(double)(-b - sq_val)/(2*a)<<endl;
        int num = ((double)(-b + sq_val)/(2*a))*((double)(-b - sq_val)/(2*a));
        if(num < 1){
            cout<<-1<<endl;
            return;
        }
        else{
            int num1 = abs((double)(-b + sq_val)/(2*a));
            int num2 = abs((double)(-b - sq_val)/(2*a));
            cout<<boost::math::lcm(num1, num2)<<endl;
            return;
        }
        // cout<<<<endl;
        return;
    }
    else if(d == 0){
        cout<<((double)(-b + sq_val)/(2*a));
        return;
    }
    else {
        cout<<-1<<endl;
        return;
    }
}

int32_t main() {
	int T;
	cin>>T;
	while(T--){
	    solve();
	}
	return 0;
}

// https://www.codechef.com/START24B/problems/DIVREC

// Alice is teaching Bob maths via a game called N-guesser.

// Alice has a positive integer N which Bob needs to guess. She gives him two pieces of information with which to do this:

// A positive integer X, which denotes the sum of divisors of N.
// Two positive integers A and B, which denote that the sum of reciprocals of divisors of N is A/B.
// Bob either needs to guess N or tell that no such number exists.

// It can be shown that if a valid N exists, it is unique.

// Input Format
// The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
// Each test case consists of a single line of input, containing three space-separated integers X,A,B.
// Output Format
// For each test case, output a new line containing the answer — Alice's number N, or −1 if no such number exists.

// Constraints
// 1≤T≤1000
// 1≤X≤109
// 1≤A,B≤109
// gcd(A,B)=1
// Sample Input 1 
// 2
// 4 4 3
// 4 1 1
// Sample Output 1 
// 3
// -1
// Explanation
// Test case 1: The divisors of 3 are 1 and 3. Their sum is 4 and the sum of their reciprocals is 4/3.

// Test case 2: It can be proved that no positive integer N exists whose divisors sum to 4 and reciprocals of divisors sum to 1.