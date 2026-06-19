/*To print Fibonacci series
the logic: The previous numbers are added to give next number
example: 1 1 2 3 5 8 13....
1 + 1= 2--> 2 + 1= 3--> 2 + 3= 5 --> 3 + 5 =8 --> 5 + 8=13 so on....*/
#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";

        c = a + b;
        a = b; //to slide numbers 0=a 1=b then c=1 ,for next iteration a=b=1 and b=c=1 then output(c)=3 similarly for next iteration a=1 b=3 and c=5
        b = c;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    fibonacci(n);

    return 0;
}
