import java.util.*;
 
public class MeaningMean {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int totalCase = scanner.nextInt();
 
        while (totalCase-- > 0){
            
            int n = scanner.nextInt();
            int[] arr = new int[n];
            for (int i=0; i<n; i++){
                arr[i] = scanner.nextInt();
            }
 
            Arrays.sort(arr);
            int m = (arr[0] + arr[1])/2;
 
            for (int i=2; i<n; i++){
                m = (m + arr[i])/2;
            }
            
            System.out.println(m);
        }
        scanner.close();
    }
}