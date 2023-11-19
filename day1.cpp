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

// decimal to binary number 
#include <iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;

    }
    return ans;
}
int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    int i=0;
   
    int ans=0;
    while(n!=0){
        int bit=n&1;
        ans+=(bit*power(10,i));
        i++;
        n=n>>1;
        
    }
    cout<<"decimal to binary is: "<<ans;
    
}
