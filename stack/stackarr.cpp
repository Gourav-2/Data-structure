#include <iostream>
#define max 5

using namespace std;

struct stack {
    int data[max];
    int top;
};

stack s, *p;

void init() {
    p = &s;  // Corrected from p = %s;
    p->top = -1;
}

int Empty() {
    return (p->top == -1);
}

int full() {
    return (p->top == max - 1);
}

void push(int x) {
    if (full()) {
        cout << "Stack is full\n";
        return;
    }
    p->top++;
    p->data[p->top] = x;
}

int pop() {
    if (Empty()) {
        cout << "Stack is empty\n";
        return -1;  // Return a sentinel value
    }
    int x = p->data[p->top];
    p->top--;
    return x;
}

int main() {
    init();
    push(10);
    push(20);
    push(30);

    cout << pop() << " ";
    cout << pop() << " ";
    push(40);
    cout << pop() << endl;

    return 0;
}

