#include "testclass.h"
#include <iostream>

TestClass::TestClass()
{
}

TestClass::~TestClass()
{
}

int TestClass::method(const int &a, const int &b) const
{
    std::cout << "TestClass::method()" << std::endl;
    int c = a + b;
    return c;
}
