#include<iostream>
using namespace std;

unsigned long zof(unsigned long n){
        unsigned long ans=0;
        while(n>0){
                ans+=n/5;
                n/=5;
        }
        return ans;
}

int main(){
        int n;
        cin>>n;
        unsigned long temp;
        for(int i=0;i<n;++i){
                cin >> temp;
                cout<<zof(temp)<<endl;
        }
        return 0;
}
