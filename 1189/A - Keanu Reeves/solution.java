import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class test {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(reader.readLine());
        String s = reader.readLine();
 
        int zeroCount = 0;
        int oneCount = 0;
 
        for (char c : s.toCharArray()){
            if (c == '0') zeroCount++;
            else oneCount++;
        }
 
        if (zeroCount != oneCount) {
            System.out.println(1);
            System.out.println(s);
        } else {
            System.out.println(2);
            System.out.println(s.charAt(0) +" "+ s.substring(1));
        }
 
        reader.close();
    }
}