#include <iostream>
#include <string>
using namespace std;
int main()
{
    string string;
    int index=0;
    int vow=0;
    int cons=0;
    cout<<"Give a string:";
    getline(cin,string);
    while(string[index]!='\0')
    {
        switch(string[index])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            vow++;
            break;
            default:
            cons++;
            break;


        }
        
        index++;
    }
    cout<<"The number of vowels are:"<<vow<<endl;
    cout<<"The number of constants are:"<<cons;
    return 0;

}