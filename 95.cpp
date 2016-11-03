#include<bits/stdc++.h>
#define I int
#define F float
#define ll long long
#define llu unsigned long long
#define inf INT_MAX
#define ignore cin.ignore()
#define vii vector<I>
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
    I test;

    while(1){
      vii v2;
      stack<I>stk;
      I c=INT(),val,pos=1;
      if(!c) return 0;

      for(I i=1;i<=c;i++){
          val=INT();
          if(pos==val) v2.pb(val),pos++;
          else stk.push(val);
          if(!stk.empty() && stk.top()==pos){
            while(!stk.empty() && stk.top()==pos){
                v2.pb(pos),pos++;stk.pop();
            }
          }
      }
      if(stk.empty()) printf("yes\n");
      else printf("no\n");
    }
    return 0;
}


