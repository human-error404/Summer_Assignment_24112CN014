#include<iostream>
using namespace std;
void bubble(long long arr1[],int m)
{
   for(int i=m-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr1[j]<arr1[j+1])
            {
                swap(arr1[j],arr1[j+1]);
            }
        }
        
    }
    for(int i=0;i<m;i++)
    {
        cout<<"'"<<arr1[i]<<"'";
    }
    
   
}
int main()
{
    long long m;
    cout<<"Enter the size of array 1:";
    cin>>m;
    long long arr1[m];
    cout<<"Enter "<<m<<" numbers to store in array:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    bubble(arr1,m);

}