import java.io.DataInputStream;
import java.io.IOException;
 
public class t {
    public static void main(String[] args) throws IOException {
        Reader reader = new Reader();
 
        int n = reader.nextInt();
        int m = reader.nextInt();
 
        System.out.println(calculatePairs(n, m));
    }
 
    private static long calculatePairs(int n, int m) {
        long[] countN = new long[5];
        long[] countM = new long[5];
 
        // Count remainders for n
        for (int i = 1; i <= n; i++) {
            countN[i % 5]++;
        }
 
        // Count remainders for m
        for (int j = 1; j <= m; j++) {
            countM[j % 5]++;
        }
 
        // Calculate pairs directly using precomputed frequencies
        long count = countN[0] * countM[0]
                   + countN[1] * countM[4]
                   + countN[2] * countM[3]
                   + countN[3] * countM[2]
                   + countN[4] * countM[1];
 
        return count;
    }
 
    static class Reader {
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
 
        public Reader() throws IOException {
            din = new DataInputStream(System.in);
            buffer = new byte[1 << 16];
            bufferPointer = bytesRead = 0;
        }
 
        public int nextInt() throws IOException {
            int ret = 0;
            byte c = read();
            while (c <= ' ') c = read();
            boolean neg = (c == '-');
            if (neg) c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (neg) return -ret;
            return ret;
        }
 
        private void fillBuffer() throws IOException {
            bytesRead = din.read(buffer, bufferPointer = 0, buffer.length);
            if (bytesRead == -1) buffer[0] = -1;
        }
 
        private byte read() throws IOException {
            if (bufferPointer == bytesRead) fillBuffer();
            return buffer[bufferPointer++];
        }
    }
}