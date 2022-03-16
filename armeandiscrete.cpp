#include<iostream>
using namespace std;
int main()
{
    int n, i;
    float xarr[50], armean,farr[50], fsum=0,xfsum=0;
    cout<<"*******************************************************";
    cout<<"\nEnter Total No. of Elements = \t";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>xarr[i];  
    }
    cout<<"\nEnter "<<n<<" Number of Frequency Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>farr[i];
        fsum = fsum+farr[i];
    }
    cout<<"\nSum of Frequency Elements ="<<fsum<<"\n";
    for(i=0; i<n; i++)
    {
        xfsum=xfsum+(xarr[i]*farr[i]);
        armean=xfsum/fsum;
    }
    cout<<"*******************************************************";
    cout<<"\nArithmetic Mean is Found to be = "<<armean<<"\n";
    cout<<"*******************************************************";
    return 0;
}