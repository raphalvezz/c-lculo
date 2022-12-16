
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Declara��o de vari�veis
  double vol, lateral, base, r1, r2, h1, h2, aux1, aux2, custototal1, custototal2, areabase1, areabase2;
  const double PI = 3.14159;
  int tampa, terminar;

  // La�o do-while para permitir ao usu�rio executar o c�lculo mais de uma vez
  do {
    // Solicita��o de entrada de dados pelo usu�rio
    do {
	      cout << "Digite o volume do cilindro: ";
	      cin >> vol;
	      if (vol <= 0) // valida��o do volume do cilindro
	        cout << "\a\tValor invalido!\n";
    } while (vol < 0); // enquanto o volume do cilindro for inv�lido, continuar solicitando ao usu�rio

    do {
      cout << "Digite o preco da base: ";
      cin >> base;
      if (base < 0) // valida��o do pre�o da base
        cout << "\a\tValor invalido!\n";
    } while (base < 0); // enquanto o pre�o da base for inv�lido, continuar solicitando ao usu�rio

    do {
      cout << "Digite o preco da lateral: ";
      cin >> lateral;
      if (lateral < 0) // valida��o do pre�o da lateral
        cout << "\a\tValor invalido!\n";
    } while (lateral < 0); // enquanto o pre�o da lateral for inv�lido, continuar solicitando ao usu�rio

    do {
      cout << "\nO cilindro tem tampa? Digite 1 para SIM ou 2 para NAO: ";
      cin >> tampa;
      if (tampa < 1 || tampa > 2) // valida��o da op��o de tampa
        cout << "\a\tValor invalido!\n";
    } while (tampa < 1 || tampa > 2); // enquanto a op��o de tampa for inv�lida, continuar solicitando ao usu�rio

    // C�lculo e exibi��o de resultados de acordo com a op��o escolhida pelo usu�rio
    switch (tampa) {
      case 1: // se o cilindro tiver tampa
        aux1 = (lateral * vol * 2) / (4 * base * PI);
        r1 = pow(aux1, 1.0 / 3.0); // raio m�nimo com tampa

        custototal1 = 2 * (base * PI * r1 * r1) + (lateral * 2 * PI * r1 * h1);
        cout << "\nCusto com a tampa =  " << custototal1 << " reais";
// menor tamanho da base
areabase1 = PI * r1 * r1;
h1 = vol / areabase1;


    cout << "\n## Area base =  " << areabase1 << " cm quadrados\n";
    cout << "## h minimo =  " << h1 << " cm\n";
    cout << "## Raio minimo =  " << r1 << " cm\n";
    break;

  case 2: // se o cilindro n�o tiver tampa
    aux2 = (lateral * vol * 2) / (2 * base * PI);
    r2 = pow(aux2, 1.0 / 3.0); // raio m�nimo sem tampa

    custototal2 = (base * PI * r2 * r2) + (lateral * 2 * PI * r2 * h2);
    cout << "\nCusto sem a tampa =  " << custototal2 << " reais\n";

    // menor tamanho da base
    areabase2 = PI * r2*r2;
    h2 = vol / areabase2;
    
    cout << "\n## Area base =  " << areabase2 << " cm quadrados\n";
    cout << "## h minimo =  " << h2 << " cm\n";
    cout << "## Raio minimo =  " << r2 << " cm\n";
    break;
    
  default: // caso a op��o de tampa seja inv�lida
    cout << "Valor invalido!\n";
    break;
}

// Solicita��o ao usu�rio se deseja executar o c�lculo novamente
do {
  cout << "\nDeseja fazer novamente? digite 1 (sim) ou 2 (nao):  ";
  cin >> terminar;
  if (terminar < 1 || terminar > 2) // valida��o da op��o de continuar ou n�o
    cout << "\a\tValor invalido!\n";
} while (terminar < 1 || terminar > 2); // enquanto a op��o for inv�lida, continuar solicitando ao usu�rio
}
while (terminar == 1); // enquanto o usu�rio desejar continuar, continuar o la�o

return 0;
}
