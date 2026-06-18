import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class test {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(reader.readLine());
 
        for (int i=0; i<tc; i++) {
            int maxw = 0;
            int maxh = 0;
            int a = Integer.parseInt(reader.readLine());
            for (int j=0; j<a; j++){
                String[] p = reader.readLine().split(" ");
                int w = Integer.parseInt(p[0]);
                int h = Integer.parseInt(p[1]);
                if (h > maxh) maxh = h;
                if (w > maxw) maxw = w;
            }
            System.out.println((maxh+maxw)*2);
        }
        reader.close();
    }
}