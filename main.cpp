#include <iostream>

using namespace std;

bool pertenceFibonacci(int num){
    int a = 0, b = 1, next = 0;

    if(num == 0 || num == 1)
        return true;

    while(next < num){
        next = a + b;
        a = b;
        b = next;
    }

    return (num == next);
}

int main()
{
    //Q1
    int n = 34;

    if(pertenceFibonacci(n)) {
        cout << "O numero " << n << " pertence a sequencia de Fibonacci" << endl;
    } else {
        cout << "O numero " << n << " nao pertence a sequencia de Fibonacci" << endl;
    }

    //Q2
    string a = "Abacate";
    int c = 0;

    for(int i = 0; i < a.length(); i++)
        if(a[i] == 'a' || a[i] == 'A')
            c++;

    if (c > 0) {
        cout << "A letra 'a' (maiuscula ou minuscula) aparece " << c << " vezes." << endl;
    } else {
        cout << "A letra 'a' (maiuscula ou minuscula) nao foi encontrada." << endl;
    }

    return 0;
}
