#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("output.txt");
    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;
    }

    cout << "Количество строк в файле: " << count << endl;
    return 0;
}
