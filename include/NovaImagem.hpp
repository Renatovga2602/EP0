#ifndef NOVAIMAGEM_HPP
#define NOVAIMAGEM_HPP

#include <iostream>
#include <string>
#include "ImagemPPM.hpp"

using namespace std;
//class filha

  class NovaImagem : public ImagemPPM{

public:
  NovaImagem();//contrutor
  ~NovaImagem();//destrutor
    void CopiaImagem();// função que copia os dados obtidos para um novo arquivo
  };

  #endif
