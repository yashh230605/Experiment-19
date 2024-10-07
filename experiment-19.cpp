#include <iostream>
#define MAX 5

using namespace std;

int stack[MAX];
int top = -1;

int main() {
    int choice, value, i;
    
    while(1) {
        // Display the menu options
        cout << "\nStack Operations Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        // Switch case to handle the operations
        switch(choice) {
            case 1: // Push
                if(top == MAX - 1) {
                    cout << "Stack Overflow! Cannot push more elements." << endl;
                } else {
                    cout << "Enter the value to push: ";
                    cin >> value;
                    stack[++top] = value;
                    cout << value << " pushed onto the stack." << endl;
                }
                break;

            case 2: // Pop
                if(top == -1) {
                    cout << "Stack Underflow! No elements to pop." << endl;
                } else {
                    cout << stack[top--] << " popped from the stack." << endl;
                }
                break;

            case 3: // Display
                if(top == -1) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack elements are: ";
                    for(i = top; i >= 0; i--) {
                        cout << stack[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 4: // Exit
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    }
    return 0;
}