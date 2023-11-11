 #include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
struct  S 
{
    int val = 0;
    S() = default;
};

struct  X 
{
    int val = 0;
    explicit X(int v): val(v) {}
};
3
 


void foo(int size)
{
    
    int buffer[size] = {0};

}
int main()
{
    constexpr size_t size = 10;
    S manyS[size];
    X java[size];
    //std::cout << sizeof(X) << '\n';
    std::string str = "casa";
    std::string::iterator it;
    it = str.begin();
    for (char ch : str )
    {
        std::cout << ch << '\n';
    }
    foo(10);
    foo(90); 
    return 0;
}