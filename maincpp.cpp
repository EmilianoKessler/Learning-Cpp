#include <iostream>
#include <string>
using namespace std;

//EXERCICIO 1
/*Desenvolva um programa que determine se um cliente de uma loja de departamentos excedeu o limite de crédito em uma conta corrente.
Para cada cliente, os seguintes fatos estão disponíveis :
a) Número de conta.
b) Saldo no início do mês.
c) Total de todos os itens cobrados desse cliente no mês.
d) Total de créditos aplicados ao cliente no mês.
e) Limite de credito autorizado.
O programa deve inserir todos esses fatos como inteiros, calcular novo saldo = saldo inicial - despesas + crédito, exibir novo saldo
e determinar se o novo saldo excede ao limite de crédito do cliente.Para aqueles cálculos cujo limite de crédito foi excedido o
programa deve exibir a mensagem “Limite de Crédito excedido”.*/

/*void main()
{
float saldo, despesa, credito;
int conta, i = 1, limite, novoSaldo;

while (i < 4)
{
cout << "WHILE" << endl;
cout << "conta: ";
cin >> conta;
cout << "Saldo anterior: ";
cin >> saldo;
cout << "Despesa: ";
cin >> despesa;
cout << "Credito: ";
cin >> credito;
cout << "Limite: ";
cin >> limite;
novoSaldo = (saldo - despesa + credito) * 100;

if (novoSaldo < limite)
{
cout << "Limite de credito excedido. " << endl;
}
cout << endl << endl << endl;
i++;
}

for (int j = 1; j < 4; j++)
{
cout << "FOR" << endl;
cout << "conta: ";
cin >> conta;
cout << "Saldo anterior: ";
cin >> saldo;
cout << "Despesa: ";
cin >> despesa;
cout << "Credito: ";
cin >> credito;
cout << "Limite: ";
cin >> limite;
novoSaldo = (saldo - despesa + credito) * 100;

if (novoSaldo < limite)
{
cout << "Limite de credito excedido. " << endl;
}
cout << endl << endl << endl;
}
system("pause");

}*/

//EXERCICIO 2
/*Uma grande empresa paga seu pessoal de vendas por comissão. O pessoal de vendas recebe R$ 200 por semana mais 9% de suas vendas brutas
durante essa semana. Por exemplo, um vendedor que realiza um total de vendas de mercadorias de R$ 5000 em uma semana recebe R$ 200 mais
9% de 5000, ou um total de R$ 650. Foi-lhe fornecida uma lista de itens vendidos por cada vendedor. Os valores desses itens são como segue:
1
239.99
2
129.75
3
99.93
4
350.89
Desenvolva um programa que recebe entrada de itens vendidos por um vendedor durante a última semana e calcula e exibe os rendimentos do
vendedor. Não existe nenhum limite para o número de itens que podem ser vendidos.*/


