#include <bits/stdc++.h>

using namespace std;

typedef struct Pessoa
{
    string nome;
    int idade;
    int altura;
} pessoa;

int compare(const pessoa& p1, const pessoa& p2)
{
    if(p1.idade > p2.idade)
        return p1.idade > p2.idade;

    else if(p1.idade == p2.idade)
        return p1.altura > p2.altura;
}


int main(void)
{
    vector<int> v {102, 2, 340, 450, 50};
    vector<pessoa> p;

    pessoa novo;

    novo.nome = "Arthur";
    novo.idade = 23;
    novo.altura = 183;

    p.push_back(novo);

    novo.nome = "Carol";
    novo.idade = 27;
    novo.altura = 178;

    p.push_back(novo);

    novo.nome = "Maria";
    novo.idade = 70;
    novo.altura = 162;

    p.push_back(novo);

    novo.nome = "Antonio";
    novo.idade = 70;
    novo.altura = 180;

    p.push_back(novo);


    sort(p.begin(), p.end(), compare);


    for(auto i : p)
        cout << i.nome << endl << i.idade << endl << i.altura << endl;;

    return 0;
}