#include "../include/Config.h"

int main()
{
    Config cfg("../configuration.ini");
    
    for (auto& pair : cfg){
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    std::cin.get();
}
