#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
	int T;
	cin>>T;
	while(T--) {
	    int N, K;
	    cin>>N>>K;
	    int arr[N];
	    int arr1[N];
	    int arr2[N];
	    for(int i=1; i<=N; i++){
	        arr[i] = i;
	       // arr1[i] = i;
	       // arr2[i] = i;
	    }
	    int alter = 0;
	    int rep = 0;
	    if(N  == 1){
	        cout<<1;
	    }
	    else if(N <= 0) {
	        cout<<0;
	    }
	    else if(N == 2){
	        cout<<1<<" "<<2;
	    }
	    else if(N == 4) {
	        if(K%2 == 0) {
	            cout<<1<<" "<<2<<" "<<3<<" "<<4;
	        }
	        else{
	            cout<<1<<" "<<3<<" "<<2<<" "<<4;
	        }
	    }
	    else{
            int pos = (N/2) + 1;
            rep = 1;
            int fw = pos - 1;
            int bw = N - pos;
            while (pos != 2) {
                if(fw % 2 == 0) {
                    pos = (fw/2)+1;
                    fw = pos - 1;
                    bw = N - pos;
                }
                else if(bw % 2 == 0) {
                    pos = fw + (bw/2) + 1;
                    fw = pos - 1;
                    bw = N - pos;
                }
                rep++;
            }
            int arr3[N];
            for(int i=1; i<=N; i++) {
                arr3[i] = i;
            }
            arr[1] = 1;
            arr[N] = N;
            int sum = N+1;
            for(int i=2; i<=N/2; i++) {
                int itr = K%rep;
                pos = i;
                fw = pos - 1;
                bw = N - pos;
                while(itr) {
                    itr--;
                    if(fw % 2 == 0) {
                        // pos = i;
                        pos = (fw/2) + 1;
                        fw = pos - 1;
                        bw = N - pos;
                    }
                    else if(bw % 2 == 0) {
                        pos = fw + (bw/2) + 1;
                        fw = pos - 1;
                        bw = N - pos;
                    }
                }
                arr3[pos] = arr[i];
                arr3[N-pos+1] = sum - arr[i];
            }
            for(int i=1; i<=N; i++) {
                cout<<arr3[i]<<" ";
            }
	    }
	    cout<<endl;
	}
}

//https://www.codechef.com/JAN221C/problems/RIFFLES
// Sample Input 1 
// 3
// 6 1
// 8 2
// 14 452
// Sample Output 1 
// 1 3 5 2 4 6
// 1 5 2 6 3 7 4 8
// 1 10 6 2 11 7 3 12 8 4 13 9 5 14
// Explanation
// Test case 1: Performing the riffle on σ6=(1,2,3,4,5,6) once results in (1,3,5,2,4,6), by definition.

// Test case 2: The process goes as follows:

// Performing the riffle on (1,2,3,4,5,6,7,8) results in (1,3,5,7,2,4,6,8)
// Performing the riffle on (1,3,5,7,2,4,6,8) results in  (1,5,2,6,3,7,4,8)