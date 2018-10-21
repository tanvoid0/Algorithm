#include <iostream>
#include <vector>

using namespace std;


int main(){
	int T;
	
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int arr[n], a[n];
		
		// Scan
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		vector<int> vec5;
		vector<int> vec3;
		vector<int> vec2
		// divide
		for(int i=0; i<n; i++){
			if(arr[i] % 5 == 0){
				vec5.push_back(arr[i]);
			}
			else if(arr[i] % 3 == 0){
				vec3.push_back(arr[i]);
			}
			else if(arr[i] % 2 == 0){
				vec2.push_back(arr[i]);
			}
			else if(arr[i] % 1 == 0){
				vec1.push_back(arr[i]);
			}
		}
		
		sort(vec5.begin(), vec5.end(), greate<>());
		sort(vec3.begin(), vec3.end(), greate<>());
		sort(vec2.begin(), vec2.end(), greate<>());
		sort(vec1.begin(), vec1.end(), greate<>());
		
		for(int i=0; i < vec5.size(); i++){
			cout << vec5[i];
			if(i != vec5.size()-1){
				cout << " ";
			}
		}
		for(int i=0; i < vec3.size(); i++){
			cout << vec3[i];
			if(i != vec3.size()-1){
				cout << " ";
			}
		}
		for(int i=0; i < vec2.size(); i++){
			cout << vec2[i];
			if(i != vec2.size()-1){
				cout << " ";
			}
		}
		for(int i=0; i < vec1.size(); i++){
			cout << vec1[i];
			if(i != vec1.size()-1){
				cout << " ";
			}
		}
		cout << endl;
	}
}
