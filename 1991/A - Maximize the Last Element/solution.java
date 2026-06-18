import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class MaximizeTheLastElement {
 
    public static int findMax(int[] a){
        int max = a[0];
        if (a.length<1) return max;
        for (int i=0; i<a.length; i+=2){
            if (a[i] > max){
                max = a[i];
            }
        }
        return max;
    }
 
    public static void main(String[] args) throws IOException{
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(reader.readLine());
        while (t-- > 0){
            int n = Integer.parseInt(reader.readLine());
            int[] a = new int[n];
            String[] elements = reader.readLine().split(" ");
            for (int i=0; i<n; i++){
                a[i] = Integer.parseInt(elements[i]);
            }
            System.out.println(findMax(a));
        }
        reader.close();
    }
}