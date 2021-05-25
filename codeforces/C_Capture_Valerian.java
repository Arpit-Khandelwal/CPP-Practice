/*Problem Description:
Convert c(2nd line input) from  base a to base b.
if b==R, convert c to roman number
*/
import java.util.*;
import java.io.*;
public class C_Capture_Valerian
{
    static int a;
    static String b;
    public final static void main(String args[])throws IOException
    {
    Scanner sc=new Scanner(System.in);
    a=sc.nextInt();
    b=sc.next();
    String c=sc.next();
    if("R".equals(b)) convertRoman(c);
    int tempb=Integer.parseInt(b);
    if(a==tempb) System.out.println(c);
    else  System.out.println((Integer.toString(Integer.parseInt(c, a), Integer.parseInt(b)));
    }
    static void convertRoman(String tc)
    {
        int c=Integer.parseInt(Integer.toString(Integer.parseInt(tc, a),10));
        int[] values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String[] romanLiterals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        StringBuilder roman = new StringBuilder();

        for (int i = 0; i < values.length; i++) {
            while (c >= values[i]) {
                c -= values[i];
                roman.append(romanLiterals[i]);
            }
        }
        System.out.println(roman.toString());
        System.exit(0);
    }
}