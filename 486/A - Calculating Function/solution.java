import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
 
public class CalculatingFunction {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        long n = Long.parseLong(reader.readLine());
        
        long result = (n % 2 == 1) ? -(n / 2 + 1): n / 2 ;
        System.out.println(result);
        
        reader.close();
    }
}