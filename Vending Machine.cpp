
#include <iostream>
using namespace std;
#include<locale.h>

struct produto{
string nome;
float access_info;
float valor_adm;
float valor_usuario;
int posicao;
int qtd_estoque;
int qtd_vendas;
};

int main(){


setlocale (LC_ALL, "Portuguese");

	int numero, i=0, j=0; //i=prateleira....j=coluna
	float deposito=0, total=0, troco, lucro=0, valor_total_arrecadado=0;
	float valor_total_produto_custo=0, valor_total_produto_revenda=0, lucro_total, access_info, num_alterado=0;
	int continuar=1, contador=0;
	int conf_switch=0, prateleira, product;

            struct produto dados[4][5];
    
            dados[0] [0].nome="Guarana";
            dados[0] [0].valor_adm=2,5;
            dados[0] [0].valor_usuario=4,5;
            dados[0] [0].posicao=11;
            dados[0] [0].qtd_estoque=15;
            dados[0] [0].qtd_vendas=0;

            dados[0] [1].nome="Pepsi";
            dados[0] [1].valor_adm=2,5;
            dados[0] [1].valor_usuario=4,5;
            dados[0] [1].posicao=12;
            dados[0] [1].qtd_estoque=15;
            dados[0] [1].qtd_vendas=0;

            dados[0] [2].nome="Coca-Cola";
            dados[0] [2].valor_adm=2,5;
            dados[0] [2].valor_usuario=4,5;
            dados[0] [2].posicao=13;
            dados[0] [2].qtd_estoque=15;
            dados[0] [2].qtd_vendas=0;

            dados[0] [3].nome="Coca-Cola";
            dados[0] [3].valor_adm=2,5;
            dados[0] [3].valor_usuario=4,5;
            dados[0] [3].posicao=14;
            dados[0] [3].qtd_estoque=15;
            dados[0] [3].qtd_vendas=0;

            dados[0] [4].nome="Frupic laranja";
            dados[0] [4].valor_adm=1;
            dados[0] [4].valor_usuario=3;
            dados[0] [4].posicao=15;
            dados[0] [4].qtd_estoque=15;
            dados[0] [4].qtd_vendas=0;

            dados[1] [0].nome="Frupic uva";
            dados[1] [0].valor_adm=1;
            dados[1] [0].valor_usuario=3;
            dados[1] [0].posicao=21;
            dados[1] [0].qtd_estoque=15;
            dados[1] [0].qtd_vendas=0;

            dados[1] [1].nome="Frupic laranja com acerola";
            dados[1] [1].valor_adm=1;
            dados[1] [1].valor_usuario=3;
            dados[1] [1].posicao=22;
            dados[1] [1].qtd_estoque=15;
            dados[1] [1].qtd_vendas=0;

            dados[1] [2].nome="Sprite";
            dados[1] [2].valor_adm=2,5;
            dados[1] [2].valor_usuario=4,5;
            dados[1] [2].posicao=23;
            dados[1] [2].qtd_estoque=15;
            dados[1] [2].qtd_vendas=0;

            dados[1] [3].nome="Schweppes";
            dados[1] [3].valor_adm=3;
            dados[1] [3].valor_usuario=5;
            dados[1] [3].posicao=24;
            dados[1] [3].qtd_estoque=15;
            dados[1] [3].qtd_vendas=0;

            dados[1] [4].nome="Agua";
            dados[1] [4].valor_adm=1;
            dados[1] [4].valor_usuario=3;
            dados[1] [4].posicao=25;
            dados[1] [4].qtd_estoque=15;
            dados[1] [4].qtd_vendas=0;

            dados[2] [0].nome="Agua";
            dados[2] [0].valor_adm=1;
            dados[2] [0].valor_usuario=3;
            dados[2] [0].posicao=31;
            dados[2] [0].qtd_estoque=15;
            dados[2] [0].qtd_vendas=0;

            dados[2] [1].nome="Ruffles Classico";
            dados[2] [1].valor_adm=3;
            dados[2] [1].valor_usuario=6;
            dados[2] [1].posicao=32;
            dados[2] [1].qtd_estoque=15;
            dados[2] [1].qtd_vendas=0;

            dados[2] [2].nome="Ruffles churrasco";
            dados[2] [2].valor_adm=3;
            dados[2] [2].valor_usuario=6;
            dados[2] [2].posicao=33;
            dados[2] [2].qtd_estoque=15;
            dados[2] [2].qtd_vendas=0;

            dados[2] [3].nome="Ruffles alho e cebola";
            dados[2] [3].valor_adm=3;
            dados[2] [3].valor_usuario=6;
            dados[2] [3].posicao=34;
            dados[2] [3].qtd_estoque=15;
            dados[2] [3].qtd_vendas=0;

            dados[2] [4].nome="Fandangos presunto";
            dados[2] [4].valor_adm=1,5;
            dados[2] [4].valor_usuario=3;
            dados[2] [4].posicao=35;
            dados[2] [4].qtd_estoque=15;
            dados[2] [4].qtd_vendas=0;

            dados[3] [0].nome="Fandangos queijo";
            dados[3] [0].valor_adm=1,5;
            dados[3] [0].valor_usuario=3;
            dados[3] [0].posicao=41;
            dados[3] [0].qtd_estoque=15;
            dados[3] [0].qtd_vendas=0;

            dados[3] [1].nome="Cheetos requeijão";
            dados[3] [1].valor_adm=1,5;
            dados[3] [1].valor_usuario=3;
            dados[3] [1].posicao=42;
            dados[3] [1].qtd_estoque=15;
            dados[3] [1].qtd_vendas=0;

            dados[3] [2].nome="Cheetos queijo";
            dados[3] [2].valor_adm=1,5;
            dados[3] [2].valor_usuario=3;
            dados[3] [2].posicao=43;
            dados[3] [2].qtd_estoque=15;
            dados[3] [2].qtd_vendas=0;

            dados[3] [3].nome="Doritos";
            dados[3] [3].valor_adm=3;
            dados[3] [3].valor_usuario=6;
            dados[3] [3].posicao=44;
            dados[3] [3].qtd_estoque=15;
            dados[3] [3].qtd_vendas=0;

            dados[3] [4].nome="Amendoim";
            dados[3] [4].valor_adm=0,5;
            dados[3] [4].valor_usuario=2;
            dados[3] [4].posicao=45;
            dados[3] [4].qtd_estoque=15;
            dados[3] [4].qtd_vendas=0;

	while (deposito != 789654){ //senha adm
            

            if(access_info == 0)
                    dados [i] [j].valor_adm = num_alterado;
                    else if(access_info == 1)
                        dados [i] [j].valor_usuario = num_alterado;
                    else if(access_info == 2)
                        dados [i] [j].qtd_estoque = num_alterado;

	cout<< "Aperte 0 [zero] para continuar"<<endl;
	cin>>deposito;

    cout<<endl<<"PRODUTO: "<< dados[i] [j].nome<< " NUM ALTERADO: "<<num_alterado<<endl;

		//Senha para o ADM mandar imprimir dados = 789654.....segundo while
		while  (deposito != 789654){ // while para inserir o valor apenas uma vez e para imprimir dados para ADM

		cout<<endl<<"Ola, seja bem vindo ao sistema da NL Machine!"<<endl;
		cout<< "Informe o valor inserido"<<endl;
		cin>>deposito;

			if (deposito!= 789654){
				continuar=0;
			}
			troco = 0;
			total = 0;

				while (continuar==0){ //loop usuário

					contador+=1;

					cout<<endl<<"Escolha o seu produto digitando primeiro numero da prateleira e depois o numero da coluna"<<endl;
					cin>>numero;
					cout<<endl;

					i=(numero/10)-1;
					j=(numero%10)-1;


						//Saída usuário
					total += dados[i] [j].valor_usuario;
					troco=deposito-total;

						if (troco<0){
							cout<<"Valor insuficiente"<<endl;
							continuar=1;
						break;
						}

					dados[i] [j].qtd_estoque -=1;
					dados[i] [j].qtd_vendas +=1;


					cout<<"Opcao: "<<dados[i] [j].posicao << " - "
						<<dados[i] [j].nome << endl
						<<"Valor: R$"<<dados[i] [j].valor_usuario << endl
						<<"Valor total: R$"<<total << endl
						<<"Troco: R$"<<troco;

					cout<<endl<<endl<<"Se dejesar continuar comprando aperte 0 [zero]"<<endl
						<<"Se dejesar encerrar a compra aperte 1 [um]"<<endl;
					cin>>continuar;


					if (deposito!= 789654 && contador ==1){
					valor_total_arrecadado = deposito;
					}


					if (deposito!= 789654){
					lucro = lucro + dados[i] [j].valor_usuario - dados[i] [j].valor_adm;
					valor_total_arrecadado -= troco;
					}

				} //saida while usuário

		}//saida while ADM

			for (i=0; i<=3; i++){ //impressão relatório da máquina
				for(j=0; j<=4; j++){
					cout<< endl<< "Opcao: " << dados[i] [j].posicao << " - "
						<<dados[i] [j].nome << endl
						<<"Valor de compra: " <<dados[i] [j].valor_adm << endl
						<<"Valor de venda: " << dados[i] [j].valor_usuario << endl
						<<"Quantidade vendida: "<< dados[i] [j].qtd_vendas << endl
						<<"Quantidade na maquina: "<<dados[i] [j].qtd_estoque<<endl;
					valor_total_produto_custo = valor_total_produto_custo + (dados[i] [j].qtd_estoque * dados[i] [j].valor_adm);
					valor_total_produto_revenda = valor_total_produto_revenda + (dados[i] [j].qtd_estoque * dados[i] [j].valor_usuario);
					lucro_total = valor_total_produto_revenda - valor_total_produto_custo;
				}
			}

			cout<<endl<<"Valor total de dinheiro na maquina: R$"<<valor_total_arrecadado<<endl //impressão relatório da máquina
			<<"Lucro: R$ "<<lucro<<endl
			<<"Valor total de produtos na máquina a preco de custo: R$ "<<valor_total_produto_custo<<endl
			<<"Estimativa de lucro caso se venda o restante dos produtos: "<<lucro_total<<endl
			<<"_______"<<endl
			<<"caso queira alterar alguma info, tecle 1 [um]. Senão, tecle 0 [zero]."<< endl;
			cin >> conf_switch;

        if(conf_switch == 0)
            cout<<"saindo do sistema admin!";
        else
                i = 0;
                j = 0;
            cout<<endl<<"Escolha a prateleira cujo produto dejesa realizar modificações:"<<endl
                <<"1, 2, 3 e 4."<<endl;
            		for (i=0; i<=3; i++){ //impressão relatório da máquina
						for(j=0; j<=4; j++){
							if (i==0){
								cout<< "[" << i+1 << "] "<<dados[i] [j].nome << endl;
							}

								else if (i==1){
									cout<< "[" << i+1 << "] "<<dados[i] [j].nome << endl;
								}
									else if (i==2){
									cout<< "[" << i+1 << "] "<<dados[i] [j].nome << endl;
								}
									else if (i==3){
									cout<< "[" << i+1 << "] "<<dados[i] [j].nome << endl;
								}
						}
					}

					cin>>prateleira;

                    cout<<"agora escolha o produto:"<<endl
                    <<"1, 2, 3, 4 ou 5."<<endl;					
                    if (prateleira==1){
                        for(j=0; j<=4; j++){
                         cout<< "[" << j+1 << "] "<<dados[0] [j].nome <<endl;
                        }
                    }
                    
                        else if (prateleira==2){
                            for(j=0; j<=4; j++){
                             cout<< "[" << j+1 << "] "<<dados[1] [j].nome <<endl;
                            }
                        }
                                                    
                            else if (prateleira==3){
                                for(j=0; j<=4; j++){
                                 cout<< "[" << j+1 << "] "<<dados[2] [j].nome <<endl;
                                } 
                            }                       
                        
                                else if (prateleira==4){
                                    for(j=0; j<=4; j++){
                                     cout<< "[" << j+1 << "] "<<dados[3] [j].nome <<endl;
                                    }
                            
                                }                      
                                        
                    cin>>product; 

                    i = prateleira-1;
                    j = product-1;     
      
        
            cout<<endl<<"agora escolha qual o campo a ser alterado:"<<endl
                <<"0 - Valor de compra"<<endl
                <<"1 - valor de venda"<<endl
                <<"2 - quantidade no estoque"<<endl;
            cin>>access_info;             
        

            cout<<endl<<"insira agora o novo número"<<endl;
            cin >> num_alterado;

                if(access_info == 0)
                    dados [i] [j].valor_adm = num_alterado;
                    else if(access_info == 1)
                        dados [i] [j].valor_usuario = num_alterado;
                    else if(access_info == 2)
                        dados [i] [j].qtd_estoque = num_alterado;
                    else
                        cout<<"informação inexistente!";
            

    			if (deposito==789654){
    				cout<<endl<< "Caso o administrador queira: "<<endl
    				<<"Encerrar totalmente o programa: Aperta um [1]"<<endl
    				<<"Reiniciiar o programa: Aperte zero [0]"<<endl;
    				cin>>deposito;
    					if (deposito==1){
    						deposito=789654;
    					}
    			}

	 } //fim do primeito while ADM

		return 0;
}