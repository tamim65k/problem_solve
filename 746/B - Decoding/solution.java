import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class Decoding {
    public static String decode(String encoded){
        StringBuilder original = new StringBuilder();
 
        for (int i= encoded.length()-1; i>=0; i--){
            char letter = encoded.charAt(i);
            int currentLength = original.length();
            int mid = currentLength / 2;
 
            original.insert(mid, letter);
        }
 
        return original.toString();
    }
 
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(reader.readLine());
        String encoded = reader.readLine();
 
        System.out.println(decode(encoded));
        reader.close();
    }
}