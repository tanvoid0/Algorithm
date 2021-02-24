// accepted
// runtime 0.015
// memory 120kb
#include <stdio.h>
int main() {
	freopen("1264.in.txt", "r", stdin);
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a*(b+1));
	return 0;
}

// in c++ 0.001 412 KB
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int M, N;
// 	cin >> N >> M;
// 	cout << (N * (M+1)) << endl;
// 	return 0;
// }

