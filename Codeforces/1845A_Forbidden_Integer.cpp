#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k, x;;
        cin>>n>>k>>x;
        
        if(k==1){
            cout<<"NO"<<endl;
        } else if(x!=1){
            cout<<"YES"<<endl<<n<<endl;
            for(int i=0; i<n; i++){
                cout<<1<<" ";
            } cout<<endl;
        } else{
            if(n%2==0){
                cout<<"YES"<<endl<<n/2<<endl;
                for(int i=0; i*2<n; i++){
                    cout<<2<<" ";
                } cout<<endl;
            } else{
                if(k==2){
                    cout<<"NO"<<endl;
                } else{
                    cout<<"YES"<<endl<<1+(n-3)/2<<endl<<3<<" ";
                    for(int i=0; i<(n-3)/2; i++){
                        cout<<2<<" ";
                    } cout<<endl;
                }
            }
        }
    }

    return 0;
}