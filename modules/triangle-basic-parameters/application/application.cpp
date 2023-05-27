// Copyright 2023 Terina Alina

#include <string>

#include "include/triangle_app.h"

int main(int argc, char** argv) {
	application app;
	std::string output = app(argc, argv);
	printf("%s\n", output.c_str());
}