#ifndef NOVAIMG_HPP
#define NOVAIMG_HPP

#include <iostream>
#include <string>
#include "ImgPPM.hpp"

using namespace std;
//class filha

  class NovaImg : public ImgPPM{

public:
  NovaImg();//contrutor
  ~NovaImg();//destrutor
    void CopiaImagem();// função que copia os dados obtidos para um novo arquivo
  };

  #endif
