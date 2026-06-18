import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
 
public class test {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(reader.readLine());
 
        while (t-- > 0){
            String[] e = reader.readLine().split(" ");
            int n = Integer.parseInt(e[0]);
            int k = Integer.parseInt(e[1]);
            int[] a = new int[n];
            String[] e1 = reader.readLine().split(" ") ;
            for (int i=0; i<n; i++) {
                a[i] = Integer.parseInt(e1[i]);
            }
            
            int[] sortedA = a.clone();
            Arrays.sort(sortedA);
            
            if (Arrays.equals(a, sortedA) || k > 1){
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
        }
        reader.close();
    }
}