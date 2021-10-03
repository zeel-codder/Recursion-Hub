/* Here is a java program that returns the count of different characters in a given String*/ 

import java.util.Scanner;
class Main{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		char c[] =str.toCharArray();
		int l=str.length();
		int []freq=new int[256];
		for(int i=0;i<l;i++)
		{
			char ch=c[i];
			if(ch!=' ')
			{
			   freq[ch]++;
		    }
			if(freq[i]==1)
			{
				for(int j=i;j<l;j++)
				{
					if(c[j]==ch)
					{
						freq[(int)ch]++;
					}
				}
			}
		}
		for(int i=0;i<256;i++)
		{
             if(freq[i]!=0)
             {
             	System.out.println((char)i+"-"+freq[i]);
             }
		}
	}
}
