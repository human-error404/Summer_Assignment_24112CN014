#include<iostream>
#include<string>
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
    float max_e=arr[0],min_e=arr[0];
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
            max_e=arr[i];
        }
        if(min_e>arr[i])
        {
            min_e=arr[i];
        }
    }
    cout<<"Largest element is: "<<max_e<<endl;
    cout<<"Smallest element is: "<<min_e;

   return 0;
}