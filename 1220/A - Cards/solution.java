import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
 
public class test6 {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int length = scanner.nextInt();
        scanner.nextLine();
        String line = scanner.nextLine();
 
        List<Integer> result = new ArrayList<>();
 
        for (char c : line.toCharArray()){
            if (c == 'n'){
                result.add(1);
            }
        }
        for (char c : line.toCharArray()){
            if (c == 'z'){
                result.add(0);
            }
        }
 
        for (int i=0; i<result.size(); i++){
            System.out.print(result.get(i) + " ");
        }
    }
}