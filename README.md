# Stack 
# Experiment 19 : - To study and implement Stack implementation using array.  Menu options - i) Push ii) Pop iii) Display iv) exit

## Aim: -
To execute and run a menu style code which has different stack operations without using the stack header file

## Theory: -

A stack is a linear data structure that follows the LIFO (Last In, First Out) principle. This means the last element added to the stack is the first one to be removed.

### Different operations of stack 
### **Basic Stack Operations**

1. **Push**:
   - Adds (inserts) an element to the **top** of the stack.
   - Example: If the stack is `[1, 2, 3]`, pushing `4` will make it `[1, 2, 3, 4]`.

2. **Pop**:
   - Removes (deletes) the **top** element from the stack.
   - Example: If the stack is `[1, 2, 3, 4]`, popping will remove `4` and leave `[1, 2, 3]`.

3. **Peek (or Top)**:
   - Returns the **top** element of the stack without removing it.
   - Example: In the stack `[1, 2, 3, 4]`, peek returns `4`.

4. **isEmpty**:
   - Checks if the stack is **empty**.
   - Example: If the stack is `[]`, it returns `true`, otherwise `false`.

5. **isFull** (in array-based stacks):
   - Checks if the stack has reached its **maximum capacity**.
   - Example: In a stack with a size limit of `5`, if the stack has `5` elements, it is full.
     
### **Advantages of Stack** 

1. **Function Calls (Recursion)**:
   - Manages function calls, especially for recursive functions.
  
2. **Expression Evaluation**:
   - Converts and evaluates infix, postfix, or prefix expressions in programming.
  
3. **Backtracking**:
   - Helps in algorithms like Depth First Search (DFS) to explore paths and backtrack if needed.

4. **Undo/Redo**:
   - Stores actions in applications for undoing and redoing operations (e.g., text editors).
  
5. **Browser History**:
   - Tracks visited web pages using two stacks for "back" and "forward" navigation.

6. **Balanced Parentheses**:
   - Checks if an expression has properly matched parentheses or brackets.
  
### **Disadvantages of Stack**

1. **Limited Size (Fixed in Array-based Stacks)**:
   - If a stack is implemented using an array, its size is fixed. Once the stack is full, no more elements can be pushed, leading to **stack overflow**.
  
2. **No Random Access**:
   - Elements can only be accessed from the **top** of the stack. To get an element in the middle, you need to pop all elements above it, making **direct access** inefficient.

3. **Limited Flexibility**:
   - Stacks only follow the **LIFO** (Last In, First Out) principle. If your task doesn't fit this structure, a stack is not suitable.

4. **Overflow and Underflow**:
   - **Overflow** occurs when trying to push an element onto a full stack.
   - **Underflow** occurs when trying to pop an element from an empty stack.

5. **Inefficient Memory Use**:
   - In array-based stacks, memory is pre-allocated. If the stack doesn't use all the allocated space, it leads to **wasted memory**.
  
## Code
~~~
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

~~~

## Code Output: -

Stack Operations Menu:
1. Push
2. Pop
3. Display
4. Exit

Enter your choice: 1

Enter the value to push: 3

3 pushed onto the stack.

## Conclusion
Leant how to implement the different operations of stack without using the stack header file in C++.
