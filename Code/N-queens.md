---
Name: 'Shivank srivastava'
Github: 'https://github.com/shivank911'
WebSite: 'https://github.com/shivank911'
Problem: 'N-queens'
Description: 'To place n queens in an NxN chessboard successfully.'
Explanation: 'Size of the chess board whic is n is given by the user!' 
Language: 'JAVA' 
---
```java
import java.util.*;
import java.io.*;
import java.util.*;

public class Nqueens {

    public static boolean IsQueenSafe(boolean[][] chess, int row, int col) {
       for(int i=col-1;i>=0;i--){
           if(chess[row][i]==true)
           return false;
       }
       for(int i=row-1;i>=0;i--){
           if(chess[i][col]==true)
           return false;
       }
       for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
           if(chess[i][j]==true)
           return false;
       }
       for(int i=row-1,j=col+1;i>=0 && j<chess.length;i--,j++){
           if(chess[i][j]==true)
           return false;
       }
       return true;
        
        
    }

    public static void nqueens(int qpsf, int tq, boolean[][] chess, int lcno) {
        if (qpsf == tq) {
            for (int row = 0; row < chess.length; row++) {
                for (int col = 0; col < chess.length; col++) {
                    System.out.print(chess[row][col] ? "q	" : "-	");
                }
                System.out.println();
            }
            System.out.println();
            return;
        }

        for (int i = lcno + 1; i < chess.length * chess.length; i++) {
            int row = i / chess.length;
            int col = i % chess.length;

            if (chess[row][col] == false && IsQueenSafe(chess, row, col)) {
                chess[row][col] = true;
                nqueens(qpsf + 1, tq, chess, row * chess.length + col);
                chess[row][col] = false;
            }
        }
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        boolean[][] chess = new boolean[n][n];

        nqueens(0, n, chess, -1);
    }
}
```