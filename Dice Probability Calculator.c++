#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int trials=10000, count=0;
    for(int i=0;i<trials;i++) {
        int d1=rand()%6+1, d2=rand()%6+1;
        if (d1+d2==7) count++;
    }
    cout << "Probability of rolling 7 ≈ " 
         << (count*100.0/trials) << "%" << endl;
    return 0;
}
