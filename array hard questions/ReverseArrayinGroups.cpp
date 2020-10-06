#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ; 
    while ( t--){ 
    
        int n , k ; 
        cin >> n >>k ; 
        int a[n];
        for ( int i = 0 ; i < n ; i++){ 
        
            cin >> a[i];
        }
        for ( int i = 0 ; i < n ; i+=k){ 
            int l = i;
            int r = min ( i+k-1 , n-1); // k < n or k > n or k = n all cases to be handled
            while ( l <r){ 
                swap ( a[l++],a[r--]);
              
            }
        }
        for ( int i = 0 ; i <n ; i++){ 
            cout <<a[i]<<" ";
        }
    
    cout <<endl;
    }
	return 0;
}