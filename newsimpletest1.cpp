/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newsimpletest1.cpp
 * Author: Win10
 *
 * Created on 22 de Novembro de 2018, 00:37
 */

#include <stdlib.h>
#include <iostream>
#include "IsChars.h"

/*
 * Simple C++ Test Suite
 */

void testIsChars() {
    const char* charsToRemove;
    IsChars isChars(charsToRemove);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testIsChars (newsimpletest1) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest1" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testIsChars (newsimpletest1)" << std::endl;
    testIsChars();
    std::cout << "%TEST_FINISHED% time=0 testIsChars (newsimpletest1)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

