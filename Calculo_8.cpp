
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Declaração de variáveis
  double vol, lateral, base, r1, r2, h1, h2, aux1, aux2, custototal1, custototal2, areabase1, areabase2;
  const double PI = 3.14159;
  int tampa, terminar;

  // Laço do-while para permitir ao usuário executar o cálculo mais de uma vez
  do {
    // Solicitação de entrada de dados pelo usuário
    do {
	      cout << "Digite o volume do cilindro: ";
	      cin >> vol;
	      if (vol <= 0) // validação do volume do cilindro
	        cout << "\a\tValor invalido!\n";
    } while (vol < 0); // enquanto o volume do cilindro for inválido, continuar solicitando ao usuário

    do {
      cout << "Digite o preco da base: ";
      cin >> base;
      if (base < 0) // validação do preço da base
        cout << "\a\tValor invalido!\n";
    } while (base < 0); // enquanto o preço da base for inválido, continuar solicitando ao usuário

    do {
      cout << "Digite o preco da lateral: ";
      cin >> lateral;
      if (lateral < 0) // validação do preço da lateral
        cout << "\a\tValor invalido!\n";
    } while (lateral < 0); // enquanto o preço da lateral for inválido, continuar solicitando ao usuário

    do {
      cout << "\nO cilindro tem tampa? Digite 1 para SIM ou 2 para NAO: ";
      cin >> tampa;
      if (tampa < 1 || tampa > 2) // validação da opção de tampa
        cout << "\a\tValor invalido!\n";
    } while (tampa < 1 || tampa > 2); // enquanto a opção de tampa for inválida, continuar solicitando ao usuário

    // Cálculo e exibição de resultados de acordo com a opção escolhida pelo usuário
    switch (tampa) {
      case 1: // se o cilindro tiver tampa
        aux1 = (lateral * vol * 2) / (4 * base * PI);
        r1 = pow(aux1, 1.0 / 3.0); // raio mínimo com tampa

        custototal1 = 2 * (base * PI * r1 * r1) + (lateral * 2 * PI * r1 * h1);
        cout << "\nCusto com a tampa =  " << custototal1 << " reais";
// menor tamanho da base
areabase1 = PI * r1 * r1;
h1 = vol / areabase1;


    cout << "\n## Area base =  " << areabase1 << " cm quadrados\n";
    cout << "## h minimo =  " << h1 << " cm\n";
    cout << "## Raio minimo =  " << r1 << " cm\n";
    break;

  case 2: // se o cilindro não tiver tampa
    aux2 = (lateral * vol * 2) / (2 * base * PI);
    r2 = pow(aux2, 1.0 / 3.0); // raio mínimo sem tampa

    custototal2 = (base * PI * r2 * r2) + (lateral * 2 * PI * r2 * h2);
    cout << "\nCusto sem a tampa =  " << custototal2 << " reais\n";

    // menor tamanho da base
    areabase2 = PI * r2*r2;
    h2 = vol / areabase2;
    
    cout << "\n## Area base =  " << areabase2 << " cm quadrados\n";
    cout << "## h minimo =  " << h2 << " cm\n";
    cout << "## Raio minimo =  " << r2 << " cm\n";
    break;
    
  default: // caso a opção de tampa seja inválida
    cout << "Valor invalido!\n";
    break;
}

// Solicitação ao usuário se deseja executar o cálculo novamente
do {
  cout << "\nDeseja fazer novamente? digite 1 (sim) ou 2 (nao):  ";
  cin >> terminar;
  if (terminar < 1 || terminar > 2) // validação da opção de continuar ou não
    cout << "\a\tValor invalido!\n";
} while (terminar < 1 || terminar > 2); // enquanto a opção for inválida, continuar solicitando ao usuário
}
while (terminar == 1); // enquanto o usuário desejar continuar, continuar o laço

return 0;
}
