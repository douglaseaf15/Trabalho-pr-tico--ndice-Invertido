/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TestarChar.cpp
 * Author: Win10
 *
 * Created on 22 de Novembro de 2018, 01:42
 */

#include <stdlib.h>
#include <iostream>
#include "IsChars.h"

/*
 * Simple C++ Test Suite
 */

void testIsChars() {
    
    if (!(IsChars::operator()(const char c))) {
        std::cout << "%TEST_FAILED% time=0 testname=testIsChars (TestarChar) message=error message sample" << std::endl;
    }
}


int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% TestarChar" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testIsChars (TestarChar)" << std::endl;
    testIsChars();
    std::cout << "%TEST_FINISHED% time=0 testIsChars (TestarChar)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

