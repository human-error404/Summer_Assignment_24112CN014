#include <iostream>
#include <string>
using namespace std;
int main()
{
    char string[50];
    int index=0;
    cout<<"Give a string:";
    cin.getline(string,50);
    while(string[index]!='\0')
    {
        index++;
    }
    int start=0;
    int end=index-1;
   while(start<end)
   {
        swap(string[start],string[end]);
        start++;
        end--;
    }
    cout<<"The reversed string is:"<<string;
    return 0;

}