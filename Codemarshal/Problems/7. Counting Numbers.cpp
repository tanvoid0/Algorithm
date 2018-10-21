#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    cin >> T;
    for(int t=1; t<=T; t++) {
        int cnt[101] = {0}, tmp, n;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> tmp;
            cnt[tmp]++;
        }
        int high =0, mark;
        for(int i=0; i<=100; i++) {
            if(cnt[i] >= high) {
                high = cnt[i];
                mark = i;
        }

        }
       cout << "Case " << t << ": " << mark << " " << high << endl;

    }

    return 0;
}
