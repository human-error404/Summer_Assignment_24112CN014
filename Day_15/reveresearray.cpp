#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the size of array:";
    cin>>n;
    float a[n];
    cout<<"Enter "<<n<<" numbers to store in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the array is:"<<endl;    
    for(int i=0;i<n;i++)
    {
        cout<<"'"<<a[i]<<"'";
    }
    cout<<endl;
    for(int i=0;i<n/2;i++)
    {
            swap(a[i],a[n-1-i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<"'"<<a[i]<<"'";
    }
}
