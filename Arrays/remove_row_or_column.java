import java.util.*;

public class remove_row_or_column{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        int arr[][]={{1,2,3},{4,5,20},{7,8,9}};

        int MAX=Integer.MIN_VALUE;
        int max[]=new int[3];
        for(int i=0;i<arr.length;i++){
            int sum=0;
            for(int j=0;j<arr.length;j++){
                sum=sum+arr[i][j];
            }
                max[i]=sum;
            if(sum>MAX){
                MAX=sum;
            }
        }

        for(int i=0;i<arr.length;i++){
            if(max[i]==MAX){
                continue;
            }
            for(int j=0;j<arr.length;j++){
                    System.out.print(arr[i][j]+" ");
                
            }
            System.out.println();
        }
    }
}