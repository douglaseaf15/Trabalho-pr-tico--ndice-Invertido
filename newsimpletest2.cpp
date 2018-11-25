/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newsimpletest2.cpp
 * Author: Win10
 *
 * Created on 22 de Novembro de 2018, 00:50
 */

#include <stdlib.h>
#include <iostream>
#include "Indice.h"

/*
 * Simple C++ Test Suite
 */

//void testLer_Arquivo() {
  //  Indice indice;
  //  indice.Ler_Arquivo();
  //  if (true /*check result*/) {
 //       std::cout << "%TEST_FAILED% time=0 testname=testLer_Arquivo (newsimpletest2) message=error message sample" << std::endl;
 //   }
//}
void Testando_Leitura(){
    
    if(!(arq.good)){
        std::cout << "%TEST_FAILED% time=0 testname=Testando_Leitura (newsimpletest2) message=error message sample" << std::endl;
        
    }
    
}


int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest2" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testando_Leitura (newsimpletest2)" << std::endl;
    Testando_Leitura();
    std::cout << "%TEST_FINISHED% time=0 testando_Leitura (newsimpletest2)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

