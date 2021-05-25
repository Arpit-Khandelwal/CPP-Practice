    import java.util.*;
    class A_Presents
    {
        public static void main(String[] args) {
            
            Scanner sc = new Scanner(System.in);
            int n=sc.nextInt();
            int arr[]=new int[n];
            for(int i=1;i<=n;i++) arr[i]=sc.nextInt();
            for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            if(i==arr[j]) System.out.print(j+" ");
        }
    }