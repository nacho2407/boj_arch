#include <cstdio>

using namespace std;

class Stack
{
public :
    Stack(int n) : arr(new int[n]), size(0) {}
    Stack(Stack &s);
    ~Stack() { delete[] arr; }

    int *getArr() { return arr; }

    Stack* operator =(Stack &s);

    void push(int x);
    int pop();
    int getSize() const { return size; }
    int isEmpty() const { return size == 0 ? 1 : 0; }
    int top() const { return size != 0 ? arr[size - 1] : -1; }
private :
    int *arr;
    int size;
};

Stack::Stack(Stack &s)
{
    delete[] arr;
    int newSize = s.getSize();
    arr = new int[newSize];
    for(int *i = s.getArr(), j = 0; j < newSize; i++, j++)
        arr[j] = *i;

    size = s.getSize();
}

Stack * Stack::operator =(Stack &s)
{
    delete[] arr;
    int newSize = s.getSize();
    arr = new int[newSize];
    for(int *i = s.getArr(), j = 0; j < newSize; i++, j++)
        arr[j] = *i;

    size = s.getSize();

    return this;
}

void Stack::push(int x)
{
    arr[size] = x;
    size++;
}

int Stack::pop()
{
    if(size == 0)
        return -1;
    
    size--;
    return arr[size];
}

int main()
{
    int n;
    scanf("%d", &n);

    Stack stack(n);

    int menu;
    int tmp;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &menu);
        switch(menu)
        {
            case 1:
                scanf("%d", &tmp);
                stack.push(tmp);
                break;
            case 2:
                printf("%d\n", stack.pop());
                break;
            case 3:
                printf("%d\n", stack.getSize());
                break;
            case 4:
                printf("%d\n", stack.isEmpty());
                break;
            case 5:
                printf("%d\n", stack.top());
                break;
        }
    }

    return 0;
}
