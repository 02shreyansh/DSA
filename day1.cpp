// number of 1's in a number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
   
    int ans=0;
    while(n!=0){
        int bit=n&1;
        ans+=bit;
        n=n>>1;//right shift

    }
    cout<<"number of 1's bit in "<<n<<" is: "<<ans;


}