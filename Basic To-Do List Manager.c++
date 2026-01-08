#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    while (true) {
        cout << "1. Add Task\n2. View Tasks\n3. Remove Task\n4. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter task: ";
                getline(cin, task);
                tasks.push_back(task);
                break;
            case 2:
                for (int i = 0; i < tasks.size(); i++)
                    cout << i + 1 << ". " << tasks[i] << "\n";
                break;
            case 3:
                int index;
                cout << "Enter task number to remove: ";
                cin >> index;
                if (index > 0 && index <= tasks.size())
                    tasks.erase(tasks.begin() + index - 1);
                break;
            case 4:
                return 0;
        }
    }
}
