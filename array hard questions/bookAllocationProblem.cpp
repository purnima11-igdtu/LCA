#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

bool isvalid (ll arr[], ll n , ll m , ll ans){ 

    int student = 1 ; 
    ll curr_pages = 0 ; 
    for ( int i = 0 ; i < n ; i++){ 
    
        if (curr_pages +arr[i]>ans){ 
        
            curr_pages = arr[i];
            student++;
            if (student > m ){ 
            
                return false;
            }
        }
        else { 
        
            curr_pages += arr[i];
        
        }
    }
    return true;
}

ll allocate(ll arr[], ll n , ll m){ 
    if ( n < m ){ 
    
        return -1;
    }
    ll s=0;
    ll e=0;
    ll pages =0 ;
    for ( int i = 0 ; i < n ; i++){ 
    
        pages += arr[i];
        s = max(s,arr[i]);
    }
    e = pages;
    int ans = s;
    while (s<=e){ 
    
        ll mid = (s+e)/2;
        if (isvalid(arr,n,m,mid)){ 
        
            ans = mid;
            e = mid-1;
        }
        else { 
        
            s = mid +1;
        }
    }
    return ans;
}


int main() {
	int t ; 
	cin >> t ;
	while ( t--){ 
	 ll n; 
	 cin >>n;
	 ll m ; 
	 ll arr[1000005];
	 for ( int i = 0 ; i < n ; i++){ 
	 
	     cin >>arr[i];
	 }
	 cin >>m;
	 cout <<allocate(arr,n,m)<<endl;
	    
	}
}
