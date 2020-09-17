#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int L,N,W,H;
    cin >> L;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> W;
        cin >> H;
        if(W < L || H < L) {
            cout << "UPLOAD ANOTHER\n";
        }
        else if(W == H){
            cout << "ACCEPTED\n";
        }
        else {
            cout << "CROP IT\n";
        }
    }

        return 0;
}
