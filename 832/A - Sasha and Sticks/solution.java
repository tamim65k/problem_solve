import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class test {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String[] num = reader.readLine().split(" ");
        long n = Long.parseLong(num[0]);
        long k = Long.parseLong(num[1]);
        if ((n / k) % 2 == 1){
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        reader.close();
    }
}