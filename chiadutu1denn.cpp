#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long N,K;
        cin>>N>>K;
        long long  sum=0;
        for(long long i=1;i<=N;i++){
            sum+=i%K;
        }
        cout<<sum<<endl;
    }
}