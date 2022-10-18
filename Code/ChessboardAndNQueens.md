---
Name: 'Pranay Chauhan'  
Github: 'https://github.com/PranayChauhan2516'  
WebSite: ''  
Problem: 'Chessboard and Queens'  
Description: 'Place 8 queens such that no two queens attack each other.'  
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
        ChessboardAndQueens solver = new ChessboardAndQueens();
        solver.solve(1, in, out);
        out.close();
    }
 
    static class ChessboardAndQueens {
        boolean[][] grid = new boolean[8][8];
        boolean[] col = new boolean[16];
        boolean[] diag = new boolean[16];
        boolean[] diag2 = new boolean[16];
        int ways = 0;
 
        public void solve(int testNumber, FastReader in, PrintWriter out) {
            for (int i = 0; i < 8; ++i) {
                char[] c = in.next().toCharArray();
                for (int j = 0; j < 8; ++j) {
                    grid[i][j] = c[j] == '*';
                }
            }
            go(0);
            out.println(ways);
        }
 
        void go(int r) {
            if (r == 8) {
                ways++;
                return;
            }
            for (int i = 0; i < 8; ++i) {
                if (col[i] || diag[r + i] || diag2[r - i + 7] || grid[r][i]) {
                    continue;
                }
                col[i] = diag[r + i] = diag2[r - i + 7] = true;
                go(r + 1);
                col[i] = diag[r + i] = diag2[r - i + 7] = false;
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
 
        public String next() {
            int c = read();
            while (isSpaceChar(c)) c = read();
            StringBuilder res = new StringBuilder();
            do {
                res.appendCodePoint(c);
                c = read();
            } while (!isSpaceChar(c));
            return res.toString();
        }
 
        public boolean isSpaceChar(int c) {
            if (filter != null) return filter.isSpaceChar(c);
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
 
        public interface SpaceCharFilter {
            public boolean isSpaceChar(int ch);
 
        }
 
    }
}
 

```
