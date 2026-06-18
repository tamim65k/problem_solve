import java.util.Scanner;
 
//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class BitPlusPlus {
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();//Consume the new line character.
 
        int x = 0;
 
        for(int i=0; i<n; i++){
            String statement = sc.nextLine();
 
            if(statement.contains("++")){
                x++;
            } else if (statement.contains("--")) {
                x--;
            }
 
        }
        System.out.println(x);
        sc.close();
    }
}