
import java.util.*;
import java.lang.*;
import java.io.*;


class chefAndRecipe
{
	public static void main (String[] args) 
	{
		
				Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		while(T-->0)
		{
			int N=sc.nextInt();
			int[] A=new int[N];
			int[] B=new int[N];
			int[] C=new int[N];
			int i=0;
			for(int s=0;s<N;s++)
			{
				A[s]=sc.nextInt();
			}
			int k=1,t=0;
			for( i=1;i<N;i++)
			{
				if(A[i]==A[i-1])
					k++;
				else
				{
					B[t]=A[i-1];
					C[t]=k;
					t++;
					k=1;
				}
			}
			B[t]=A[i-1];
			C[t]=k;
			t++;
			
			
			
			Arrays.sort(B);
			Arrays.sort(C);
			
			
			
			
			int y=0,g=0;
			for(int m=N-1;m>=1;m--)
			{
				if(B[m]!=0 && B[m-1]!=0)
				{
				if(B[m]==B[m-1])
				{
					y=1;
					break;
				}
				}
			}
			
			if(y==1)
			{
				System.out.println("NO");
			}
			else
			{
				for(int m=N-1;m>=1;m--)
				{
					if(C[m]!=0 && C[m-1]!=0)
					{
					if(C[m]==C[m-1])
					{
						g=1;
						break;
					}
					}
				}
				if(g==1)
					System.out.println("NO");
				else
					System.out.println("YES");
			}
		}
	}
}
