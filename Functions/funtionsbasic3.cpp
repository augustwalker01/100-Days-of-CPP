#include <iostream>
using namespace std;
int max(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()


{
    int x, y, z, p;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the integers" << endl;
        cin >> x >> y >> z;
        p = max(x, y, z);
        cout << "The maximum number is " << p << endl;
    }
    

    return 0;
}