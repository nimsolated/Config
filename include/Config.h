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
    Config(const std::string& file_path);
    ~Config() = default;
    const std::string operator[](const std::string& key) const;
};