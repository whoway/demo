

typedef int (*ptr_type)(int a, int b);

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

void demo(ptr_type func_ptr)
{
    cout << (*func_ptr)(19, 9);
}

int main()
{
    ptr_type p;
    p=add;
    demo(p);

    p=sub;
    demo(p);
    return 0;
}