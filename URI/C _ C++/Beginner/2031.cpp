//compilation error

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s1,s2;
	int N;

	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> s1;
		cin >> s2;
		if(s1 == "ataque" && s2 == "pedra")
			cout << "Jogador 1 venceu" << endl;
		else if (s2 == "ataque" && s1 == "pedra")
			cout << "Jogador 2 venceu" << endl;
		else if(s1 == "pedra" && s2 == "papel")
			cout << "Jogador 1 venceu" << endl;
		else if(s1== "papel" && s2 == "pedra")
			cout << "Jogador 2 venceu" << endl;
		else if(s1 == "ataque" && s2 == "papel")
			cout << "Jogador 1 venceu" << endl;
		else if(s2 == "ataque" && s1 == "papel")
			cout << "Jogador 2 venceu" << endl;
		else if(s1 == "papel" && s2 == "papel")
			cout << "Ambos venceram" << endl;
		else if(s1 == "pedra" && s2 == "pedra")
			cout << "Sem ganhador" << endl;
		else if(s1 == "ataque" && s2 == "ataque")
			cout << "Aniquilacao mutua" << endl;
	}

	return 0;
}


