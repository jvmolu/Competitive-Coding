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

int main()
{
	fast;
	int test=1;
	cin>>test;
	while(test--)
    {
		string s;
		cin>>s;
		bool ans = false;
		unordered_map<char,int> a;
		for(auto i:s)
            a[i]++,a[i]>1?ans=true:0;
        if(ans)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
	return 0;

}
