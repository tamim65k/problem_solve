import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class test {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(reader.readLine());
        while (t-->0){
            int s = Integer.parseInt(reader.readLine());
            if (s>=102 && s<=109 || s>=1010 && s<=1099) System.out.println("yes");
            else System.out.println("no");
        }
        reader.close();
    }
}