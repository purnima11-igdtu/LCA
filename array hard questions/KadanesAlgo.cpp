#include <iostream>
#include<climits>
using namespace std;
int subarray( int* arr, int n ){ 
 
    int curr= 0 , max = INT_MIN ; 
    for ( int i = 0 ; i <n ; i++) {
     
        curr = curr+arr[i];
        if ( curr > max) {
            max = curr;
        }
        if (curr<0){ 
        
            curr = 0;
        }
    }
    return max; 
}

int main() {
	int t ; 
	cin >>t ; 
	while (t--){ 
	
	   int n ; 
	   cin >> n ; 
	   int arr[n]; 
	   for ( int i = 0 ; i < n ; i ++){ 
	    cin>>arr[i];
	   }
	   cout <<subarray(arr,n)<<endl;
	   
	}
	return 0;
}