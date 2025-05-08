#include "../include/Config.h"

Config::Config(const std::string& file_path) {
    std::ifstream file(file_path);
    if (!file) { std::cout << this << " could not find and open .ini file!\n"; }
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string key, value;
        if (std::getline(ss, key, '=') && std::getline(ss, value)) {
            ini[key] = value;
        }
    }
    file.close();
}

const std::string Config::operator[](const std::string& key) const {
    try {
        std::string r = ini.at(key);
        return r;
    }
    catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
        return "";
    }
}

const std::string Config::at(const std::string& key) const {
    try {
        std::string r = ini.at(key);
    }
    catch (std::out_of_range& e){
        std::cout << e.what() << std::endl;
        return "";
    }
}