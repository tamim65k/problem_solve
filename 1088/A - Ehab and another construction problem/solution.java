import java.util.*;
 
public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        boolean found = false;
 
        for (int i=1; i<=n && !found; i++){
           for (int j=1; j<=n && !found; j++){
               if ((i*j)>n && (i/j)<n && i%j==0){
                   System.out.println(i+" "+j);
                   found = true;
               }
           }
        }
        System.out.println((!found)?"-1":"");
        scanner.close();
    }
}