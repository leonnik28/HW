#include <iostream>

int main()
{
    using namespace std;
    std::cout << "Hello, world!" << std::endl;
    return std::cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;
}