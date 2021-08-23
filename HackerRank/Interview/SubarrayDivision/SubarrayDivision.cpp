#include <bits/stdc++.h>

using namespace std;

int n;
int s[101];
int d, m;
int cnt;

void read_case() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    cin >> d >> m;
}

void print_case(){
    // cout << n << endl;
    // for(int i=0; i<n; i++){
    //     cout << s[i] << " ";
    // }
    // cout << d << " " << m;
    cout << cnt << endl;
}

void solve(int i, int j, int sum){
    if(i > n) return;
    if(j > m) return;
    
    if(j < m) solve(i+1, j+1, sum+s[i]);
    if(j == m){
        if(sum+s[i] == d){
            cnt++;
            return;
        }
    } else{
        if(sum+s[i] > d) solve(i+1, j, sum);
        else solve(i+1, j+1, sum+s[i]);
    }
    
}

void solve_case(){
    solve(0, 1, 0);
}

int main()
{
    read_case();
    print_case();
    return 0;
}