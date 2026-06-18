import java.util.Scanner;
 
public class VanyaAndFence {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int hf = scanner.nextInt();
        int width = 0;
 
        for (int i=0; i<n; i++){
            int h = scanner.nextInt();
            if (h > hf ){
                width +=2 ;
            } else {
                width ++;
            }
        }
        System.out.println(width);
    }
}