#include <bits/stdc++.h>
using namespace std;

int main()
{
    double resultado, x, y, z;
    cin>>x>>y>>z;
        resultado = (2* y +z);
        resultado = pow(resultado, 2.8);
        resultado = resultado - z;
        resultado = resultado / (x + y - (x/z));
        cout<<fixed<<setprecision(6)<<resultado;

    return 0;
}
