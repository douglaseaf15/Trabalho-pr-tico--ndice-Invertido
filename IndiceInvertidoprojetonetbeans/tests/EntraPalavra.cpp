/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EntraPalavra.cpp
 * Author: Win10
 *
 * Created on 23 de Novembro de 2018, 00:22
 */

#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <string>
#include "IsChars.h"
using std::string;

/*
 * Simple C++ Test Suite
 */

void TestePalavraDigitada() {
    std::cout << "EntraPalavra test 1" << std::endl;
    string PalavraTeste = "Pa-;,la--;vra2";//A palavra para teste´é alterada com caracteres especiais e letras em caixa alta
    transform( PalavraTeste.begin(), PalavraTeste.end(), PalavraTeste.begin(), tolower );

     //Apaga os caracteres indesejados nas palavras
    PalavraTeste.erase(remove_if(PalavraTeste.begin(), PalavraTeste.end(), IsChars(",.;-:'?][")), PalavraTeste.end());
    if (((PalavraTeste).compare("palavra2") == 1) /*Se a palavra retornada não retirar os caracteres e não se tranformar em minúscula o teste falha*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testLer_Arquivo (TestLerArquivo) message=error message sample" << std::endl;
    }
    
}

int main(int argc, char** argv) {
    
    std::cout << "%SUITE_STARTING% Testa Palavra digitada "<< std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% Testa Palavra digitada (Testa Palavra digitada)" << std::endl;
    TestePalavraDigitada();
    std::cout << "%TEST_FINISHED% time=0 Testa Palavra digitada (Testa Palavra digitada)" << std::endl;
    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

