---
Name: 'Pranay Chauhan'  
Github: 'https://github.com/PranayChauhan2516'  
WebSite: 'https://cses.fi/problemset/task/1646/'  
Problem: 'Static Range Sum Queries'  
Description: 'Return the sum of elements for every query [i,j]'  
Language: 'Java' 
---
```java

import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
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
        StaticRangeSumQueries solver = new StaticRangeSumQueries();
        solver.solve(1, in, out);
        out.close();
    }
 
    static class StaticRangeSumQueries {
        public void solve(int testNumber, FastReader in, PrintWriter out) {
            int n = in.nextInt(), m = in.nextInt();
            long[] a = in.readLongArray(n);
            for (int i = 1; i < n; ++i) {
                a[i] += a[i - 1];
            }
            for (int i = 0; i < m; ++i) {
                int x = in.nextInt() - 1, y = in.nextInt() - 1;
                out.println(a[y] - (x - 1 == -1 ? 0 : a[x - 1]));
            }
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
 
        public long nextLong() {
            int c = read();
            while (isSpaceChar(c)) c = read();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            long res = 0;
            do {
                if (c < '0' || c > '9') throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
 
        public boolean isSpaceChar(int c) {
            if (filter != null) return filter.isSpaceChar(c);
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
 
        public long[] readLongArray(int size) {
            long[] array = new long[size];
            for (int i = 0; i < size; i++) array[i] = nextLong();
            return array;
        }
 
        public interface SpaceCharFilter {
            public boolean isSpaceChar(int ch);
 
        }
 
    }
}
 
```
