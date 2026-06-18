import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
 
//Read Input: Number of test cases, number of planks, and their lengths.
//Sort Planks: For each test case, sort the planks in descending order.
//Find Maximum Side: Check from the largest possible side downwards to find the maximum valid square side length.
 
public class MaximumSquare {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int k = Integer.parseInt(reader.readLine());// number of testcases
 
        StringBuilder result = new StringBuilder();
 
        for (int t=0; t<k; t++){
            int n = Integer.parseInt(reader.readLine());//number of planks
            String[] plankStrings = reader.readLine().split(" ");
            int[] planks = new int[n];
            for (int i=0; i<n; i++){
                planks[i] = Integer.parseInt(plankStrings[i]);
            }
            result.append(maxSqure(n,planks)).append("
");
        }
        
        System.out.println(result.toString());
        reader.close();
    }
 
    private static int maxSqure(int n, int[] planks){
        Arrays.sort(planks);
        int maxSide = 0;
        for (int i=1; i<=n; i++){
            if (planks[n-i] >= i){
                maxSide = i;
            }
        }
 
        return maxSide;
    }
}