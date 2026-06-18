import java.util.Scanner;
import java.util.stream.IntStream;
 
public class PanoramixsPrediction {
    
    private static boolean isPrime(int num) {
        return num > 1 && IntStream.rangeClosed(2, (int) Math.sqrt(num))
                                    .noneMatch(i -> num % i == 0);
    }
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        
        int nextPrime = IntStream.iterate(n + 1, i -> i + 1)
                                  .filter(PanoramixsPrediction::isPrime)
                                  .findFirst()
                                  .orElse(-1);
        
        System.out.println(nextPrime == m ? "YES" : "NO");
        
        scanner.close();
    }
}