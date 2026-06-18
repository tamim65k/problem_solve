import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
 
// if lucky yes only 4, 7 and divided by 4,7
// if almost lucky yes, divided by lucky numbers upto 1000
public class LuckyDivision {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
 
        // A list of lucky numbers upto 1000
        List<Integer> luckyNumbers = generateLuckyNumbers(1000);
 
 
        boolean isAlmostLucky =false;
        for (int lucky : luckyNumbers){
            if (n % lucky == 0){
                isAlmostLucky = true;
                break;
            }
        }
 
        System.out.println((isAlmostLucky) ? "YES" : "NO");
    }
    public static boolean containsOnly4And7(int n){
        if (n % 7 == 0 || n % 4 == 0) {
            return true;
        }
            String numStr = Integer.toString(n);
            for (char ch : numStr.toCharArray()){
                if (ch != '4' && ch != '7'){
                    return false;
                }
            }
        return true;
    }
    public static List<Integer> generateLuckyNumbers(int limit){
        // A list of lucky numbers upto 1000
        List<Integer> luckyNumbers = new ArrayList<>();
        for (int i=1; i<limit; i++){
            if (containsOnly4And7(i)){
                luckyNumbers.add(i);
            }
        }
        return luckyNumbers;
    }
}