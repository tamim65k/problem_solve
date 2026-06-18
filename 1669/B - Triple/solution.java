import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class TripleFinderOptimized {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
 
        int t = Integer.parseInt(reader.readLine());
        StringBuilder result = new StringBuilder();
 
        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(reader.readLine());
            String[] elements = reader.readLine().split(" ");
            int[] frequency = new int[n + 1];
            
            for (String element : elements) {
                int num = Integer.parseInt(element);
                frequency[num]++;
            }
 
            boolean found = false;
            for (int j = 1; j <= n; j++) {
                if (frequency[j] >= 3) {
                    result.append(j).append("
");
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.append("-1
");
            }
        }
 
        System.out.print(result.toString());
    }
}