import java.util.Arrays;
import java.util.Scanner;
 
public class helpfulMaths {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
 
        String[] numbers = input.split("\\+");
        int[] numArray = new int[numbers.length];
 
        for(int i=0; i<numbers.length; i++){
            numArray[i] = Integer.parseInt(numbers[i]);
        }
 
        Arrays.sort(numArray);
 
        StringBuilder ouput = new StringBuilder();
        for(int i=0; i< numArray.length; i++){
            ouput.append(numArray[i]);
            if(i < numArray.length - 1){
                ouput.append("+");
            }
        }
        System.out.println(ouput.toString());
        scanner.close();
    }
}