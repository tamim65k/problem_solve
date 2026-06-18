//import java.io.*;
//import java.util.StringTokenizer;
//
//public class test {
//    public static void main(String[] args) throws IOException {
//        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
//        StringTokenizer tokenizer = new StringTokenizer(reader.readLine());
//        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));//fast output
//
//        int coin = Integer.parseInt(tokenizer.nextToken());
//        int sum = Integer.parseInt(tokenizer.nextToken());
//
//        int t = sum/coin;
//        int r;
//        if (sum % coin == 0) r = sum/coin;
//        else r = t + 1;
//
//        writer.write(r+"
");
//        writer.flush();
//        writer.close();
//
//    }
//}
 
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class test {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String[] e = reader.readLine().split(" ");
        int coin = Integer.parseInt(e[0]);
        int sum = Integer.parseInt(e[1]);
 
        System.out.println((sum%coin == 0) ? sum/coin : (sum/coin)+1 );
        reader.close();
    }
}