#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    float avg,sum=0;
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
        sum+=arr[i];
    }
    avg=sum/n;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<avg;

   return 0;
}