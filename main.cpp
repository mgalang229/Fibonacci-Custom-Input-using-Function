#include <iostream>
using namespace std;

void fibo(int a, int b, int p){
    int cnt = 0, t;
    while(cnt != 15 - 2){
        t = a + b;
        a = b;
        cout << t << " ";
        ++cnt;
        b = t;
    }
}
int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    printf("%d %d " , n1, n2);
    fibo(n1, n2, n3);
    return 0;
}