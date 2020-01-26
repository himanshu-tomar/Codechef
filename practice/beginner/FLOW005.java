package practice.beginner;

import java.util.Scanner;

class Codechef{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt()) T = scanner.nextInt();
        while (T > 0){
            int n=scanner.nextInt();
            int arr[]={1,2,5,10,50,100};
            int count=0;
            for(int i=5;i>=0;i--){
                if(n>=arr[i]){
                    count+=n/arr[i];
                    n=n%arr[i];
                    if(n==0) break;                    
                }
            }
            System.out.println(count);

            T--;
        }
        scanner.close();
    }
}
