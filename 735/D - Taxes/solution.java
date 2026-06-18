import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class Taxes {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        long n = Long.parseLong(reader.readLine());
 
        System.out.println(minTax(n));
        reader.close();
    }
 
    private static long minTax(long n){
        if (isPrime(n)) return 1;
        else if (n % 2 == 0) return 2;
        else if (n % 2 == 1 && isPrime(n - 2)) return 2;
        else return 3;
    }
 
    public static boolean isPrime(long n){
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (long i = 5; i*i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}