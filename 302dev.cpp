#include<bits/stdc++.h>
#define llu unsigned long long
#define ll long long

using namespace std;

int main()
{
    int test,n,k;
    llu sum=0;
    scanf("%d",&test);

    for(int i=1;i<=test;i++)
    {
        sum=0;
        ll res1,res2;
        scanf("%d",&n);
        for(k=1;sum<n;k++)
                sum+=k;
        k--;
        if(k%2==1){
            sum-=k;
                for(ll l=k,j=1;l>=1;l--,j++){
                    sum++;
                    if(sum==n) {
                            res1=l,res2=j;break;
                    }
                }
        }
        else{
            sum-=k;
            for(ll j=1,l=k;j<=k;j++,l--){
                sum++;
                if(sum==n) {
                        res1=j,res2=l;break;
                }
            }
        }
        printf("TERM %d IS %lld/%lld\n",n,res1,res2);
    }
    return 0;
}
