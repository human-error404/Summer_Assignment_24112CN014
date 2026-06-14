#include<iostream>
using namespace std;
int main()
{
    int n,num,found=0;
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
    cout<<"write the number to search in the array:";
    cin>>num;
    
    for(int i=0;i<n;i++)
    {
        float max_e=arr[i];
        if(max_e==num)
        {
            found++;
        }    
    }
    cout<<"The element with value "<<num<<" occurs "<<found<<" times.";

   return 0;
}