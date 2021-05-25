import java.util.*;
class A_Vanya_and_Fence
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int h=sc.nextInt();
        int temp_h,count=0;
        for (int i=0;i<n;i++)
        {
            temp_h=sc.nextInt();
            if(temp_h>h) count+=2;
            else count++;
        }
        System.out.println(count);
    }
}