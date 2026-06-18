import java.util.*;
 
public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] array = new int[n];
        for (int i=0; i<n; i++){
            array[i] = scanner.nextInt();
        }
        Arrays.sort(array);
        int oddIndex = 0;
        int evenIndex = 0;
        int arrayLength = array.length;
        if (arrayLength % 2 == 1){
             oddIndex = (arrayLength/2);
            System.out.println(array[oddIndex]);
        } else {
            evenIndex = (arrayLength/2)-1;
            System.out.println(array[evenIndex]);
        }
        scanner.close();
    }
}