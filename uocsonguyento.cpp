#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(n%2==0){
            n/=2;
            cout<<2<<" ";
        }
        for(int i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
            cout<<i<<" ";
            n/=i;
            }
        }
        if(n==1) cout<<endl;
        if(n>1) cout<<n<<endl; 
    }
}
