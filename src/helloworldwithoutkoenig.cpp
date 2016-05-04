#include <iostream>

int main()
{
    std::operator<<(std::operator<<(std::cout, "Hello World!"), "\n");
    return 0;
}