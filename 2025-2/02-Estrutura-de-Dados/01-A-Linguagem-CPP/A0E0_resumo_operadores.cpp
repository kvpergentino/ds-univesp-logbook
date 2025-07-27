/*
Resumo dos operadores usados neste exemplo:

*   (asterisco)       → Desreferenciação: acessa o valor apontado por um ponteiro.
                        Também usado para declarar ponteiros.
                        
&   (e comercial)      → Endereço: retorna o endereço de memória de uma variável.
                        Também usado para passagem por referência.

->  (seta)            → Acesso a membros de struct/classe via ponteiro.
                        Ex: ponteiro->membro

.   (ponto)           → Acesso direto a membros de struct/classe.

[]  (colchetes)       → Acesso por índice: usado para acessar elementos de vetores/arrays.

{}  (chaves)          → Inicialização de listas: inicializa vetores ou structs com valores.

#include              → Diretiva para incluir bibliotecas (ex: iostream, vector).

return               → Finaliza a função e retorna um valor (usualmente 0 em main).

std::                → Operador de escopo: indica que você está usando algo do namespace std.

*/

#include <iostream>      // Biblioteca para entrada e saída padrão (cout, cin)
#include <vector>        // Biblioteca para usar o std::vector (vetor dinâmico)

// Definindo uma estrutura chamada Pessoa
struct Pessoa {
    std::string nome;   // Membro da struct: nome (tipo string)
    int idade;          // Membro da struct: idade (tipo inteiro)
};

int main() {
    Pessoa p1 = {"Ana", 30};  // Cria um objeto do tipo Pessoa e já inicializa os campos

    Pessoa* ptr = &p1;  // Declara um ponteiro para Pessoa e armazena o endereço de p1

    std::cout << ptr->nome << std::endl;  // Usa -> para acessar membro via ponteiro (equivalente a (*ptr).nome)
    std::cout << (*ptr).idade << std::endl; // Outra forma de acessar membro via ponteiro (usa * e .)

    std::vector<int> v = {10, 20, 30};  // Cria um vetor dinâmico de inteiros com três elementos

    std::cout << v[1] << std::endl;  // Acessa o segundo elemento do vetor (índice 1 = valor 20)

    return 0;  // Indica que o programa terminou com sucesso
}
