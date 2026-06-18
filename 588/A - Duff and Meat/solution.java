import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class DuffAndMeat {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int days = Integer.parseInt(reader.readLine());
        int total = 0;
        int min = 100;
 
        for (int i=0; i<days; i++){
            String[] c = reader.readLine().split(" ");
            int a = Integer.parseInt(c[0]);
            int b = Integer.parseInt(c[1]);
            min = Math.min(b,min);
            total += a * min;
        }
 
        System.out.println(total);
        reader.close();
    }
}