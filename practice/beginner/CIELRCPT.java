package practice.beginner;

import java.util.Scanner;

class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt())
            T = scanner.nextInt();
        while (T > 0) {
            int p = scanner.nextInt();
            int count = 0;
            for (int i = 11; i >=0; i--) {
                int n = (int)Math.pow(2,i);
                if(n<=p){
                    count+=(p/n);
                    p=p%n;
                }
            }
            System.out.println(count);
            T--;
        }
        scanner.close();
    }
}
