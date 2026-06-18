import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
 
public class UltraFastMathematician {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String a = scanner.nextLine();
        String b = scanner.nextLine();
        StringBuilder result = new StringBuilder();
 
        if (a.length() == b.length()){
        for (int i=0; i<a.length(); i++){
            if (a.charAt(i) == b.charAt(i)){
                result.append(0);
            } else {
                result.append(1);
            }
        }}
 
        System.out.println(result.toString());
    }
}