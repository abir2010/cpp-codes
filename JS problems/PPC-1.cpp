#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long common(long long a, long long b)
{
    long long n = gcd(a, b);

    long long result = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}

int main()
{
    long long a,b;
    cin >> a >> b;
    cout << common(a, b);
    return 0;
}