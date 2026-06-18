import java.util.HashSet;
import java.util.Scanner;
 
public class BeautifulYear {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int year = scanner.nextInt();
        while (true){
            year++;
            if(DistinctDigit(year)){
                System.out.println(year);
                break;
            }
        }
    }
    public static boolean DistinctDigit(int n){
        String numStr = Integer.toString(n);
        HashSet<Character> digitSet = new HashSet<>();
 
        for (char c: numStr.toCharArray()){
            if (digitSet.contains(c)){
                return false;
            }
            digitSet.add(c);
        }
        return true;
    }
}