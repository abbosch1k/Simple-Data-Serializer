#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    cout << "Loading: [";
    for (int i=0;i<50;i++) {
        cout << "#";
        cout.flush();
        usleep(50000);
    }
    cout << "] Done!" << endl;
    return 0;
}
