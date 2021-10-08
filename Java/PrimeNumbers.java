package Java;

import java.util.Scanner;

public class PrimeNumbers {
    public static void main(String[] args) {
        System.out.println("Enter the number upto u want all primes");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean[] primes = new boolean[n + 1];
        sieve(n, primes);
        sc.close();
    }

    // false in array means number is prime
    static void sieve(int n, boolean[] primes) {
        for (int i = 2; i * i <= n; i++) {
            if (!primes[i]) {
                for (int j = i * 2; j <= n; j += i) {
                    primes[j] = true;
                }
            }
        }

        for (int i = 2; i <= n; i++) {
            if (!primes[i]) {
                System.out.print(i + " ");
            }
        }
    }
}
