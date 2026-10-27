#include <iostream>
#include <string>
using namespace std;
template <class T>
T getCriticalHit(T hitA, T hitB)
{
    if (hitA > hitB)
    {
        return hitA;
    }
    else
    {
        return hitB;
    }
}
template <class T1, class T2>
void logStrike(T1 entityName, T2 damageValue)
{
    cout << entityName << " landed a critical strike for " << damageValue << " damage!\n"
         << endl;
}
int main()
{
    cout << endl;
    int maxIntDamage = getCriticalHit(150, 200);
    logStrike("Goku", maxIntDamage);

    float maxFloatDamage = getCriticalHit(88.5f, 92.4f);
    logStrike("Vegeta", maxFloatDamage);

    return 0;
}