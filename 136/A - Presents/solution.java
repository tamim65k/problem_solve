import java.util.Scanner;
 
public class Presents {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] give = new int[n]; // 1 based input
        int[] receive = new int[n];
 
        for (int i=0; i<n; i++){
            give[i] = scanner.nextInt();
        }
 
        for (int i=0; i<n; i++){
            receive[give[i]-1] = i+1 ;
        }
 
        for (int i=0; i<n; i++){
            System.out.print(receive[i] + " ");
        }
    }
}