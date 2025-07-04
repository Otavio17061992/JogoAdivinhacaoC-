#include <iostream>
using namespace std;


int main () {

    cout << "*********************************" << endl;
    cout << "Bem-vindo ao jogo da adivinhação!" << endl; 
    cout << "*********************************" << endl;
    cout << endl;
    int pontuacao = 7;

    cout << "*********************************************" << endl;
    cout << "Você começa com " << pontuacao << " pontos." << endl;
    cout << "A cada chute errado, você perde 1 ponto." << endl;
    cout << "Se você chegar a 0 pontos, você perde o jogo." << endl;
    cout << "*********************************************" << endl;
    cout << endl;

    int tentativa = 0;
    const int NUMEROSECRETO = 42;
    bool naoAcertou = true;

    while(naoAcertou){
        
        tentativa++;
        cout << "Tentativa #" << tentativa << endl;
        int chuteNumeroSecreto;
        cout << "Digite o seu chute:" << endl;
        cout << endl;
        cin >> chuteNumeroSecreto;
        cout << "O valor do seu chute é " << chuteNumeroSecreto << endl;
        cout << endl;


        bool chuteCerto = chuteNumeroSecreto == NUMEROSECRETO;
        bool chuteMaior = chuteNumeroSecreto > NUMEROSECRETO;



        if(chuteCerto){
            cout << "Parabéns você acertou!" << endl;
            naoAcertou = false;
        }
        else if (chuteMaior){
            cout << "O seu chute foi maior que o número secreto" << endl;
            pontuacao -= 1;
            cout << "Sua pontuação atual é: " << pontuacao << endl;
        }
        else{
            cout << "O seu chute foi menor que o número secreto" << endl;
            pontuacao -= 1;
            cout << "Sua pontuação atual é: " << pontuacao << endl;
        }

        if(pontuacao <= 3){

            cout << endl;
            cout << "---------------------------------" << endl;
            cout << "você está perdendo pontos rapidamente!" << endl;
            cout << "Tente ser mais cuidadoso!" << endl;
        }

        if(naoAcertou){
            
            cout << endl;
            cout << "---------------------------------" << endl;
            cout << "Você ainda tem mais chances!" << endl;
            cout << "---------------------------------" << endl;
            cout << endl;
        }

        if(pontuacao == 0){
            cout << "Você perdeu! Sua pontuação chegou a zero." << endl;
            naoAcertou = false;
            cout << "O número secreto era: " << NUMEROSECRETO << endl;
            cout << "Tente novamente!" << endl;
            break;
        }

    }

    cout << "Fim do jogo!" << endl;

    if(pontuacao > 0)
        cout << "Sua pontuação final é: " << pontuacao << endl;
    else
        cout << "Você não tem mais pontos." << endl;
        cout << "Obrigado por jogar!" << endl;
        cout << "*********************************" << endl;
        cout << endl;
}