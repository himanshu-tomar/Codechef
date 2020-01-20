package practice.beginner;

import java.math.BigInteger;
import java.util.Scanner;

class Codechef{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt()) T = scanner.nextInt();
        
        while (T > 0){
            int n = scanner.nextInt();
            System.out.println(factorial(n));


            T--;
        }
        scanner.close();
    }
    public static String factorial(int n) {
        BigInteger fact = new BigInteger("1");
        for (int i = 1; i <= n; i++) {
            fact = fact.multiply(new BigInteger(i + ""));
        }
        return fact.toString();
    }
}
