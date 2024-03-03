//
// Created by reda ghouzraf on Sat Mar  2 20:53:10 2024
//
#include "easyfind.hpp"
int main()
{
    std::vector<int> data(10, 0);
    for(size_t i = 0; i < data.size(); i++){
        data[i] =  static_cast<int>((reinterpret_cast<long>(&data[i]) % 20));
    }
    std::cout << easyfind(data,  2) << '\n';
    std::cout << easyfind(data,  data[data.size() / 2]) << '\n';
    return 0;
}
