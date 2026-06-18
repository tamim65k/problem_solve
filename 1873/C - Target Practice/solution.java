import java.util.*;
 
public class test {
    static final int[][] score = {
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1}
    };
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tc = scanner.nextInt();
        scanner.nextLine();
        for (int t=0; t<tc; t++) {
            solve(scanner);
        }
        scanner.close();
    }
 
    public static void solve(Scanner scanner){
        int ans = 0;
        for (int i=0; i<10; i++){
            String line = scanner.nextLine();
            for (int j=0; j<10; j++){
                char c = line.charAt(j);
                if (c=='X'){
                    ans += score[i][j];
                }
            }
        }
        System.out.println(ans);
    }
}