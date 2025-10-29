#include <iostream>

using namespace std;

void calcSum (int a, int b){
    cout << "Summa on: " << a+b << endl;
}

void calcDiv (int a, int b){
    if (a == 0 || b == 0){
        cout << "Virhe, ei voi jakaa nollalla!" << endl;
    }
    else{
        cout << "Osamaara on: " << a/b << endl;
    }
}

int retSum(int a, int b){
    return a+b;
}

float retDiv(int a, int b){
    if(b == 0){
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    else{
        return  a/b;
    }
}
int main()
{
    int a, b;
    cout << "Anna luku" << endl;
    cin >> a;
    cout << "Anna toinenkin luku" << endl;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int sumResult = retSum(a, b);
    cout << "retSum:n palautettu arvo on: " << sumResult << endl;

    try {
        float result = retDiv(a,b);
        cout << "retDiv:n palautettu arvo on: " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;
}
