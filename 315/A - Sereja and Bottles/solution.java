import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
 
public class test {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
 
        int n = Integer.parseInt(reader.readLine());
        List<int[]> pairs = new ArrayList<>();
 
        for (int i = 0; i < n; i++) {
            String[] input = reader.readLine().split(" ");
            int a = Integer.parseInt(input[0]);
            int b = Integer.parseInt(input[1]);
            pairs.add(new int[]{a, b});
        }
 
        int cnt = 0;
 
        for (int i = 0; i < n; i++) {
            boolean flag = false;
            for (int j = 0; j < n; j++) {
                if (i != j && pairs.get(i)[0] == pairs.get(j)[1]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                cnt++;
            }
        }
 
        System.out.println(cnt);
    }
}