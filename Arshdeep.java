import java.util.*;
class Arshdeep
{
    public static void main(String[] args)
    {
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of registrations");
        n=sc.nextInt();
        String s1[]=new String[n];
        String s2[]=new String[n];
        String s3[]=new String[n];
        System.out.print("Enter number of registrations in event 1:")
        int a=sc.nextInt();
        System.out.println("\nEnter the registration numbers:")
        for (int i=0; i<a; i++) s1[i]=sc.nextLine();
        System.out.print("Enter number of registrations in event 2:")
        int b=sc.nextInt();
        System.out.println("\nEnter the registration numbers:")
        for (int i=0; i<b; i++) s2[i]=sc.nextLine();
        System.out.print("Enter number of registrations in event 3:")
        int c=sc.nextInt();
        System.out.println("\nEnter the registration numbers:")
        for (int i=0; i<c; i++) s3[i]=sc.nextLine();
        int count=0;
        Arays.sort(s1);
        Arrays.sort(s2);
        Arrays.sort(s3);
        
        for (int i=0; i<a;i++)
        {
            for(int j=0; j<b;j++)
            {
                for(int k=0; k<c;k++)
                {
                    if(s1[i]==s2[j] && s1[i]==s3[k]) System.out.println(s1[i]+" has registered in  more than two  events");
            }
        }
        
    }
    }
}