/**
* Contributor Info : 
* Name: Riya Bhandari
* Github: https://github.com/RiyaBhandari-2811
*/

/**
 * 👉 Problem: Matrix Menu Driven Code  
 * Description: Java Code to add , subtract , multiply & transpose of matrix .
 */

import java.util.Scanner ; 

class Array
{
    int row , column ;

    Array(){}

    Array(int m,int n)
    {
        row=m;
        column=n;
       
    }

    // Addition method
    void addMatrix(int [][] a , int [][] b)
    {
        int add[][] = new int[row][column];

        for ( int c = 0 ; c < row ; c++ ){
            for ( int d = 0 ; d < column ; d++ ){
                add[c][d] = a[c][d] + b[c][d]; 
            }
        }
        
        System.out.println("Sum of the matrices :- ");
        
        for ( int c = 0 ; c < row ; c++ )
        {
            for (int d = 0 ; d < column ; d++ )
            System.out.print(add[c][d]+"\t");
            
            System.out.println("\n");
        }
    }
    
    // Subtraction method
    void subMatrix(int [][] a , int [][] b)
    {
        int sub[][] = new int[row][column];

        for ( int c = 0 ; c < row ; c++ ){
            for ( int d = 0 ; d < column ; d++ ){
                sub[c][d] = b[c][d] - a[c][d]; 
            }
        }
        
        System.out.println("Subtraction of the matrices :- ");
        
        for ( int c = 0 ; c < row ; c++ )
        {
            for (int d = 0 ; d < column ; d++ )
            System.out.print(sub[c][d]+"\t");
            
            System.out.println("\n");
        }
    }

    // Multiplication method
    void mulMatrix(int [][] a , int [][] b)
    {
        int mul[][] = new int[row][column];

        for ( int c = 0 ; c < row ; c++ ){
            for ( int d = 0 ; d < column ; d++ ){
                mul[c][d] = a[c][d] * b[c][d]; 
            }
        }
        
        System.out.println(" Multiplication of the matrices :- ");
        
        for ( int c = 0 ; c < row ; c++ )
        {
            for (int d = 0 ; d < column ; d++ )
            System.out.print(mul[c][d]+"\t");
            
            System.out.println("\n");
        }
    }

    // Transpose of matrix 
    void traMatrix(int [][] a )
    {
        
        int transpose[][] = new int[column][row];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++)
            transpose[j][i] = a[i][j];
        }
        
        System.out.println(" Transpose of the matrices :- ");
        
        for ( int c = 0 ; c < column ; c++ )
        {
            for (int d = 0 ; d < row ; d++ )
            System.out.print(transpose[c][d]+"\t");
            
            System.out.println("\n");
        }
    }
    

}

public class Matrix {

    //Main class
    public static void main (String[] args){
         
        Scanner in = new Scanner(System.in);  

        // Take the size of rows & column for matrix from user 
        System.out.println(" Enter the no. of rows of your matrix : ");
        int m = in.nextInt();
        System.out.println(" Enter the no. of columns of your matrix : ");
        int n = in.nextInt();
        
        // Declaring array
        int arr1[][] = new int[m][n];
        int arr2[][] = new int[m][n];
 
        // Taking values of both array from user 
        System.out.println("Input elements of first matrix");
        for (  int i = 0 ; i < m ; i++ )
           for ( int j = 0 ; j < n ; j++ )
            arr1[i][j] = in.nextInt();

        
        System.out.println("Input the elements of second matrix");
        for ( int i = 0 ; i < m ; i++ )
          for ( int j = 0 ; j < n ; j++ )
            arr2[i][j] = in.nextInt();


        // Displaying matrix 
        System.out.println("\nEntered Matrix 1 is : ");
            for (int i = 0; i < m; i++) {
                   for (int j = 0; j < n; j++) {
                         System.out.print(arr1[i][j] + " ");
                   }
                   System.out.println();
            }

        System.out.println("\nEntered Matrix 2 is : ");
            for (int i = 0; i < m; i++) {
                   for (int j = 0; j < n; j++) {
                         System.out.print(arr2[i][j] + " ");
                   }
                   System.out.println();
                }
                
        System.out.println();
         
        // Object creation 
        Array matrix = new Array(m,n);


        // Menu Driven code to ask user there choice of matrix operation .
        while(true){
            

            System.out.println(" 1] Addition  Of Matrix");
            System.out.println(" 2] Subtract  Of Matrix");
			System.out.println(" 3] Multiply  Of Matrix");
			System.out.println(" 4] Transpose Of Matrix");
			System.out.println(" 5] Exit");
            System.out.print(" \n ");
            System.out.println("Enter your Choice : ");
            int choice = in.nextInt();
            
            switch (choice) {
                case 1:
                matrix.addMatrix(arr1,arr2);
                System.out.print(" \n ");
                break;
                case 2:
                matrix.subMatrix(arr1,arr2);
                System.out.print(" \n ");
                break;
                case 3:
                matrix.mulMatrix(arr1,arr2);
                System.out.print(" \n ");
                break;
                case 4:
                matrix.traMatrix(arr1);
                System.out.print(" \n ");
                break;
                case 5:
                System.out.println(" Exit ");
                System.exit(0);
                break;
                default:
                System.out.println(" Invalid Choice");
                break;
            }
            System.out.print(" \n ");
        }
        

    }
}
