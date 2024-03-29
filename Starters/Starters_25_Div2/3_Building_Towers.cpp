// https://www.codechef.com/START25B
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define mk make_pair
#define pb push_back

void solve() {
    int t, o;
    cin>>t>>o;
    int reached = 1;
    int op = 0;
    int pos = 0;
    int res = 0;
    int itr=1;
    while(itr <= t){
        itr <<= 1;
        op += 1;
    }
    if(itr > t){
        itr >>= 1;
        op -= 1;
    }
    
    if(itr != t){        
        op += 1;
        if(op > o){
            cout<<0<<endl;
            return;
        }
        else{
            cout<<(o - op)<<endl;
        }
    }
    else{
        if(op > o){
            cout<<0<<endl;
            return;
        }
        cout<<(o - op)<<endl;
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




// Building Towers Problem Code: TOWERTOP
// Chef is given a contract to build towers in Chefland which are made by stacking blocks one above the other. Initially, there is only 1 block in the inventory and no tower has been built. Chef follows the following 2 steps in each operation:

// Either build a new tower or update an existing tower that has been built in previous operations using any number of blocks currently present in the inventory. After this step, the size of the inventory reduces by the number of blocks used.
// Suppose the tower Chef updated or built has B blocks after the step, Chef gets to add B new blocks to the inventory as a reward.
// Find the maximum number of towers of height X that Chef can build in M operations.

// Note: Tower of height X means that the tower consists of X blocks placed one above the other.

// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case contains a single line of input, two space separated integers X,M.
// Output Format
// For each test case, output a single integer, the maximum number of towers that Chef can build.

// Constraints
// 1≤T≤100
// 1≤X≤109
// 0≤M≤1017
// Sample Input 1 
// 4
// 2 1
// 2 2
// 2 3
// 53 7
// Sample Output 1 
// 0
// 1
// 2
// 1
// Explanation
// Test Cases 1, 2 and 3:

// Operation 1:
// Remove 1 block from the inventory and build a new tower of height 1 after which the inventory becomes empty.
// Add 1 block to the inventory after which the inventory has only 1 block.
// Operation 2:
// Remove 1 block from the inventory and update the tower of height 1 to 1+1=2 after which the inventory becomes empty.
// Add 2 blocks to the inventory after which the inventory has only 2 blocks.
// Operation 3:
// Remove 2 blocks from the inventory and build a new tower of height 2 after which the inventory becomes empty.
// Add 2 blocks to the inventory after which the inventory has only 2 blocks.
// So after operation 1, there is no tower of height 2 built, after operation 2, there is a single tower of height 2 built and after operation 3, 2 towers of height 2 are built.

// Test Case 4:

// Operation 1:
// Remove 1 block from the inventory and build a new tower of height 1 after which the inventory becomes empty.
// Add 1 block to the inventory after which the inventory has only 1 block.
// Operation 2:
// Remove 1 block from the inventory and update the tower of height 1 to 1+1=2 after which the inventory becomes empty.
// Add 2 blocks to the inventory after which the inventory has only 2 blocks.
// Operation 3:
// Remove 2 blocks from the inventory and update the tower of height 2 to 2+2=4 after which the inventory becomes empty.
// Add 4 blocks to the inventory after which the inventory has only 4 blocks.
// Operation 4:
// Remove 4 blocks from the inventory and update the tower of height 4 to 4+4=8 after which the inventory becomes empty.
// Add 8 blocks to the inventory after which the inventory has only 8 blocks.
// Operation 5:
// Remove 8 blocks from the inventory and update the tower of height 8 to 8+8=16 after which the inventory becomes empty.
// Add 16 blocks to the inventory after which the inventory has only 16 blocks.
// Operation 6:
// Remove 16 blocks from the inventory and update the tower of height 16 to 16+16=32 after which the inventory becomes empty.
// Add 32 blocks to the inventory after which the inventory has only 32 blocks.
// Operation 7:
// Remove 21 blocks from the inventory and update the tower of height 32 to 32+21=53 after which the inventory has 32−21=11 blocks remaining.
// Add 53 blocks to the inventory after which the inventory has 53+11=64 blocks in total.
// So after 7th operation we are able to achieve one tower of height 53.