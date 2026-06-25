#include <iostream>

using namespace std;
class stack
{
private:
  int size;
  char *s;
  int top;

public:
  stack(int size)
  {
    this->size = size;
    s = new char[size];
    top = -1;
  }
  void push(char data)
  {
    if (top == size - 1)
    {
      cout << "stack overflow" << endl;
      return;
    }
    else
    {
      top++;
      s[top] = data;
    }
  }
  void pop()
  {
    if (top == -1)
    {
      cout << "stack underflow" << endl;
    }
    cout << "Popped " << s[top--] << endl;
  }
  int peek()
  {
    if (top == -1)
    {
      cout << "Stack is empty\n";
      return -1;
    }
    return s[top];
  }

  bool isEmpty()
  {
    return top == -1;
  }

  void display()
  {
    if (isEmpty())
    {
      cout << "Stack is empty\n";
      return;
    }

    cout << "Stack: ";
    for (int i = top; i >= 0; i--)
    {
      cout << s[i] << " ";
    }
    cout << endl;
  }
};
int main()
{
  string name = "lemon";
  int size = name.size();
  stack reverse(size);
  for(int i = 0; i< size; i++){
    reverse.push(name[i]);
  }
  reverse.display();
  return 0;
}