import java.util.*;

class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt())
            T = scanner.nextInt();
        int temp = T;
        int total_profit = 0;
        while (T > 0) {
            
            int n = scanner.nextInt();
            if(n==0){
                System.out.println("-400");
                total_profit-=400;
                T--;
                continue;
            }
            int other_array[] = new int[4];
            int r = 0, c=0;
            int daily_profit = 0;
            int max =0;
            int past[][]=new int[4][4];
            int [][] table = new int[4][4];
            int t = 0;
            char m = ' ';
            for (int i = 0; i < n; i++) {
                m = scanner.next().charAt(0);
                t = scanner.nextInt();
                table[m-'A'][(t/3)-1]++;                
            }

            
            for(int i=0;i<4;i++){ //1st LOOP
                for(int j=0;j<4;j++){
                    if(table[i][j]>max){
                        r=i;c=j;
                        max= table[i][j];
                    }
                }
            }
            other_array[3]=max;
            past[r][0]=past[r][1]=past[r][2]=past[r][3]=-1;
            past[0][c]=past[1][c]=past[2][c]=past[3][c]=-1;

            r=c=max=0;
            for(int i=0;i<4;i++){ //2nd LOOP
                for(int j=0;j<4;j++){
                    if(past[i][j]>=0)
                    if(table[i][j]>max){
                        r=i;c=j;
                        max= table[i][j];
                    }
                }
            }
            other_array[2]=max;
            past[r][0]=past[r][1]=past[r][2]=past[r][3]=-1;
            past[0][c]=past[1][c]=past[2][c]=past[3][c]=-1;

            r=c=max=0;
            for(int i=0;i<4;i++){ //3rd LOOP
                for(int j=0;j<4;j++){
                    if(past[i][j]>=0)
                    if(table[i][j]>max){
                        r=i;c=j;
                        max= table[i][j];
                    }
                }
            }
            other_array[1]=max;
            past[r][0]=past[r][1]=past[r][2]=past[r][3]=-1;
            past[0][c]=past[1][c]=past[2][c]=past[3][c]=-1;

            r=c=max=0;
            for(int i=0;i<4;i++){ //4th LOOP
                for(int j=0;j<4;j++){
                    if(past[i][j]>=0)
                    if(table[i][j]>max){
                        r=i;c=j;
                        max= table[i][j];
                    }
                }
            }
            other_array[0]=max;
            
            for(int i=3;i>=0;i--){
                
                if(other_array[i]>0)
                daily_profit+=(other_array[i]*((i+1)*25));
                else
                daily_profit-=100;
                //System.out.println("i= "+i+", arr[i]="+other_array[i]+", dP= "+daily_profit);
            }

            System.out.println(daily_profit);

            total_profit += daily_profit;
            T--;
        }
        if(temp>0)
        System.out.println(total_profit);
        scanner.close();
    }
}
