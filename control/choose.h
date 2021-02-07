#pragma once
#include <iostream>
#include "determine_transform.h"
#include "Calculator.h"

using namespace std;

void show_calculator();

void choose_calculator();

void choose_mode( int argc ,char **argv );

bool binary_check( int argc, char **argv );

void binary_mode( int num );