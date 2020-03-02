import java.util.Arrays;
import java.util.Scanner;

class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt())
            T = scanner.nextInt();
        while (T > 0) {
            int n = scanner.nextInt();
            int a[] = new int[n];
            int b[] = new int[n];
            for(int i=0;i<n;i++){
                a[i]=scanner.nextInt();
            }
            for(int i=0;i<n;i++){
                b[i]=scanner.nextInt();
            }
            Arrays.sort(a);
            Arrays.sort(b);
            int sum=0;
            for(int i=0;i<n;i++){
                if(a[i]<b[i]) sum+=a[i];
                else sum+=b[i];
            }
            System.out.println(sum);
            T--;
        }
        scanner.close();
    }
}
