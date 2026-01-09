#include <iostream>
using namespace std;

int main() {
    cout << "You enter a haunted house... 👻" << endl;
    cout << "Do you go left or right? ";
    string choice;
    cin >> choice;
    if (choice == "left") cout << "A ghost scares you away!" << endl;
    else cout << "You find a hidden treasure!" << endl;
    return 0;
}
