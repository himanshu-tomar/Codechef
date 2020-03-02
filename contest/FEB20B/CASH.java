import java.util.Scanner;

class Codechef{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt()) T = scanner.nextInt();
        while (T > 0){
            int n = scanner.nextInt();
            long k = scanner.nextLong();
            long arr[]=new long[n];
            for(int i=0;i<n;i++){
                arr[i]=scanner.nextLong();
            }
            long sum=0;
            for(int i=0;i<n;i++){
                sum+=arr[i];
            }
            System.out.println(sum%k);

            T--;
        }
        scanner.close();
    }
}
