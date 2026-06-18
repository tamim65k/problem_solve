import java.util.Arrays;
import java.util.Scanner;
 
public class FairPlayoff {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0){
            int[] a = new int[4];
            for (int i=0; i<4; i++){
                a[i] = scanner.nextInt();
            }
 
            int[] f = new int[2];
            if (a[0] > a[1]){
                f[0] = a[0];
            } else {
                f[0] = a[1];
            }
            if (a[2] > a[3]){
                f[1] = a[2];
            } else {
                f[1] = a[3];
            }
 
            Arrays.sort(a);
            int count = 0;
            for (int i : f){
                if (i == a[2] || i == a[3]){
                    count++;
                }
            }
            System.out.println((count==2) ? "YES" : "NO");
        }
    }
}