#include <iostream>
using namespace std;
 
int main()
{
    string str;
    cin>>str;
 
    for (int i = 0, len = str.size(); i < len; i++)
    {
        // check whether parsing character is punctuation or not
        if (ispunct(str[i]))
        {
            str.erase(i--, 1);
            len = str.size();
        }
    }
     
    // print string without punctuation
    cout << str;
    return 0;
}