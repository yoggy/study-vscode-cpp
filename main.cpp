#include <iostream>
#include "testclass.h"

int main(int argc, char *argv[])
{
    TestClass test;

    int a = test.method(1, 2);
    std::cout << a << std::endl;

    return 0;
}
