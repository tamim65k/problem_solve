import java.util.Scanner;
 
public class NastyaIsReadingABook {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        solve(scanner);
        scanner.close();
    }
    public static void solve(Scanner scanner){
        int n = scanner.nextInt();
        int[][] array = new int[n][2];
        for (int i=0; i<n; i++){
            array[i][0] = scanner.nextInt();
            array[i][1] = scanner.nextInt();
        }
        int k = scanner.nextInt();
        int chapterLeft = 0;
        for (int i=0; i<n; i++){
            if (array[i][1] >= k){
                chapterLeft = n - i;
                break;
            }
        }
        System.out.println(chapterLeft);
    }
}