import java.util.Scanner;
 
public class beautifulMatrix {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int row = 0, col = 0;
        // Read the 5x5 matrix
        for(int i=1; i<=5; i++){
            for(int j=1; j<=5; j++){
                int value = scanner.nextInt();
                //Locate the position of the number one
                if (value == 1){
                    row = i;
                    col = j;
                }
            }
        }
        //Calculate the number of moves to bring '1' to the center (3,3)
        int moves = Math.abs(row - 3) + Math.abs(col - 3);
        System.out.println(moves);
    }
}