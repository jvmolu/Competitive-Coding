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
	int n;
	cin>>n;
	vector<int> v[n];
	for(int i = 0;i<n;i++)
	{
	    string s;
	    getline(cin,s)
	    stringstream ss(s);
	    int x;
	    while(ss>>x)
            v[i].PB(x);
	}

	return 0;

}
