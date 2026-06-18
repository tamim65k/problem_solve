import java.util.Scanner;
 
public class InSearchOfAnEasyProblem {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int count = 0;
 
        for (int i=0; i<n; i++){
            int num = scanner.nextInt();
 
            if (num == 1){
                count += 1;
            } else if(num == 0) {
                continue;
            }
 
        }
        if (count>=1){
            System.out.println("HARD");
        } else {
            System.out.println("EASY");
        }
 
 
    }
}