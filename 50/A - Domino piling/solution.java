import java.util.Scanner;
 
public class DominoPiling {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int m = scan.nextInt();
        int n = scan.nextInt();
        if(m<= 16 && n<=16){
            int result = (m*n)/2;
            System.out.println(result);
        } else {
            return;
        }
    }
}