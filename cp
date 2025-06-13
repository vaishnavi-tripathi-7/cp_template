#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// FUNS
#define NO_of_Digit(n) ((ll)log10(n) + 1)
#define NO_of_Bit(n) ((ll)log2(n) + 1)

// COMMON FUNS
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

// MAIN SOLUTION 



#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) {
        int n , x; 
        cin >> n >> x;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        
        
        
        
        cout << ans << '\n';
    }
    return 0;
}


