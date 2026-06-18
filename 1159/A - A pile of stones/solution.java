import java.util.Scanner;
 
public class test2 {
    public static void main(String args[]){
        Scanner scanner =  new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        int c = 0;
        String s = scanner.nextLine();
 
        for (char operation : s.toCharArray()){
            if (operation == '+')
                c++;
            else if (c > 0)
                c--;
        }
        System.out.println((c>0)?c:0);
    }
}