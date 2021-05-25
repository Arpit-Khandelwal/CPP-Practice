import java.util.*;

class A_Beautiful_Year {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = Integer.parseInt(sc.next());
    while (check(n)) n++;
    cout << n;
  }

  boolean check(int n) {
    String s = n;
    for (int i = 0; i < 4; i++) for (int j = i + 1; j < 4; j++) if (
      s[i] == s[j]
    ) return true;
    return false;
  }
}
