#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> v;

	int pedras, tentativas;
	int caso = 1;

	for(;;)
	{

		cin >> pedras;
		cin >> tentativas;

		if(pedras == 0 and tentativas == 0)
			break;

		int valor;

		for(int i = 0; i < pedras; ++i)
		{
			cin >> valor;
			v.push_back(valor);
		}

		sort(v.begin(), v.end());

		vector<int> respostas;
		int resposta;

		for(int i = 0; i < tentativas; i++)
		{
			cin >> resposta;
			respostas.push_back(resposta);
		}
		cout << "CASE# " << caso << ":\n";

		for(int i = 0; i < tentativas; i++)
		{
			auto a = find(v.begin(), v.end(), respostas[i]);

			if(a != v.end())
			{
				cout << respostas[i] << " found at " << distance(v.begin(), a) + 1 << endl;
			}
			else
			{
				cout << respostas[i] << " not found" << endl;
			}
		}

		caso++;
		v.erase(v.begin(), v.end());

	}

	return 0;
}
