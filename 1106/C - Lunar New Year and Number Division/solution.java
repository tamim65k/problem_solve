import java.util.Arrays;
import java.util.Scanner;
public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(); 
        int[] aOfN = new int[n];
        for (int i=0; i<n; i++){
            aOfN[i] = scanner.nextInt();
        }
 
        Arrays.sort(aOfN);
        long sumOfSquares = 0;
 
        for (int i=0; i<n/2; i++){
            int groupSum = aOfN[i] + aOfN[n-1-i];
            sumOfSquares += (long) groupSum * groupSum;
        }
        System.out.println(sumOfSquares);
        scanner.close();
    }
}