// sum of Even numbers  2+4+6.......+n

#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=2; i<=n; i+=2){
        sum = sum + i;
    }
    cout<<"Sum is: "<<sum<<endl;
}
