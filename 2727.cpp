#include<bits/stdc++.h>
#define I int
#define F float
#define ll long long
#define llu unsigned long long
#define inf INT_MAX
#define ignore cin.ignore()
#define vi vector<I>
#define pb push_back
#define pair P
using namespace std;

///take input
I INT(){int n;scanf("%d",&n);return n;}
ll LL(){ll n;scanf("%I64d",&n);return n;}
llu LLU(){llu n;scanf("%I64d",&n);return n;}
F FLT(){F n;scanf("%f",&n);return n;}
string Line(){string n;getline(cin,n);return n;}
///following one is for add+=1
string str_add(string n)
{
    int carry=1;
    for(int i=0; i<n.length(); ++i)
    {
        int d=(n[i]-48+carry);
        d>9? carry=1:carry=0;
        d%=10,n[i]=d+48;
    }
    if(carry==1) n+='1';
    return n;
}

llu dp[5005];

int main()
{
    I test=INT(),g,m,val;

    while(test--)
    {
        //vi v1,v2;
        I gM=0,mM=0;
        g=INT(),m=INT();
        for(I i=1;i<=g;i++){
            val=INT();gM=max(val,gM);//v1.pb(val);
        }
        for(I i=1;i<=m;i++){
            val=INT();mM=max(mM,val);//v2.pb(val);
        }
        if(m==0 && g==0){
                printf("uncertain\n");continue;
        }
        /*sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int res=0;
        for(;;){
            if(v1.empty()) {res=1;break;}
            if(v2.empty()) {res=2;break;}
            if(v1[0]<v2[0]) v1.erase(v1.begin());
            else v2.erase(v2.begin());
        }*/
        if(gM<mM) printf("MechaGodzilla\n");
        else  printf("Godzilla\n");
    }

    return 0;
}


