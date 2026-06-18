import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class test {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(reader.readLine());
 
        while (t-->0){
            int n = Integer.parseInt(reader.readLine());
            String s = reader.readLine();
 
            if (s.contains("...")){
                System.out.println(2);
            } else if (s.contains("..") || s.contains(".")) {
                int count = 0;
                for (int i=0; i<s.length(); i++){
                    if (s.charAt(i) == '.'){
                        count++;
                    }
                }
                System.out.println(count);
            } else {
                System.out.println(0);
            }
        }
 
        reader.close();
    }
}