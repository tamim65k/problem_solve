import java.io.*;
import java.util.*;
 
public class test2 {
    public static void main(String[] args) {
        FastReader reader = new FastReader();
        int tc = reader.nextInt();
 
        while (tc-- > 0) {
            solve(reader);
        }
    }
 
    private static void solve(FastReader reader) {
        int n = reader.nextInt();
        int[] a = new int[n];
        int maxi = Integer.MIN_VALUE, mini = Integer.MAX_VALUE;
 
        for (int i = 0; i < n; i++) {
            a[i] = reader.nextInt();
            maxi = Math.max(maxi, a[i]);
            mini = Math.min(mini, a[i]);
        }
 
        long sum = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                sum += 0;
            } else {
                sum += maxi - mini;
            }
        }
 
        System.out.println(sum);
    }
 
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
 
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt() {
            return Integer.parseInt(next());
        }
    }
}