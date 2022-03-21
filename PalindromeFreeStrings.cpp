#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define vi vector <int>
#define vll vector <ll>
#define vvll vector <vll>
#define vbool vector <bool>
#define pii pair <int,int>
#define pll pair <ll,ll>
#define vpll vector <pll>
#define rep(i,a,n) for (int i=a;i<n;i++)
#define rrep(i,n,a) for (int i=n;i>=a;i--)
#define fill1(a,x) for (auto &it: a) it=x;
#define fill2(a,x) for (auto &v: a) { for (auto &it: v) it=x; }
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ff first
#define ss second
#define ins insert
#define YY cout<<"YES"
#define NN cout<<"NO"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define desc() greater <ll>()
#define endl "\n"   //not to be used in interactive problems
void answer()
{
    int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m + 1));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j + 1];
    }
    cin >> a[i][0];
  }
 
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    w[i] = a[i][0];
    a[i].erase(a[i].begin());
  }
  vector<int> xs;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      xs.push_back(a[i][j]);
    }
  }
  
}
void qsn()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        odd.push_back(a[i]);
      } else {
        even.push_back(a[i]);
      }
    }
   
}

void segment()
{
    int n, tt;
  cin >> n >> tt;
  vector<pair<int, int>> qs;
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(i);
  }
  for (int i = 0; i < tt; i++) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;
      cin >> x;
      --x;
      qs.emplace_back(x, -1);
    } 
}
}

void permutation(string &s, ll i, string &str, set <string> &st)
{
	if (i==s.length())
	{
		st.ins(str);
		return;
	}
	if (s[i]!='?')
	{
		str.pb(s[i]);
		permutation(s,i+1,str,st);
        /*str.pb('0');
		permutation(s,i+1,str,st);
		str.ppb();
		str.pb('1');
		permutation(s,i+1,str,st);*/
		str.ppb();
	}
	else
	{
        /*	st.ins(str);
		return;
	}
	if (s[i]!='?')
	{
		str.pb(s[i]);*/
		str.pb('0');
		permutation(s,i+1,str,st);
        /*str.pb(s[i]);
		permutation(s,i+1,str,st);
        str.pb('0');
		permutation(s,i+1,str,st);
		str.ppb();
		str.pb('1');*/
		str.ppb();
		str.pb('1');
        /*if (i==s.length())
	{
		st.ins(str);
		return;
	}*/
		permutation(s,i+1,str,st);
		str.ppb();
	}
}
void typical()
{
    int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m + 1));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j + 1];
    }
    cin >> a[i][0];
  }
 
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    w[i] = a[i][0];
    a[i].erase(a[i].begin());
  }
  vector<int> xs;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      xs.push_back(a[i][j]);
    }
  }
  
}
void solve()
{
	// brute force
	ll n; cin>>n;
	string s; cin>>s;
	set <string> st;
	string str;
    /*ector<vector<int>> a(n, vector<int>(m + 1));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j + 1];
    }
    cin >> a[i][0];
  }
 
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    w[i] = a[i][0];
    a[i].erase(a[i].begin());
  }*/
	permutation(s,0,str,st);
	// for (auto &it: st)
	// {
		// cerr<<it<<" -> "<<it.size()<<endl;
	// }
	for (auto &it: st)
	{
		// check for palindrome of length 5 and 6
		// 5 check
		ll n=it.length();
		bool f=1;
		for (ll i=0;i<=n-5 && f;i++)
		{
			if (it[i]==it[i+4] && it[i+1]==it[i+3])
             f=0;
		}
		// 6 check
		for (ll i=0;i<=n-6 && f;i++)
		{
         /*ll n=it.length();
		bool f=1;
		for (ll i=0;i<=n-5 && f;i++)
		{
			if (it[i]==it[i+4] && it[i+1]==it[i+3])
             f=0;
		}*/   
			if (it[i]==it[i+5] && it[i+1]==it[i+4] && it[i+2]==it[i+3]) f=0;
		}
		if (f) 
        {
             cout<<"POSSIBLE"; return; 
             }		
	}
    /*et<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(i);
  }
  for (int i = 0; i < tt; i++) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;
      cin >> x;
      --x;
      qs.emplace_back(x, -1);*/
	cout<<"IMPOSSIBLE";	
}

int main()
{
	
	int t=1;
	cin>>t;
	for (int test=1;test<=t;test++)
	{
		cout<<"Case #"<<test<<": ";
		solve();
		cout<<endl;
	}
	
	return 0;
}

//This gives only partial points for the problem