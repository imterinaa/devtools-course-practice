// Copyright 2023 Terina Alina

#pragma once

#include <string>
#include <utility>

#include "./lebedinskiy_ilya_triangle_basic_params.h"

class application {
public:
    struct arguments {
        std::pair<float, float> a;
        std::pair<float, float> b;
        std::pair<float, float> c;
        std::string operation{ "" };
        int side{ 0 };
    };

public:
    std::string operator()(int argc, char** argv);

private:
    std::string help(const std::string& appname);
    bool validate(const std::string& str);
    arguments parse_args(int argc, char** argv);
};
