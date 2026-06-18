import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class A1896 {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(reader.readLine());
        for (int i=0; i<n; i++){
            int a = Integer.parseInt(reader.readLine());
            String[] e = reader.readLine().split(" ");
            int b = Integer.parseInt(e[0]);
            System.out.println((b == 1) ? "yes" : "no");
        }
        reader.close();
    }
}