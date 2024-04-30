#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

signed main(void)
{
    

    // write code here
    long long n=5;
   // cin >> n;

    long long fact = 1;
    while(n<=70){
    auto start = high_resolution_clock::now();

    for (long long  i = 1; i <= n; ++i)
    {
        fact = fact * i;
    }
    cout << fact<<"   "<<n << endl;
    fact=1;

    auto end = high_resolution_clock::now();
    cout << duration<double, milli>(end - start).count() << "ms" << '\n';
    n=n+5;
    }
return 0;
}
