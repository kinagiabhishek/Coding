#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int f[31];
    int fib(int N) {
        f[0]=0;
        f[1]=1;
        for(int i=2;i<=N;++i)
            f[i]=f[i-1]+f[i-2];
        return f[N];
    }
};