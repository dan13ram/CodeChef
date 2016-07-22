#include<iostream>
#include<iomanip>

using namespace std;
 
int main(){
    float bal;
    int wd;
    cin>>wd>>bal;
    
    if(wd<bal && wd%5==0){
        bal = bal - 0.50 - (float)wd;
    }
    cout<<std::fixed<<std::setprecision(2)<<bal<<endl;
    return 0;
}  
