#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "ImgPPM.hpp"
#include "NovaImg.hpp"

int main(int argc, char ** argv) {

// Criando o objeto.
NovaImg * imagem = new NovaImg();

// Abrindo a imagem, extraindo o cabeçalho e copiando a imagem.
imagem->AbrirImagem();

imagem->ExtrairAtributos();

if (imagem->getNumMagico() != "P6") {
	cout << "Tipo de imagem inválido!" << endl;
	exit(1);
}
else {
	imagem->CopiaImagem();

	cout << "Numero mágico: " << imagem->getNumMagico() << endl;

	cout << "Largura: " << imagem->getLargura() << endl;

	cout << "Altura: " << imagem->getAltura() << endl;

	cout << "Nível máximo de cor: " << imagem->getNivelCor() << endl;

}
// Desalocando a memória.
delete (imagem);

return 0;

}
