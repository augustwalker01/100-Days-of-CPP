#include <bits/stdc++.h>
 
using namespace std;
 
// Function to find the kth digit
// from last in an integer n
void kthDigitFromLast(int n, int k)
{
 
    // If k is less than equal to 0
    if (k <= 0) {
        cout << -1 << endl;
        return;
    }
 
    // Convert integer into string
    string temp = to_string(n);
 
    // If k is greater than length of the
    // string temp
    if (k > temp.length()) {
        cout << -1 << endl;
    }
    // Print the k digit from last
    else {
        cout << temp[temp.length() - k] - '0';
    }
}
 
// Driver code
int main()
{
    // Given Input
    int n = 2354;
    int k = 2;
 
    // Function call
    kthDigitFromLast(n, k);
}