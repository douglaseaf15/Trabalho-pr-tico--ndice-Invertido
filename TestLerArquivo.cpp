/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TestLerArquivo.cpp
 * Author: Win10
 *
 * Created on 22 de Novembro de 2018, 02:06
 */

#include <stdlib.h>
#include <iostream>
#include "Indice.h"
#include "IsChars.h"
#include <algorithm>
using std::string;

/*
 * Simple C++ Test Suite
 */

void testLer_Arquivo() {
    string PalavraTeste = "Pa-;,la;vra";
    transform( PalavraTeste.begin(), PalavraTeste.end(), PalavraTeste.begin(), tolower );

     //Apaga os caracteres indesejados nas palavras
    PalavraTeste.erase(remove_if(PalavraTeste.begin(), PalavraTeste.end(), IsChars(",.;-:'?][")), PalavraTeste.end());
 
    
    if (((PalavraTeste).compare("palavra") == 1) /*Se a palavra retornada não retirar os caracteres e não se tranformar em minúscula o teste falha*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testLer_Arquivo (TestLerArquivo) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% TestLerArquivo" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testLer_Arquivo (TestLerArquivo)" << std::endl;
    testLer_Arquivo();
    std::cout << "%TEST_FINISHED% time=0 testLer_Arquivo (TestLerArquivo)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

