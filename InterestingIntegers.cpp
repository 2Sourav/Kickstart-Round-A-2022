#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;
#define pb push_back
#define mod 1000000007
#define ll          long long
#define endl        '\n'
#define vi          vector<int>

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
void solve(int k) {
    int a, b, c = 0; 
    cin >> a >> b;
        cout << "Case #" << k << ":"
         << " ";
         /*vector<int> odd;
    vector<int> even;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        odd.push_back(a[i]);
      } else {
        even.push_back(a[i]);
      }
    }*/
    for(int i = a; i <= b; i++) {
        int copy = i, product_sum = 1, s = 0;
        while(copy) 
        {
            /*if(st.empty()){
            if(hashed[b[i]] != i) ans++;
            st.insert(hashed[b[i]]);
            continue;
        }
       
        auto it = st.order_of_key(hashed[b[i]]);
        it = st.size() - it;
        if((hashed[b[i]] + it) % n != i) ans++;*/
            product_sum *= copy % 10; 
            s += copy % 10;
            //copy=copy*10;
            copy /= 10;
        }
        /*set<int> s;
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
        if(product_sum % s == 0) 
        c++;
    }

    cout << c << endl;
}
int main()
{
   ll t, k = 1;
   cin >> t;
   while (k <= t)
   {
      solve(k++);
   }
}

//This gives partial points for the problem