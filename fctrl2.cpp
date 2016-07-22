#include<iostream>
using namespace std;

int main(){
        unsigned long arr[101];
        unsigned long temp = 1;
        arr[0] = 1;
        for(int i = 1;i<=100;i++){
                temp*=i;
                arr[i]=temp;
        }

        int n,t;
        cin>>n;
        for(int i=0;i<n;++i){
                cin >> t;
                cout<<arr[t]<<endl;
        }
        return 0;
}
