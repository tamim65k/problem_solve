import java.util.Scanner;
 
public class AngryStudents {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
 
        for (int g = 0; g < t; g++) {
            int k = scanner.nextInt();
            String s = scanner.next();
 
            int lastAngryMoment = 0;
 
            for (int i = 0; i < k; i++) {
                if (s.charAt(i) == 'A') {
                    int currentMoment = 0;
                    for (int j = i + 1; j < k && s.charAt(j) == 'P'; j++) {
                        currentMoment++;
                        lastAngryMoment = Math.max(lastAngryMoment, currentMoment);
                    }
                }
            }
 
            System.out.println(lastAngryMoment);
        }
 
        scanner.close();
    }
}