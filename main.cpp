#include <iostream>

using namespace std;

int main()
{
    int latas, copos, casos, cont = 0, quebrado = 0;
    cin >> casos;
    while (cont < casos){
        cin >> latas;
        cin >> copos;
        if (latas > copos){
            quebrado = quebrado + copos;
        }
        cont++;
    }
    cout << quebrado <<endl;
    return 0;
}
