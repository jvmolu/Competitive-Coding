/************************************
 *	AUTHOR: 		Divyansh Gaba	*
 *	INSTITUTION: 	ASET, BIJWASAN	*
 ************************************/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

bool isArmstrong(int i)
{
    int t = i;
    int ans = 0;
    while(i)
    {
        ans += pow(i%10,3);
        i/=10;
    }
    if(t==ans)
        return true;
    return false;
}

int main()
{
	fast;
    int n1,n2;
    cin>>n1>>n2;
    for(int i = n1;i<=n2;i++)
    {
        if(isArmstrong(i))
            cout<<i<<" ";
    }
    cout<<endl;

	return 0;

}
