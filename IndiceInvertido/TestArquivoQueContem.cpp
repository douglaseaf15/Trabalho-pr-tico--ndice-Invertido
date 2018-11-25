/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TestArquivoQueContem.cpp
 * Author: Win10
 *
 * Created on 24 de Novembro de 2018, 19:52
 */

#include <stdlib.h>
#include <iostream>
#include <list>
#include <string>
#include <assert.h>
using std::list;
using std::string;
/*
 * Simple C++ Test Suite
 */

void TestaPalavraContida() {
    std::cout << "Testa Palavra Contida" << std::endl;
    string NomeArquivosTeste;
    NomeArquivosTeste = "arquivodeteste";
    list <string> ListaTeste;
    int marcador;//Caso seja confirmado que a palavra a ser buscada está na lista, essa variável receberá 1
    ListaTeste.push_front("palavra1");
    ListaTeste.push_front("palavra2");
    ListaTeste.push_front("palavra3");
    ListaTeste.push_front("palavra4");
    string PalavraBuscar = "palavra1";//Palavra a ser pesquisada na lista test
    for (std::list<std::string>::iterator it=ListaTeste.begin(); it != ListaTeste.end(); ++it)
        if ((PalavraBuscar).compare(*it) == 0){
            marcador = 1;}
            assert(marcador == 1);
}

void test2() {
    std::cout << "TestArquivoQueContem test 2" << std::endl;
    std::cout << "%TEST_FAILED% time=0 testname=test2 (TestArquivoQueContem) message=error message sample" << std::endl;
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% TestArquivoQueContem" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (TestArquivoQueContem)" << std::endl;
    
    TestaPalavraContida();
    
    std::cout << "%TEST_FINISHED% time=0 test1 (TestArquivoQueContem)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

