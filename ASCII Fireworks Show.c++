#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

int main() {
    srand(time(0));
    for (int i=0; i<20; i++) {
        for (int j=0; j<50; j++) {
            cout << (rand()%10==0 ? "*" : " ");
        }
        cout << endl;
        usleep(100000);
    }
    cout << "🎆 Fireworks End 🎆" << endl;
    return 0;
}
