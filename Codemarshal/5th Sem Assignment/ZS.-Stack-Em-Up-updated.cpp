// stack::push/pop
#include <iostream>       // std::cout
#include <stack>          // std::stack
//#inclu
using namespace std;

int main ()
{
	stack<int> mystack;

  	int T;
  	cin >> T;
  	for(int i=1; i<=T; i++){
	  	int N;
	  	int n = 0;
	  	cin >> N;
	  	int Q;
	  	cin >> Q;
	  	while(Q--){
	  		char p;
	  		cin >> p;
	  		if(p == 'P'){
	  			int x;
				cin >> x;
				if(n>=N){
					cout << "Overflow!" << endl;
				}
				else{
					mystack.push(x);
					n++;
				}
			}
			else if(p == 'R'){
				if(n== 0){
					cout << "No plates in stack!" << endl;
				}
				else{
					mystack.pop();
					n--;
				}
			}
			else if(p == 'S'){
				if(mystack.empty()){
					cout << "No plates in stack!" << endl;
				}
				else{
					stack<int> printstack = mystack;
					while (!printstack.empty())
	  				{
	     				cout << printstack.top();
	     				printstack.pop();
	     				if(!printstack.empty()){
	     					cout << " ";
						}
	  				}
	  				cout << endl;
				}

			}

		}
  	}

/*
  for (int i=0; i<5; ++i) mystack.push(i);

  cout << "Popping out elements...";
  while (!mystack.empty())
  {
     cout << ' ' << mystack.top();
     mystack.pop();
  }
  cout << '\n';
*/
  return 0;
}
