#include "../include/Config.h"

int main()
{
    Config cfg("../configuration.ini");
    std::cout << cfg["health"] << '\n';
    std::cout << cfg["damage"] << '\n';
    std::cout << cfg["move_speed"] << '\n';
    std::cout << cfg["invalid_key"] << '\n';
}
