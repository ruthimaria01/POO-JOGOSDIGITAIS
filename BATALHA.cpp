#include <iostream>
#include <string> //abrimos essa biblioteca porque eu quero que o usuario der nome a minha variavel
#include <ctime> // abrimos essa biblioteca para podermos trabalhar com o tempo do relogio do computador

using namespace std;

//FUNCAO PRINCIPAL
int main(int argc, char* args[])
 {
	 //declarando as variaveis
	 //foi usado bool porque quero atribuir valores verdadeiros, falsos e\ou nulos
	bool sair = false;
	//foi usado string porque eu quero que o usuario der nome a minha variavel
	string jogador1, jogador2;
	//usamos int pq eu quero trabalhar com variaveis inteiras, numeros inteiros
	int vida1 = 20, vida2 = 20;
	int Ataque1 = 5, Defesa1 = 4, Ataque2 = 5, Defesa2 = 4;
		
	//imprimindo na tela o pedido dos nomes dos jogadores e salvando os nomes que o usuario fornecer
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jogador1;
	
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jogador2;

	// imprimindo na tela pela primeira vez os bonequinhos e os status deles
	cout << " o                       o" << endl;
	cout << ".T./                   \\.T." << endl;
	cout << " ^                       ^" << endl;
	cout << jogador1 << "             " << jogador2 << endl;
	cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
	cout << "Ataque:" << Ataque1 << "           " << "Ataque:" << Ataque2 << endl;
	cout << "Defesa:" << Defesa1 << "           " << "Defesa:" << Defesa2 << endl;
	
	//iniciando o laco while (laco de condicao (que vai fazer o jogo repetir)) 
		while (sair == false) {
		
		//imprimindo os bonequinhos e os status pela segunda vez
		//no outro ciclo ja vamos ter os status com valores diferentes
		cout << " o      o" << endl;
		cout << ".T./\\.T." << endl;
		cout << " ^     ^" << endl;
		cout << jogador1 << "    " << jogador2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "Ataque:" << Ataque1 << "           " << "Ataque:" << Ataque2 << endl;
		cout << "Defesa:" << Defesa1 << "           " << "Defesa:" << Defesa2 << endl;
			
			//permite que a janela nao feche e fique mostrando o resultado.
			system("pause");
		
			//declarando a variavel seis do dado
			int dado6;
		
			//Adiciona uma "semente" ao gerador de numeros
			srand((int)time(0));
			
			//esse comando diz que eu quero um valor aleatorio até seis, mas não pode ser zero, por isso soma 1
			dado6 = rand() % 6 + 1;
		
			//dando a condicao para emitir os danos e/ou acertos para o jogador 1
			//dizendo que é preciso que a variavel dado 6 (o numero aleatorio) seja maior que 4
			if (dado6 > 4)
			 {
				 //diminuindo o numero de vidas de acordo com o dano do dado
			vida1 = vida1 - dado6;
			//mostrando o dano no jogador 1 e dizendo que o jogador 2 acertou o ataque
			cout << jogador1 << " Dano:" << -dado6 << endl;
			cout << jogador2 << " Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			system("pause");
			}
		
			//diz que se o numero aleatório for menor ou igual a 4 vai dizer que o jogador 2 errou e pede o comando pra proxima rodada
			else if (dado6 <= 4)
			 {
			
				cout << jogador2 << " voce errou!" << endl;
			cout << "para ir pra proxima jogada (Digite enter): " << endl;
			system("pause");
			
			}
			//esse comando diz que eu quero um valor aleatorio até seis, mas nao pode ser zero, por isso soma 1
			dado6 = rand() % 6 + 1;

			//dando a condicao para emitir os danos e/ou acertos para o jogador 2
			//dizendo que é preciso que a variavel dado 6 (o numero aleatorio) seja maior que 4
			if (dado6 > 4)
			 {
				 //diminuindo o numero de vidas de acordo com o dano do dado
			vida2 = vida2 - dado6;
			//mostrando o dano no jogador 1 e dizendo que o jogador 2 acertou o ataque
			cout << jogador2 << " Dano:" << -dado6 << endl;
			cout << jogador1 << " voce acertou!" << endl;
			cout << "para ir pra Proxima jogada (Digite enter): " << endl;
			system("pause");;
			}
			//caso a condicao de cima seja falsa vai para o outro jogador e se o dado for menor que 4 ira dizer que o jogador da vez errou e nao ira aparecer dano pq nao teve.
		else if (dado6 <= 4) {
			
			cout << jogador1 << " voce errou!" << endl;
			cout << "para ir pra Proxima jogada (Digite enter): " << endl;
			system("pause");
			
		}
	
		//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		
		//apagando o que foi colocado a cima para iniciar uma nova rodada com tudo limpo, pra nao ficar um tumulto de coisa
		system("cls");
		
		//comando de condição, quando a vida1 for menor ou igual a o ou a vida2 for menos ou igual a 0 sair sera verdadeiro e o programa vai sair do ciclo, caso isso nao seja verdade a tela sera limpa e o jogo continua.
		if (vida1 <= 0 || vida2 <= 0)
			 {
			
				sair = true;
			}
			//limpando a tela
			else system("cls");
		
	}
	
		// quando um dos numeros de vida for igual ou inferior a zero quero que imprima na tela que o jogo chegou ao fim
		cout << "Fim de jogo..." << endl;
	
	//dando as condicoes para imprimir na tela quem venceu e quem perdeu ou se os dois perderam	
	if (vida1 > 0) cout << jogador1 << " voce venceu!!! :) " << jogador2 << "voce perdeu!!! :( " << endl;
	else if (vida2 > 0) cout << jogador2 << " voce venceu!!! :)" << jogador1 << "voce perdeu!!! :(" << endl;
	else cout << "não houve vencedor! :´(" << endl;
	
	//fim da funcao main
	return 0;
	
}


