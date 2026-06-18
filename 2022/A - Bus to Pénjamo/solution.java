import java.util.Scanner;
 
public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        int t = scanner.nextInt();
 
        while (t-- > 0) {
            int n = scanner.nextInt();
            int r = scanner.nextInt();
            int[] a = new int[n];
            int single = 0;
            int happy = 0;
 
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
                r -= a[i] / 2;
                happy += (a[i] / 2) *2;
                a[i] %= 2;
                single += a[i];
            }
 
            if (single <= r) {
                happy += single;
            } else {
                int extra = single - r;
                happy += r - extra;
            }
 
            System.out.println(happy);
        }
 
        scanner.close();
    }
}