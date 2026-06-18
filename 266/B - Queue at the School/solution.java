import java.util.Scanner;
 
public class QueueAtTheSchool {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int t = scanner.nextInt();
 
        scanner.nextLine();
        String line = scanner.nextLine();
        char[] s = line.toCharArray();
 
        for (int k=0; k<t; k++){
            for (int i=0; i<n-1; i++){
                if (s[i] == 'B' && s[i+1] == 'G'){
                    s[i] = 'G';
                    s[i+1] = 'B';
                    i++;
                }
            }
        }
        System.out.println((s));
        scanner.close();
    }
}