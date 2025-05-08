#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

class Config {
private:
    std::map<std::string, std::string> ini;
public:
    using ConfigIterator = std::map<std::string, std::string>::iterator;

    Config(const std::string& file_path);
    ~Config() = default;
    const std::string operator[](const std::string& key) const;
    const std::string at(const std::string& key) const;

    ConfigIterator begin(){
        return ini.begin();
    }
    ConfigIterator end(){
        return ini.end();
    }
};