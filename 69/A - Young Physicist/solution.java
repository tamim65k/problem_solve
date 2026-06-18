import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
 
public class YoungPhysicist {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int x=0,y=0,z=0;
 
        for (int i=0; i<n; i++){
            int sumX = scanner.nextInt();
            int sumY = scanner.nextInt();
            int sumZ = scanner.nextInt();
            x += sumX;
            y += sumY;
            z += sumZ;
        }
        System.out.println((x == 0 && y == 0 && z == 0) ? "YES" : "NO");
    }
}