/*void main()
{

	int v = 0, i1 = 0, i2 = 0, i3 = 0, i4 = 0, s = 0, c = 0;
	float rendimento;

	/*while (s == 0)
	{
		//cout << "Item vendido: " << endl << "Item 1" << endl << "Item 2" << endl << "item 3" << endl << "Item 4" << endl << "Digite 5 para sair" << endl;
	//	cin >> v;
		v++;
		cout << "Item 1: ";
		cin >> i1;
		cout << "Item 2: ";
		cin >> i2;
		cout << "Item 3: ";
		cin >> i3;
		cout << "Item 4: ";
		cin >> i4;
		rendimento = 200 + (((i1 * 239.99) + (i2 * 129.75) + (i3 * 99.93) + (i4 * 350.89)) * 0.09);
		cout << "Rendimento do vendedor " << v << " = " << rendimento << endl;
		cout << "0 para add outro vendedor, 1 para sair" << endl;
		cin >> s;
		}*/

		/*for (v = 1; v > 0 && s == 0; v++)
		{
			cout << "Item 1: ";
			cin >> i1;
			cout << "Item 2: ";
			cin >> i2;
			cout << "Item 3: ";
			cin >> i3;
			cout << "Item 4: ";
			cin >> i4;
			rendimento = 200 + (((i1 * 239.99) + (i2 * 129.75) + (i3 * 99.93) + (i4 * 350.89)) * 0.09);
			cout << "Rendimento do vendedor " << v << " = " << rendimento << endl;
			cout << "0 para add outro vendedor, 1 para sair" << endl;
			cin >> s;
		}
		system("pause");
	}*/

	//EXERCICIO 3
	/*Escreva um programa que permita fazer o pagamento de um funcionário, de acordo com a
	seguinte tabela:
	1	diretor		10000,00
	2	gerente		6000,00 + bonus
	3	desenvolver	50/hora
	4	vendedor	1000,00 + 10%
	O programa deve ler o nome do funcionário, o código correspondente ao seu cargo e indicar
	o valor a ser recebido. Caso haja dados extras necessários para o cálculo do pagamento, o programa
	deve perguntar por eles somente se houver necessidade.*/


	/*void main()
	{
		string nome;
		int c, s = 0, h, i = 0;
		float vendas, bonus;

		/*while (s == 0)
		{
			cout << "Nome do funcionario: ";
			cin >> nome;
			cout << "1 - Diretor\n" << "2 - Gerente\n" << "3 - Desenvolvedor\n" << "4 - Vendedor\n" << "Cargo do funcionario: " << endl;
			cin >> c;

			if (c == 1)
			{
				cout << nome << " R$ " << 10000 << endl << endl;
				cout << "Digite 1 para terminar ou 0 para continuar: ";
				cin >> s;
			}
			else if (c == 2)
			{
				cout << "Valor do bonus: ";
				cin >> bonus;
				cout << nome << " R$ " << (6000 + bonus) << endl << endl;
				cout << "Digite 1 para terminar ou 0 para continuar: ";
				cin >> s;
			}
			else if (c == 3)
			{
				cout << "Horas: ";
				cin >> h;
				cout << nome << " R$: " << (50 * h) << endl << endl;
				cout << "Digite 1 para terminar ou 0 para continuar: ";
				cin >> s;
			}
			else if (c == 4)
			{
				cout << "Vendas: ";
				cin >> vendas;
				cout << nome << " R$: " << (1000 + (vendas * 0.1)) << endl << endl;
				cout << "Digite 1 para terminar ou 0 para continuar: ";
				cin >> s;
			}
		}*/

		/*for ( ; i >= 0 && s == 0; i++) //não precisei iniciar a variavel, só deixei um espaço no inicio.
		{
			{
				cout << "Nome do funcionario: ";
				cin >> nome;
				cout << "1 - Diretor\n" << "2 - Gerente\n" << "3 - Desenvolvedor\n" << "4 - Vendedor\n" << "Cargo do funcionario: " << endl;
				cin >> c;

				if (c == 1)
				{
					cout << nome << " R$ " << 10000 << endl << endl;
					cout << "Digite 1 para terminar ou 0 para continuar: ";
					cin >> s;
				}
				else if (c == 2)
				{
					cout << "Valor do bonus: ";
					cin >> bonus;
					cout << nome << " R$ " << (6000 + bonus) << endl << endl;
					cout << "Digite 1 para terminar ou 0 para continuar: ";
					cin >> s;
				}
				else if (c == 3)
				{
					cout << "Horas: ";
					cin >> h;
					cout << nome << " R$: " << (50 * h) << endl << endl;
					cout << "Digite 1 para terminar ou 0 para continuar: ";
					cin >> s;
				}
				else if (c == 4)
				{
					cout << "Vendas: ";
					cin >> vendas;
					cout << nome << " R$: " << (1000 + (vendas * 0.1)) << endl << endl;
					cout << "Digite 1 para terminar ou 0 para continuar: ";
					cin >> s;
				}
			}
		}
		system("pause");
	}*/

	//EXERCICIO 4
	/*Faça um programa para imprimir os números de 1 (inclusive) a 10 (inclusive) em ordem
	decrescente.*/

	/*void main()
	{
		int n = 10;

		/*while (n != 0)
		{
			cout << n << endl;
			n--;
		}*/

		/*for (n = 10; n != 0; n--)
		{
			cout << n << endl;
		}
		system("pause");
	}*/

	//EXERCICIO 5
	/*Faça um programa para imprimir os 10 primeiros números inteiros maiores que 100.*/

	/*void main()
	{
		int n = 100;

		/*while (n >= 100 && n < 110)
		{
			++n;
			cout << n << endl;
			;
		}*/

		/*for (int i = 100; i <= 110; i++)
		{
			cout << i << endl;
		}

		system("pause");
	}*/

	//EXERCICIO 6
	/*Faça um programa para ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive)
	e N (inclusive). Considere que o N será sempre maior que ZERO.*/

	/*void main()
	{

		int n, c = 1;

		cout << "Numero: ";
		cin >> n;

		while (c <= n)
		{

			cout << c << endl;
			c++;
		}

		cout << endl << endl;

		for (int i = 1; i <= n; i++)
		{
			cout << i << endl;

		}
		system("pause");
	}*/

	//EXERCICIO 7
	/*Faça um programa para ler um valor inteiro e escrever a tabuada de 1 a 10 do valor lido.*/

	/*void main()
	{
		int n, c = 1;

		cout << "Number: ";
		cin >> n;

		while (c <= 10)
		{
			cout << c << " x " << n << " = " << (c * n) << endl;
			c++;

		}

		cout << endl << endl;

		for (c = 1; c <= 10; c++)
		{
			cout << c << " x " << n << " = " << (c * n) << endl;
		}
		system("pause");
	}*/

	//EXCERCICIO 8
	/*Faça um programa que escreva os números pares entre 1 e 1000.*/

	/*void main()
	{
		int c = 0;



		/*while (c <= 1000)
		{
			c++;
			int m = (c % 2);

			if (m == 0)
			{
				cout << c << endl;

			}
		}*/
		/*cout << endl << endl;

		for (int i = 1; i <= 1000; i++)
		{
			if ((i % 2) == 0)
			{
				cout << i << endl;
			}
		}

	system("pause");
}*/

