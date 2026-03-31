#include <iostream>
#include <string>
using namespace std;

int main()
{
    string jogador;
    int vida, classe, escolha;
    cout << "Digite o nome do jogador: ";
    cin >> jogador;
    // Introdução do jogo
    cout << "Voce esta preso em um cativeiro em uma casa velha e precisa escapar do michel jackson RUSBE." << endl
         << "Faca a escolha correta para ter sucesso! " << endl;
    // Escolha da classe
    cout << "Escolha a sua classe! " << endl
         << "1: Engenheiro de software (vida |100| forca |50| inteligencia |200|) " << endl
         << "2: Ajudante de Pedreiro (vida |200| forca |150| inteligencia |30|)" << endl;
    cin >> classe;
    if (classe == 2)
    {
        cout << " vida |200| forca |150| inteligencia |30|" << endl;
        vida = 200;
    }
    else
    {
        cout << " vida |100| forca |50| inteligencia |200|" << endl;
        vida = 100;
    }
    // inicio do jogo FASE1
    cout << " voce esta dentro da jaula e observa que ha 1 granada ao seu lado" << endl
         << "o que voce faz " << endl;
    cout << "1: |Usa a granada para tentar sair|" << endl
         << "2: |Espera|";
    cin >> escolha;
    // escolha 1
    switch (escolha)
    {
    case 1:
        cout << "Voce usou a granada e conseguiu sair da jaula mas perdeu 100|vida| pela explosao" << endl;
        vida = vida - 100;
        cout << "Vida atual: " << vida << endl;
        if (vida == 0)
        {
            cout << "voce morreu" << endl;
            return 0;
        }
        break;

    case 2:
        // FASE 1 alternativa
        cout << "voce esperou demais e o michel jackson entrou na jaula " << endl;
        cout << "o que voce faz?" << endl
             << "1: |tentar escapar| " << endl
             << "2: |dar um rasteira no michel e sair correndo da jaula|";
        cin >> escolha;
        // escolha 1 alternativa
        switch (escolha)
        {
        case 1:
            cout << "voce tentou corre mas o michel era mais rapido e te pegou " << endl
                 << "voce morreu" << endl;
            return 0;
            break;
        case 2:
            cout << "voce derrubou ele e conseguiu tempo para correr " << endl;
            break;
        }
        break;
    }
    // FASE 2
    cout << "saindo da jaula voce percebe que esta em uma casa e observa que na porta ha uma fechadura eletronica" << endl
         << "o que voce faz?" << endl
         << "1: |tentar abrir a fechadura| " << endl
         << "2: |procurar outra saida|" << endl;
    cin >> escolha;
    // escolha 2
    switch (escolha)
    {
    case 1:
        if (classe == 1)
        {
            cout << "voce usou seu intelecto elevado e conseguiu achar a senha dentro do banco de dados da fechadura eletronica usando seus conhecimentos em c++ e conseguiu abrir a porta" << endl;
        }
        else
        {
            cout << "voce ficou tentando varias senhas aleatorias e acabou acionando o alarme entao michel te achou e atacou voce com uma faca -150|vida|" << endl;
            vida = vida - 150;
            cout << "vida atual: " << vida << endl;
            if (vida <= 0)
            {
                cout << "voce morreu" << endl;
                return 0;
            }
            else
            {
                // fase 2 alternativa
                cout << "voce ficou gravemente ferido mas por conta da sua força conseguiu apagar michel por um breve periodo" << endl
                     << "agora voce tem que pensar em algo rapido para sair da casa" << endl
                     << "1: |tentar abrir a porta desparafusando os parafusos com a parafusadeira que esta em sua mao mas pode ser que nao de tempo| " << endl
                     << "2: |procurar outra maneira| " << endl;
                cin >> escolha;
                // escolha 2 alternativa
                switch (escolha)
                {
                case 1:
                    cout << "por conta da sua experiencia com a parafusadeira, voce conseguiu desparafusar a porta em 10 segundos e sair da casa" << endl;
                    break;
                case 2:
                    cout << "voce viu um cartao de acesso caido do lado do michel e consegue pegar rapidamente e usa para abrir a porta, voce conseguiu sair da casa" << endl;
                    break;
                }
            }
        }
        break;
        // caso 2 da FASE 2
    case 2:
        if (classe == 1)
        {
            cout << "voce corre para procurar mas michel acaba te achando e te ataca -90|vida|" << endl;
            vida = vida - 90;
            cout << "voce cai no chao com o ataque olha pro lado e ve uma parafusadeira jogada e usa rapidamente contra michel mas fica motalmente ferido e manco " << endl;
            cout << "vida atual: " << vida << endl;
            // FASE 2 alternativa
            cout << "voce precisa pensar em algo rapido! voce nao consegue correr e tem pouco tempo ate michel se recuperar" << endl;
            cout << "1: |tentar abrir a fechadura| " << endl
                 << "2: |desparafusar a porta|" << endl;
            cin >> escolha;
            // escolha 2 alternativa
            switch (escolha)
            {
            case 1:
                cout << "voce usou seu intelecto elevado e conseguiu achar a senha dentro do banco de dados da fechadura eletronica usando seus conhecimentos em c++ e conseguiu abrir a porta" << endl;
                break;
            case 2:
                cout << "voce nao desparafusou atempo e michel te pegou" << endl
                     << "voce morreu" << endl;
                return 0;
                break;
            }
        }
        else
        {
            cout << "voce achou uma parafusadeira e usou sua experiencia para tirar os parafusos da porta em 10 segundos e consegue sair a tempo!" << endl;
        }
        break;
    }
    // FASE 3 FINAL
    cout << "parabens! voce saiu porém voce olha ao redor e precebe que esta em uma floresta com apenas umas estrada cheia de mato e valetas, ao lado percebe que ha 4 veiculos: uma Hilux uma ferrari um BYD e um elicoptero escolhe um dos 4 para fugir." << endl
         << " qual voce escolhe? (pense bem)" << endl
         << "1: |Hilux| " << endl
         << "2: |Ferrari| " << endl
         << "3: |BYD| " << endl
         << "4: |Elicoptero| " << endl;
    cin >> escolha;
    // escolha 3
    switch (escolha)
    {
    case 1:
        cout << "voce escolheua hilux e consegue fugir do michel jackson rusbe com facilidade, parabens voce venceu! e levou uma hilux pra casa" << endl
             << endl;
        break;
    case 2:
        cout << "voce escolheu a ferrari por conta da estrada desrregular voce atola na primeira valeta, michel te alcança e te pega, voce morreu!" << endl;
        return 0;
        break;
    case 3:
        cout << "voce escolheu o BYD e acaba a bateria no meio do caminho, michel te alcança e te pega, voce morreu!" << endl;
        return 0;
        break;
    case 4:
        cout << "voce nao sabe pilotar um elicoptero, michel te alcança e te pega, voce morreu!" << endl;
        return 0;
        break;
    }
    cout << "Direcao Executiva: Matheus." << endl
         << "Produtor Executivo: Hermano. " << endl
         << "Level Designers: Hermano, Matheus." << endl
         << "Programacao/Engenharia: Hermano." << endl
         << "Gameplay Programmers: Hermano." << endl
         << "Diretor de Arte: Matheus." << endl
         << "Artistas 3D/2D: Matheus." << endl
         << "Escrita: Hermano." << endl
         << "Roteiristas: Matheus." << endl
         << "Narrativa: Hermano." << endl;

    return 0;
}