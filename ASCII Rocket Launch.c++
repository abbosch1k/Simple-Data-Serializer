#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    for (int i=5;i>=1;i--) {
        cout << "Launching in: " << i << endl;
        sleep(1);
    }
    cout << "🚀 Rocket Launched!" << endl;
    return 0;
}
