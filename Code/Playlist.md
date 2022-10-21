---
Name: 'Pranay Chauhan'  
Github: 'https://github.com/PranayChauhan2516'  
WebSite: 'https://cses.fi/problemset/task/1141/'  
Problem: 'Playlist'  
Description: 'Longest unique sequence'  
Language: 'Java' 
---
```java

import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.InputMismatchException;
import java.io.IOException;
import java.io.InputStream;
 
/**
 * Built using CHelper plug-in
 * Actual solution is at the top
 *
 * @author Pranay2516
 */
public class Main {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        FastReader in = new FastReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Playlist solver = new Playlist();
        solver.solve(1, in, out);
        out.close();
    }
 
    static class Playlist {
        public void solve(int testNumber, FastReader in, PrintWriter out) {
            int n = in.nextInt();
            int[] a = in.readArray(n);
            HashMap<Integer, Integer> h = new HashMap<>();
            int ans = 0;
            int j = 0;
            for (int i = 0; i < n; ++i) {
                j = Math.max(j, h.getOrDefault(a[i], 0));
                ans = Math.max(ans, i - j + 1);
                h.put(a[i], i + 1);
            }
            out.println(ans);
        }
 
    }
 
    static class FastReader {
        private InputStream stream;
        private byte[] buf = new byte[1024];
        private int curChar;
        private int numChars;
        private FastReader.SpaceCharFilter filter;
 
        public FastReader(InputStream stream) {
            this.stream = stream;
        }
 
        public int read() {
            if (numChars == -1) throw new InputMismatchException();
            if (curChar >= numChars) {
                curChar = 0;
                try {
                    numChars = stream.read(buf);
                } catch (IOException e) {
                    throw new InputMismatchException();
                }
                if (numChars <= 0) return -1;
            }
            return buf[curChar++];
        }
 
        public int nextInt() {
            int c = read();
            while (isSpaceChar(c)) c = read();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            int res = 0;
            do {
                if (c < '0' || c > '9') throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = read();
            }
            while (!isSpaceChar(c));
            return res * sgn;
        }
 
        public boolean isSpaceChar(int c) {
            if (filter != null) return filter.isSpaceChar(c);
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
 
        public int[] readArray(int size) {
            int[] array = new int[size];
            for (int i = 0; i < size; i++) array[i] = nextInt();
            return array;
        }
 
        public interface SpaceCharFilter {
            public boolean isSpaceChar(int ch);
 
        }
 
    }
}
 
