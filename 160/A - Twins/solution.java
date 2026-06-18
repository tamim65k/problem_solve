import java.util.Arrays;
import java.util.Scanner;
 
public class Twins {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] coin = new int[n];
        int myCoin = 0;
        int totalCoin = 0;
        int coinNeeded = 0;
 
       for (int i=0; i<n; i++){
           coin[i] = scanner.nextInt();
       }
 
       totalCoin = Arrays.stream(coin).sum();
       Arrays.sort(coin);
       reverseOrder(coin);
 
       for (int coins : coin){
           myCoin += coins;
           coinNeeded++;
           if (myCoin > totalCoin - myCoin){
               break;
           }
       }
 
        System.out.println(coinNeeded);
    }
 
    public static void reverseOrder(int[] array){
        int left = 0, right = array.length-1;
        while (left < right){
            int temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            left++;
            right--;
        }
 
    }
}