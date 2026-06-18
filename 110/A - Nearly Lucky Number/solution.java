import java.math.BigInteger;
import java.util.Scanner;
 
public class NearlyLuckyNumber {
    public static void main(String args[]){
 
        Scanner scanner = new Scanner(System.in);
        BigInteger num = scanner.nextBigInteger();
 
        // Converting num to string
        String numStr = String.valueOf(num);
        int countLucky = 0;
        String count = String.valueOf(countLucky);
 
        boolean checkDigit = false;
 
        for (char ch : numStr.toCharArray()){
            if (ch == '4' || ch == '7'){
                countLucky++;
                checkDigit = true;
            }
        }
 
        if (countLucky == 7 || countLucky == 4){
            checkDigit = true;
        } else {
            checkDigit = false;
        }
 
 
        if (checkDigit){
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        scanner.close();
    }
}