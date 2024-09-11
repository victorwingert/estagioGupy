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




    return 0;
}
