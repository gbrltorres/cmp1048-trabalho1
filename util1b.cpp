#include <util1b.h>

double calculate_volume_sphere(double r){//questao 2
    return 4*PI/3*pow(r,2);
}

void factorial_of_large_number(int n){//questao 6
    int* arr = new int[MAX];
    int carry, size;
    arr[0] = 1;
    size = 1;

    for (int i=2; i<=n ; i++) {
        carry = 0;
        for (int j=0; j<size; j++) {
            int prod = arr[j]*i;
            arr[j] = (prod + carry) % 10;
            carry = (prod + carry) / 10;
        }
        while (carry > 0) {
            arr[size] = carry % 10;
            carry = carry / 10;
            size++;
        }
    }
    printf("Fatorial: ");
    for (int i=size-1; i>=0; i--)
            cout << arr[i];
    cout << endl;
    delete [] arr;
}

int fibonacci(int n){//questao 8
    if (n <= 1) {
        return n;
    }
    int f1 = 0;
    int f2 = 1;
    for (int i=3; i<=n; i++) {
        int aux = f2;
        f2 += f1;
        f1 = aux;
    }
    return f2;
}

bool is_regular(int n){//questao 9
    int div = 2;
    while (n!=1) {
        if (div > 5) {
            return false;
        }else{
            if(n%div==0){
                if (div != 2 && div != 3 && div != 5) {
                    return false;
                }
                n/=div;
            }else{
                div++;
            }
        }
    }
    return true;
}

//questao 10
unsigned int factorial(int n){
    unsigned int fact = 1;
    for ( ; n>1 ; n--) {
        fact *= n;
    }
    return fact;
}

double combinations(int n, int p){
    unsigned int fn = factorial(n);
    unsigned int fp = factorial(p);
    unsigned int fnp = factorial(n-p);
    return fn/(fp*fnp);
}
//end questao 10
