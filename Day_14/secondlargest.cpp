#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    float arr[n];
    cout<<"Enter "<<n<<" numbers to store in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    float max_e=INT_MIN,second=INT_MIN;
    cout<<"the array is:"<<endl;    
    for(int i=0;i<n;i++)
    {
        cout<<"'"<<arr[i]<<"'";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(max_e<arr[i])
        {
            second=max_e;
            max_e=arr[i];
        }
        else if(arr[i]>second&&arr[i]<max_e)
        {
            second=arr[i];
        }
    }
    cout<<"Second Largest element is: "<<second<<endl;

   return 0;
}