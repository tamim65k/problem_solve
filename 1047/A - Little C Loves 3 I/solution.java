import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
 
public class test2 {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(reader.readLine());
 
        if ((n - 2) % 3 != 0) {
            System.out.println("1 1 " + (n - 2));
        } else {
            System.out.println("1 2 " + (n - 3));
        }
 
        reader.close();
    }
}