#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>

using namespace std;

int main(void)
{
    int T;
    bool x;
    string word1,word2;
    cin >> T;

    for(int i=0; i < T; i++) {
        cin >> word1 >> word2;
        if(word1 == word2)
            cout << "Caso #" << i+1 << ": De novo!" << endl;

        else if(word1 == "tesoura" && word2 == "papel")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "papel" && word2 == "tesoura")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;

        else if(word1 == "papel" && word2 == "pedra")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "pedra" && word2 == "papel")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;

        else if(word1 == "pedra" && word2 == "lagarto")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "lagarto" && word2 == "pedra")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;

        else if(word1 == "lagarto" && word2 == "Spock")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "Spock" && word2 == "lagarto")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;

        else if(word1 == "Spock" && word2 == "tesoura")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "tesoura" && word2 == "Spock")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;

        else if(word1 == "tesoura" && word2 == "lagarto")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "lagarto" && word2 == "tesoura")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;

        else if(word1 == "lagarto" && word2 == "papel")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "papel" && word2 == "lagarto")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;

        else if(word1 == "papel" && word2 == "Spock")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "Spock" && word2 == "papel")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;

        else if(word1 == "Spock" && word2 == "pedra")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "pedra" && word2 == "Spock")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;

        else if(word1 == "pedra" && word2 == "tesoura")
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
        else if(word1 == "tesoura" && word2 == "pedra")
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
    }

    return 0;
}
