#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main(){
    int t; cin>>t;
    while(t--){ char arr[8][8];
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>arr[i][j];
            }
        }
string st="";
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(arr[i][j]!='.') st.push_back(arr[i][j]);
            }
        }
        cout<<st<<endl;
    }

    return 0;
}