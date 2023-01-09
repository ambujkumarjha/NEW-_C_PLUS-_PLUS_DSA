#include <iostream>
using namespace std;
int fact(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int n, r;
    cin >> n >> r;
    fact(n);
    fact(r);
    int ncr = (fact(n)) / (fact(r) * fact(n - r));
    cout << ncr << endl;
}
