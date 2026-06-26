#include<iostream>
using namespace std;
void selection(long long arr1[],int m)
{
   for(int i=0;i<=m-2;i++)
    {
        int min=i;
        for(int j=i;j<=m-1;j++)
        {
            if(arr1[j]<arr1[min])
            {
                min=j;
                
                
            }

        }
        swap(arr1[i],arr1[min]);
        
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
    selection(arr1,m);

}