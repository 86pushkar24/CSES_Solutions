#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long r, c;
        cin >> r >> c;
        
        long long maxrc = max(r, c);
        long long ans = (maxrc - 1) * (maxrc - 1);
        
        if (maxrc % 2 == 1) {
            ans += (c + (maxrc - r));
        } else {
            ans += (r + (maxrc - c));
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}
