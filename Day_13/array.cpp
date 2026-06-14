#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers to store in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"' '";
    }

   return 0;
}