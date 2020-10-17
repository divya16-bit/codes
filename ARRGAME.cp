#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>
//what about above line
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
    int count=0;
    int count2=0;
     int temp=0;
    int total=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
        temp++;
        total++;
        }
        else
        {
            if(temp>count)  
                {   cnt2=max(cnt2,cnt);
                    cnt=temp;
                } 
            else if(temp>count2)
                count2=temp;
            temp=0;
        }
    }
     string res="";
    if(count%2==0)
    res="No";

    else {
        if(count==1&&total>1)
        res="No";
        else if(count2>(count/2))
        res="No";
        else res="Yes";
    }
cout<<res<<"\n";
}
    return 0;
}
//aditya ranaut- phoenix_aditya
map<int,int> counter;

void solve()
{
    counter.clear();
    int n;
    cin>>n;
    int arr[n];
    
    int maxzero=0;
    
    int tempzero=0;
    int zerocounter=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {tempzero++; zerocounter++;}
        else
        {
            maxzero=max(tempzero,maxzero);
            if(!counter[tempzero])
                counter[tempzero]=1;
            else
                counter[tempzero]++;
            tempzero=0;
        }
    }
        maxzero=max(tempzero,maxzero);
        tempzero=0;
    if(maxzero==1 && zerocounter==1)
        cout<<"Yes\n";
    else if(maxzero>2 && maxzero%2!=0)
    {
        int a= maxzero/2+1;
        counter[maxzero]-=1;
        for(int i=a;i<=maxzero;i++)
            if(counter[i]>0)
            {
                cout<<"No\n";
                return;
            }
        cout<<"Yes\n";
    }
    else
        cout<<"No\n";
}



int main()
{
    speed;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    wh(t)
     {solve();}
    
    return 0;
}
