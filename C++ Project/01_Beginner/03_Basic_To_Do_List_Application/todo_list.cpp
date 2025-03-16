#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to hold task details
struct Task {
    string description;
    bool completed;
};

// Function to display menu
void showMenu() {
    cout << "\n===== To-Do List Application =====\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Mark Task as Completed\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

// Function to add a task
void addTask(vector<Task> &tasks) {
    Task newTask;
    cout << "Enter task description: ";
    cin.ignore();
    getline(cin, newTask.description);
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!\n";
}

// Function to display all tasks
void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\n===== To-Do List =====\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << (tasks[i].completed ? "[✓] " : "[ ] ") << tasks[i].description << "\n";
    }
}

// Function to delete a task
void deleteTask(vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks to delete.\n";
        return;
    }

    int taskIndex;
    cout << "Enter task number to delete: ";
    cin >> taskIndex;

    if (taskIndex < 1 || taskIndex > tasks.size()) {
        cout << "Invalid task number!\n";
    } else {
        tasks.erase(tasks.begin() + (taskIndex - 1));
        cout << "Task deleted successfully!\n";
    }
}

// Function to mark a task as completed
void markCompleted(vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks available to mark.\n";
        return;
    }

    int taskIndex;
    cout << "Enter task number to mark as completed: ";
    cin >> taskIndex;

    if (taskIndex < 1 || taskIndex > tasks.size()) {
        cout << "Invalid task number!\n";
    } else {
        tasks[taskIndex - 1].completed = true;
        cout << "Task marked as completed!\n";
    }
}

// Main function
int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: viewTasks(tasks); break;
            case 3: deleteTask(tasks); break;
            case 4: markCompleted(tasks); break;
            case 5: cout << "Exiting application. Goodbye!\n"; return 0;
            default: cout << "Invalid choice. Please try again.\n";
        }
    }
}