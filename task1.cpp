#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    ll n;
    cin >> n;
    bool is_prime = true;
    for(int i=2;i*i<= n;i++){
      if(n%i ==0) {
        is_prime = false;
        break;
      }
    }
    cout << (is_prime?"YES":"NO");

    return 0;
}