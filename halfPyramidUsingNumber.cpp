#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of terms."<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i>=j){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}