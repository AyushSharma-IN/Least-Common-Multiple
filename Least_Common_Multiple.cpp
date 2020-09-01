#include <iostream>
using namespace std;

long long GCD(long long& a, long long& b)
{
    long long d;

    if (b == 0) return a;
    else
        d = a % b;     
    return GCD(b, d);
}

long long LCM(long long& a, long long& b)
{   
    return (((a * b))/GCD(a, b));
}

int main()
{
    long long a, b;
    long long c;
    cin >> a;
    cin >> b;

    c = a*b;
    cout << LCM(a, b) << endl;
    
    return 0;
}