#include <iostream>
using namespace std;

int main(void)
{
    int grenais,inter,gremio,cg=0,ci=0,cg2=0,ce=0,i;

    do {

        cin >> inter >> gremio;
        if(inter>gremio)
            ci++;
        else if(gremio>inter)
            cg2++;
        else if(inter==gremio)
            ce++;
        cg++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> i;
    } while(i==1);

    cout << cg << " grenais" << endl;
    cout << "Inter:" << ci << endl;
    cout << "Gremio:" << cg2 << endl;
    cout << "Empates:" << ce << endl;
    cout << "Inter venceu mais" << endl;
}
