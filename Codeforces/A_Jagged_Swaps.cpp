#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
  
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        if(arr[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}