import java.util.*;
class A_George_and_Accommodation
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int p,q,count=0;
        for (int i = 0; i <n;i++)
        {
            p=sc.nextInt();
            q=sc.nextInt();
            if (q-p>=2) count++;
        }
        System.out.println(count);
    }
}