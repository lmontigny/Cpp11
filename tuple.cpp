#include <vector>
#include <tuple>
#include <iostream>

typedef std::tuple<int,int,double> my_tuple;

int main()
{
    std::vector <my_tuple> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(my_tuple(i,i*2,1.05) );
    }

    for(my_tuple t: v)
    {
        std::cout << std::get<0>(t) << ' ';
        std::cout << std::get<1>(t) << ' ';
        std::cout << std::get<2>(t) << '\n';
    };
}
