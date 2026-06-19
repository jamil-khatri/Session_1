#include <iostream>
#include <vector>
using namespace std;

class Task {
public:
    string title;
    bool isDone;

    Task(string t) {
        title = t;
        isDone = false;
    }

    void markDone() {
        isDone = true;
    }

    void display() {
        cout << title;

        if(isDone)
            cout << " [DONE]";
        else
            cout << " [PENDING]";

        cout << endl;
    }
};

class TaskList {
private:
    vector<Task> tasks;

public:
    void addTask(string title) {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index) {
        if(index >= 0 && index < tasks.size())
            tasks[index].markDone();
    }

    void showTasks() {
        for(int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main() {
    TaskList list;

    list.addTask("Study OOP");
    list.addTask("Practice Coding");
    list.addTask("Submit Assignment");

    list.markTaskDone(1);

    list.showTasks();

    return 0;
}
