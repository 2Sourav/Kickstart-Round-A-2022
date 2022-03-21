#include<bits/stdc++.h>
using namespace std;
#define int long long int
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
void solve() {
    string s; cin >> s;
    int ans=0;

    for(int i=0;i<s.size();i++)
    {
          ans+=(s[i]-'0');
      }
    int v=0;
    /*vector<int> xs;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      xs.push_back(a[i][j]);
    }
  }
  */
    while(v*9<ans)
    {
        v++;
    }
    int val=(v)*9;
    //cout<<val<<endl;
    bool f=false;
    int req=val-ans;
    int i=0;

    if(req==0)
    {
        cout<<(s[0]-'0')<<req;
        i=1;
        /*for (int i = 0; i < n; i++) {
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
        while(i<s.size())
        {
            cout<<(s[i]-'0');
            i++;
        }
        cout<<endl;
    }
    else
    {
        while(i<s.size())
        {
            /* for(int i = 0; i < n; i++){
        if(st.empty()){
            if(hashed[b[i]] != i) ans++;
            st.insert(hashed[b[i]]);
            continue;
        }
       
        auto it = st.order_of_key(hashed[b[i]]);
        it = st.size() - it;
        if((hashed[b[i]] + it) % n != i) ans++;
       
        st.insert(hashed[b[i]]);
    }*/
            if(req<(s[i]-'0') && !f)
            {
                cout<<req;
                //f=false;
                f=true;
            }
            else
            {
                /*if (a[i] % 2 == 1) {
        odd.push_back(a[i]);
      } else {
        even.push_back(a[i]);
      }*/
                cout<<(s[i]-'0');
                i++;
            }
        }
        /*vector<int> w(n);
  for (int i = 0; i < n; i++) {
    w[i] = a[i][0];
    a[i].erase(a[i].begin());
  }
  vector<int> xs;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      xs.push_back(a[i][j]);
    }
  }*/
        if(!f)
        {
            cout<<req;
        }
        
        cout<<endl;
    }
}

int32_t main() {
    int t = 1; cin >> t; 
    for(int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        solve();
    } return 0;
}