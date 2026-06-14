#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the size of array:";
    cin>>n;
    float arr[n];
    cout<<"Enter "<<n<<" numbers to store in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array is:"<<endl;    
    for(int i=0;i<n;i++)
    {
        cout<<"'"<<arr[i]<<"'";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"The value "<<arr[i]<<" at "<<" index "<<i<<" has a duplicate at indexes "<<j<<endl;
            }
        }
        
        
    }

   return 0;
}