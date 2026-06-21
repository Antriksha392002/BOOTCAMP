import java.util.*;

public class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        
        int arr[][]={{1,2,3},{4,5,6},{7,8,9}};
        int n=arr.length;
        int arr1[][]=new int[3][3];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                arr1[i][j]=arr[n-i-1][n-j-1];
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr1[i][j]+"  ");
            }
            System.out.println(" ");
        }
    }
}