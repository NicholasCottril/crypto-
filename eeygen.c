int main(){
    
}

is_prime = lambda n : any([n % i for i in range(2, int(n **.5))])

int isPrime(n){
    for (int i = 2; i < sqrt(n); i++){
        if (!n % i){
            return 0;
        }
    }
    return 1;
}

int sixkp1(k){
is_prime = lambda n : any([n % i for i in range(2, int(n **.5))])
    candidate = 6 * k + 1
    while not is_prime(candidate):
        candidate += 6
    return candidate

    int candidate = 6 * k + 1;
    while !isPrime(candidate){
        candidate += 6;
    }
    return candidate;
}