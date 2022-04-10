#include <iostream>
using namespace std;
int x, i, count = 0;
string prime(int x)
{
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return "prime";
    }
    else
        return "non prime";
}
int main()
{
    cout << "enter number" << endl;
    cin >> x;
    cout << prime(x);

    return 0;
}