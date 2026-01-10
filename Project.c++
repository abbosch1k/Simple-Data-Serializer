
#include <iostream>
#include <filesystem>
using namespace std;

int main() {
    if (filesystem::exists("temp.txt"))
        filesystem::remove("temp.txt");
    cout << "Cleaned\n";
}
