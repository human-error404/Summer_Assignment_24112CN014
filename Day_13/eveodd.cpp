#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,even=0,odd=0,temp=1;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers to store in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    float eve=arr[0],o=arr[0];
    cout<<"the array is:"<<endl;    
    for(int i=0;i<n;i++)
    {
        cout<<"'"<<arr[i]<<"'";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<even<<" even numbers"<<endl;
    cout<<odd<<" odd numbers"<<endl;

   return 0;
}