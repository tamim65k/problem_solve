import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
 
public class FindSquare {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
 
        String[] dimensions = reader.readLine().split(" ");
        int r = Integer.parseInt(dimensions[0]);
        int c = Integer.parseInt(dimensions[1]);
 
        int minRow = r, minColumn = c, maxRow = -1, maxColumn = -1;
 
        for (int i=0; i<r; i++){
            String row = reader.readLine();
            for (int  j=0; j<c; j++){
                if (row.charAt(j) == 'B'){
                    if (i < minRow) minRow = i;
                    if (i > maxRow) maxRow = i;
                    if (j < minColumn) minColumn = j;
                    if (j > maxColumn) maxColumn = j;
                }
            }
        }
        int centerRow = (minRow + maxRow)/ 2+1;//+1 for 1 based index i
        int centerColumn = (minColumn + maxColumn)/2+1;//+1 for 1 based index i
        System.out.println(centerRow +" "+ centerColumn);
        reader.close();
    }
}