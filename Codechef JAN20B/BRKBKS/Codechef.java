/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = 0;
		if(sc.hasNextInt())
		    t = sc.nextInt();
		else t = 0;
		for(int i=0;i<t;i++){
		    int s = sc.nextInt();
		    
		    int w1 = sc.nextInt();
		    int w2 = sc.nextInt();
		    int w3 = sc.nextInt();
		    int hits = 0;
		    
		        if((w1+w2+w3)<=s){
		            hits = 1;
		        }
		        
		        else if((w1+w2)<=(w2+w3) && (w1+w2)>=w3 && (w1+w2)<=s){
		            hits=2;
		            
		        }
		        else if((w2+w3)<(w1+w2) && (w2+w3)>=w1 && (w2+w3)<=s){
		            hits=2;
		        }
		        else{
		            hits = 3;
		        }
		        
		        System.out.println(hits);
	
		
		}
	}
}
