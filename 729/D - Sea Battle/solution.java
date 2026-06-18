import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
 
/**
 Read input values.
Traverse the string s to find all segments of consecutive '0's.
For each segment, calculate the necessary shots.
Output the number of shots and their positions.
 */
public class SeaBattle {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String[] e = reader.readLine().split(" ");
        int n = Integer.parseInt(e[0]);//grid
        int a = Integer.parseInt(e[1]);//ships
        int b = Integer.parseInt(e[2]);//shipLength
        int k = Integer.parseInt(e[3]);//ShotsMade
        String s = reader.readLine();
 
        List<Integer> shots = new ArrayList<>();
 
        for (int i=0; i<=n-b; i++){
            if (s.substring(i, i+b).equals("0".repeat(b))){
                i += b - 1;
                shots.add(i + 1);
            }
        }
 
        int numOfShot = shots.size() - a + 1;
        System.out.println(numOfShot);
        for (int i=0; i<numOfShot; i++){
            System.out.print(shots.get(i) + " ");
        }
 
        reader.close();
    }
}
 