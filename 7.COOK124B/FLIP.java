/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    String as = sc.next() , bs = sc.next() ;
		    char[] a = as.toCharArray();
		    char[] b = bs.toCharArray();
		    int n = as.length();
		    int c=0;
		    for(int i=0;i<n;i++){
		        if(a[i]==b[i]) continue;
		        int p=i;
		        while(p<n && (a[p] != b[p])){
		            a[p] = b[p];
		            p = p+2;
		        }
		        c++;
		    }
		    System.out.println(c);
		}
	}
}