//EXERCICIO 9
/*Faça um programa que leia as notas dos Graus A e B de 40 alunos e calcule a média de cada
um deles. O programa deve escrever se o aluno foi aprovado ou reprovado. Para aprovação a
média deve ser igual ou superior a 6,0.*/

/*void main()
{
	int a, b, aluno = 1, media;

	while (aluno < 41)
	{
		cout << "Aluno " << aluno << endl;
		cout << "Nota A: ";
		cin >> a;
		cout << "Nota B: ";
		cin >> b;
		media = ((a + b) / 2);

		if (media >= 6)
		{
			cout << "Aprovado" << endl;
		}
		else
		{
			cout << "Reprovads" << endl;
		}

		cout << endl;

		aluno++;

	}*/

	/*for (int i = 1; i < 41; i++)
	{
		cout << "Aluno " << i << endl;
		cout << "Nota A: ";
		cin >> a;
		cout << "Nota B: ";
		cin >> b;
		media = ((a + b) / 2);

		if (media >= 6)
		{
			cout << "Aprovado" << endl;
		}
		else
		{
			cout << "Reprovads" << endl;
		}

		cout << endl;
	}
	system("pause");
}*/

//EXERCICIO 10
/*Faça um programa que desenhe um retângulo de X caracteres de largura por Y linhas
de altura usando asteriscos (*). Solicite que o usuário informe os valores de X e Y.*/

/*void main()
{
	int x, y, c1 = 1, c2 = 1;

	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;

	while (c1 <= y)
	{
		cout << endl;
		while (c2 <= x)
		{
			cout << '*';
			c2++;
		}
		c2 = 1;
		c1++;
	}

	cout << endl << endl;*/

	/*cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;

	for (c1 = 1; c1 <= y; c1++)
	{
		cout << endl;
		for (c2 = 1; c2 <= x; c2++)
		{
			cout << '*';
		}
		c2 = 1;
	}

	cout << endl << endl;

	system("pause");
}*/

//EXERCICIO 11
/*Faça um programa que receba dois valores maiores do que dois e imprima os números
primos existentes entre eles incluindo-os. O programa deve solicitar novamente os valores
caso o usuário digite um valor menor que dois ou caso o valor final seja menor que o
inicial. Veja o exemplo:
Valor inicial: 5
Valor final: 30
Número primos entre 5 e 40: 5 7 11 13 17 19 23 29*/

//UNFUCK THIS LATER

/*void main()
{
	int n1, n2, c = 0, p = 1, m, d = 0;
	cout << "Numero 1: ";
	cin >> n1;

	while (n1 < 2)
	{
		cout << "Numero menor que dois." << endl;
		cout << "Numero 1: ";
		cin >> n1;

	}

	cout << "Numero 2: ";
	cin >> n2;
	while (n2 < 2 || n1 > n2)
	{
		cout << "Numero menor que dois ou menor do que o primeiro numero." << endl;
		cout << "Numero 2: ";
		cin >> n2;
	}

	c = (n1 ;
	//p = (n1 - 1);
	while (c <= n2)
	{
		while (p <= c)
		{
			m = c % p;
			if (m == 0)
			{
				d++;

			}

			p++;
		}
		if (d < 2)
		{
			cout << c << endl;
		}
		d = 0;
		p = 2;
		c++;
	}
	system("pause");
}*/

