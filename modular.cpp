
#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
int64 modexp(int64 a,int64 e,int64 m){
    int64 r=1% m;
    a%=m;
    while(e){
        if(e&1) r=(__int128)r*a%m;
        a=(__int128)a*a%m;
        e>>=1;
    }
    return r;
}
int64 egcd(int64 a,int64 b,int64 &x,int64 &y){
    if(b==0){x=1;y=0;return a;}
    int64 x1,y1;
    int64 g=egcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}
int64 modinv(int64 a,int64 m){
    int64 x,y;
    int64 g=egcd(a,m,x,y);
    if(g!=1) throw runtime_error("no inv");
    x%=m;
    if(x<0) x+=m;
    return x;
}
int main(){
    cout<<modexp(3,200,1000000007)<<"
";
    cout<<modinv(3,11)<<"
";
    return 0;
}