//EXERCICIO 12
/*Faça um programa que apresenta a seguinte saída, perguntando ao usuário o número máximo. Obs. Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
	3 4 5 6 7
	  4 5 6
		5	*/

/*void main()
{
	int n, c1 = 1, c2 = 0, c3 = 1, e = 0;


	cout << "Numero (impar): ";
	cin >> n;


	while (c1 <= n)
	{
		c3 = 1;
		while (c3 <= (c1 - 1))
		{
			cout << " ";
			c3++;
		}
		c2 = c1;
		while (c2 <= n)
		{
			cout << c2;
			c2++;
		}

		cout << endl;
		c1++;
		n--;
	}
	system("pause");
}*/

	/*for (c1 = 1; c1 <= n; c1++)
	{
		for (c3 = 1; c3 <= (c1 - 1); c3++)
		{
			cout << " ";
		}
		for (c2 = c1; c2 <= n; c2++)
		{
			cout << c2;
		}
		cout << endl;
		n--;
	}
	system("pause");
}*/


//EXERCICIO 13
/*Faça um programa para mostrar a tabuada de 1 a 10 dos números de 1 a 10. O programa deve escrever os números sendo
multiplicados e o resultado. Por exemplo: 2 x 5 = 10. Ao final de cada tabuada deve haver um separador, por exemplo: -----------.*/

/*void main()
{
	int n = 1, t = 1, c = 0;

	while (t <= 10)
	{
		while (n <= 10)
		{
			cout << t << " x " << n << " = " << n * t << endl;
			n++;
		}
		cout << "-------------" << endl;
		n = 1;
		t++;
	}*/

	/*for (t = 1; t <= 10; t++)
	{
		for (n = 1; n <= 10; n++)
		{
			cout << t << " x " << n << " = " << n * t << endl;
		}
		cout << "-------------" << endl;
		n = 1;
	}



	system("pause");
}*/

//EXERCICIO 14
/*Faça um programa que escreva os números primos entre 1 e 1000 e diga quantos números primos encontrou.*/

void main()
{
	int c1 = 1, c2 = 1, m = 0, p = 0;

	while (c1 <= 100)
	{
		
		while (c2 < c1)
		{
			if (c1 % c2 == 0)
			{
				m++;
			}
			c2++;
			
		//	cout << c1 << " " << c2 << " " << c1 % c2 << " " << m << " "<< endl;
		}
		if (m < 2 && m != 0)
		{
			p++;

		}
		//cout << endl << m << endl;
		c2 = 1;
		c1++;
		m = 0;
		
		//cout << endl << m << endl;
		//cout << endl << p << endl;
	
	}
	//cout << endl << m << endl;
	cout << endl << "Existem " << p << " numeros primos entre 1 e 1000." << endl;





	system("pause");
}

//UNFUCK THIS

//EXERCICIO 15
/*Faça um programa que leia um caractere e depois imprima uma sequência conforme o exemplo abaixo, em que o usuário digitou a letra F. Use laços aninhados.
F
FF
FFF
FFFF
FFFFF*/

/*void main()
{
	int c1 = 0, c2 = 0, c3 = 1;
	char letra;

	cout << "Letra: ";
	cin >> letra;

	while (c1 < 5)
	{
		while (c2 < c3)
		{
			cout << letra;
			c2++;
		}
		cout << endl;
		c1++;
		c3++;
		c2 = 0;
	}*/

	/*for (c1 = 0; c1 < 5; c1++)
	{
		for (c2 = 0; c2 < c3; c2++)
		{
			cout << letra;
		}
		cout << endl;
		c3++;
		c2 = 0;
	}


	system("pause");
}	*/

//EXERCICIO 16
/*Faça um programa que leia um número n e imprima uma matriz n por n contendo o valor da multiplicação das linhas pelas colunas. O exemplo abaixo mostra
o que deve ser impresso, considerando que o número lido tenha sido o 4:
1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16*/

/*void main()
{
	int n = 0, c1 = 0, c2 = 1, c3 = 1;

	cout << "Numero: ";
	cin >> n;

	/*while (c1 < n)
	{
		while (c2 <= n)
		{
			cout << c2 * c3 << "  ";
			c2++;
		}
		cout << endl;
		c3++;
		c2 = 1;
		c1++;
	}*/

	/*for (c1 = 0; c1 < n; c1++)
	{
		for (c2 = 1; c2 <= n; c2++)
		{
			cout << c2 * c3 << "  ";
		}
		cout << endl;
		c3++;
		c2 = 1;
	}


	system("pause");
}*/